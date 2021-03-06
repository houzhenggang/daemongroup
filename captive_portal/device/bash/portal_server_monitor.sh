#/bin/bash
#用来监视portal server是否可用，如果不可用，就发送trap�
#这个脚本是一个守护进程，每隔一段时间之后，就会去ping相应的portal server ip，只ping一次 ping命令也是
#下一次的时候会先检查之前ping命令的结果。如果连续三次ping命令都不能通，就发送trap。
#这个脚本大部分的时间都是在sleep，不会占用cpu太多时间。

source cp_start.sh

PORTAL_UNREACHABLE_IPS=""

if [ ! -f ${CP_DB_FILE} ];then
	exit
fi

while read line
do
	id=`echo $line | awk '{print $1}'`
	ip=`echo $line | awk '{print $2}'`

	ping.sh $ip >/dev/null 2>&1
	if [ ! $? == "0" ];then
		#该portal相关的信息
		if [ "${PORTAL_UNREACHABLE_IPS}" == "" ];then

			PORTAL_UNREACHABLE_IPS=${ip}
		else

			PORTAL_UNREACHABLE_IPS="${PORTAL_UNREACHABLE_IPS},${ip}"
		fi
	fi
done < ${CP_DB_FILE}

if [ ! "${PORTAL_UNREACHABLE_IPS}" == "" ];then
	printf ${PORTAL_UNREACHABLE_IPS}
fi
