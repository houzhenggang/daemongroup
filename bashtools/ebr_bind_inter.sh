#!/bin/sh
#
###########################################################################
#
#              Copyright (C) Autelan Technology
#
#This software file is owned and distributed by Autelan Technology 
#
############################################################################
#THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
#ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
#WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
#DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR 
#ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
#(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
#LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
#ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
#(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
#SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
##############################################################################
#
# eag_init
#
# CREATOR:
# autelan.software.xxx. team
# 
# DESCRIPTION: 
#     
#############################################################################

MAND_PATH=/opt/awk/ip_addra.awk
FILE_TEMP_PATH=/var/run/apache2/ebr_bind_inter.tmp1
FILE_PATH=/var/run/apache2/ebr_bind_inter.tmp
if [ ! -f $FILE_TEMP_PATH ]
        then
                touch $FILE_TEMP_PATH
                chmod 666 $FILE_TEMP_PATH
fi
ip addr|awk -f $MAND_PATH | awk  'BEGIN{ FS=" ";RS="\n" }{ print $1 ;}' > $FILE_TEMP_PATH
if [ ! -f $FILE_PATH ]
        then
                touch $FILE_PATH
                chmod 666 $FILE_PATH
fi
awk '!a[$0]++' $FILE_TEMP_PATH > $FILE_PATH
