/*******************************************************************************
Copyright (C) Autelan Technology


This software file is owned and distributed by Autelan Technology 
********************************************************************************


THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND 
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED 
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE 
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR 
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES 
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; 
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON 
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS 
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
********************************************************************************
* portal_ha.c
*
*
* CREATOR:
* autelan.software.xxx. team
*
* DESCRIPTION:
* xxx module main routine
*
*
*******************************************************************************/

#ifndef _EAG_ERRCODE_H
#define _EAG_ERRCODE_H

#define EAG_TRUE	1
#define EAG_FALSE	0

#define EAG_RETURN_OK			(0)

#define EAG_ERR_BASE			(0)

#define EAG_ERR_PBULIC_BASE		(EAG_ERR_BASE)
#define EAG_BLKMEM_ERR_BASE		(EAG_ERR_BASE-500)
#define EAG_LOG_ERR_BASE		(EAG_ERR_BASE-800)
#define EAG_INS_ERR_BASE		(EAG_ERR_BASE-1100)

#define EAG_THREAD_ERR_BASE		(EAG_ERR_BASE-1500)
#define EAG_REDIR_ERR_BASE		(EAG_ERR_BASE-2000)
#define EAG_PORTAL_ERR_BASE		(EAG_ERR_BASE-3000)
#define EAG_RADIUS_ERR_BASE		(EAG_ERR_BASE-4000)
#define EAG_VRRP_ERR_BASE		(EAG_ERR_BASE-5000)
#define EAG_HASH_ERR_BASE		(EAG_ERR_BASE-6000)
#define EAG_APPCONN_ERR_BASE	(EAG_ERR_BASE-7000)
#define EAG_CAPTIVE_ERR_BASE    (EAG_ERR_BASE-9000)
#define EAG_DBUS_ERR_BASE		(EAG_ERR_BASE-10000)
#define EAG_WIRELESS_ERR_BASE	(EAG_ERR_BASE-11000)
#define EAG_PDC_ERR_BASE		(EAG_ERR_BASE-12000)
#define EAG_RDC_ERR_BASE		(EAG_ERR_BASE-13000)
#define EAG_CONFIG_ERR_BASE		(EAG_ERR_BASE-14000)
#define EAG_STAMSG_ERR_BASE		(EAG_ERR_BASE-15000)

/*public error!*/
#define EAG_ERR_UNKNOWN			(EAG_ERR_PBULIC_BASE-1)
#define EAG_ERR_INPUT_PARAM_ERR	(EAG_ERR_PBULIC_BASE-2)
#define EAG_ERR_MALLOC_FAILED	(EAG_ERR_PBULIC_BASE-3)
#define EAG_ERR_NULL_POINTER	(EAG_ERR_PBULIC_BASE-4)
#define EAG_ERR_SOCKET_FAILED		(EAG_ERR_PBULIC_BASE-5)
#define EAG_ERR_SOCKET_BIND_FAILED	(EAG_ERR_PBULIC_BASE-6)
#define EAG_ERR_SOCKET_SEND_FAILED	(EAG_ERR_PBULIC_BASE-7)
#define EAG_ERR_SOCKET_RECV_FAILED	(EAG_ERR_PBULIC_BASE-8)
#define EAG_ERR_SOCKET_OPT_FAILED	(EAG_ERR_PBULIC_BASE-9)
#define EAG_ERR_FILE_OPEN_FAILED	(EAG_ERR_PBULIC_BASE-10)
#define EAG_ERR_FILE_READ_FAILED	(EAG_ERR_PBULIC_BASE-11)
#define EAG_ERR_FILE_WRITE_FAILED	(EAG_ERR_PBULIC_BASE-12)
#define EAG_ERR_DBUS_FAILED			(EAG_ERR_PBULIC_BASE-13)
#define EAG_ERR_REG_ERR				(EAG_ERR_PBULIC_BASE-14)

/*eag blk mem error!*/
#define EAG_BLKMEM_ERR_ITEM_NOT_IN_BLK			(EAG_BLKMEM_ERR_BASE-1)
#define EAG_BLKMEM_ERR_ILLEGAL_ITEM_POINTER		(EAG_BLKMEM_ERR_BASE-2)
#define EAG_BLKMEM_ERR_ITEM_NUM_OVER_LIMIT		(EAG_BLKMEM_ERR_BASE-3)
#define EAG_BLKMEM_ERR_HAS_MAX_BLK_NUM			(EAG_BLKMEM_ERR_BASE-4)
#define EAG_BLKMEM_ERR_MALLOC_FAILED			(EAG_BLKMEM_ERR_BASE-5)
#define EAG_BLKMEM_ERR_HAS_ITEM_NOT_FREE		(EAG_BLKMEM_ERR_BASE-6)

/*eag log error!*/
#define EAG_LOG_ERR_INIT_BLKMEM_FAILED					(EAG_LOG_ERR_BASE-1)
#define EAG_LOG_ERR_ADD_FILTER_OVER_LENGTH				(EAG_LOG_ERR_BASE-2)
#define EAG_LOG_ERR_ADD_FILTER_BLK_MALLOC_FAILED		(EAG_LOG_ERR_BASE-3)
#define EAG_LOG_ERR_ADD_FILTER_ALREADY_HAVE				(EAG_LOG_ERR_BASE-4)
#define EAG_LOG_ERR_FILER_NOT_FIND						(EAG_LOG_ERR_BASE-5)
#define EAG_LOG_ERR_ALREADY_SET							(EAG_LOG_ERR_BASE-6)
#define EAG_LOG_ERR_LEVEL_NOT_MATCH						(EAG_LOG_ERR_BASE-7)

/*eag thread error!*/
#define EAG_ERR_THREAD_CREATE_FAILED					(EAG_THREAD_ERR_BASE-1)

/*eag redir error!*/
#define EAG_ERR_REDIR_CREATE_FAILED						(EAG_REDIR_ERR_BASE-1)
#define EAG_ERR_REDIR_SOCKET_INIT_FAILED				(EAG_REDIR_ERR_BASE-2)
#define EAG_ERR_REDIR_SOCKET_BIND_FAILED				(EAG_REDIR_ERR_BASE-3)
#define EAG_ERR_REDIR_SOCKET_LISTEN_FAILED				(EAG_REDIR_ERR_BASE-4)
#define EAG_ERR_REDIR_THREAD_ARG_ERROR					(EAG_REDIR_ERR_BASE-5)
#define EAG_ERR_REDIR_CREATE_REDIRCONN_ERROR			(EAG_REDIR_ERR_BASE-6)
#define EAG_ERR_REDIR_ACCEPT_FAILED						(EAG_REDIR_ERR_BASE-7)
#define EAG_ERR_REDIR_HTTP_UNKNOWN_REQUEST_METHORD		(EAG_REDIR_ERR_BASE-8)
#define EAG_ERR_REDIR_HTTP_URL_HAS_NO_ROOT_DIR			(EAG_REDIR_ERR_BASE-9)
#define EAG_ERR_REDIR_HTTP_HAS_NO_REQUEST_VERSION		(EAG_REDIR_ERR_BASE-10)
#define EAG_ERR_REDIR_HTTP_RECV_ERROR					(EAG_REDIR_ERR_BASE-11)
#define EAG_ERR_REDIR_HTTP_WRITE_SYSTEM_ERROR			(EAG_REDIR_ERR_BASE-12)
#define EAG_ERR_REDIR_CONN_OVER_MAX_VALUE_ERROR		(EAG_REDIR_ERR_BASE-13)

/*eag portal error!*/
#define EAG_ERR_PORTAL_CREATE_FAILED					(EAG_PORTAL_ERR_BASE-1)
#define EAG_ERR_PORTAL_INVALID_PKGSIZE					(EAG_PORTAL_ERR_BASE-2)
#define EAG_ERR_PORTAL_INVALID_PKGTYPE					(EAG_PORTAL_ERR_BASE-3)
#define EAG_ERR_PORTAL_INVALID_ATTRTYPE					(EAG_PORTAL_ERR_BASE-4)

#define EAG_ERR_PORTAL_QUEUE_IN_FAILED					(EAG_PORTAL_ERR_BASE-5)
#define EAG_ERR_PORTAL_QUEUE_OUT_NOTFIND				(EAG_PORTAL_ERR_BASE-6)
#define EAG_ERR_PORTAL_GET_INVALID_PKG					(EAG_PORTAL_ERR_BASE-7)
#define EAG_ERR_PORTAL_DECAPS_CB_NOT_SET				(EAG_PORTAL_ERR_BASE-8)
#define EAG_ERR_PORTAL_CREATE_SESS_FAILED				(EAG_PORTAL_ERR_BASE-9)
#define EAG_ERR_PORTAL_ADD_SRV_MAX_NUM					(EAG_PORTAL_ERR_BASE-10)
#define EAG_ERR_PORTAL_ADD_SRV_URL_LEN_LIMITE			(EAG_PORTAL_ERR_BASE-11)
#define EAG_ERR_PORTAL_ADD_SRV_ERR_TYPE					(EAG_PORTAL_ERR_BASE-12)
#define EAG_ERR_PORTAL_ADD_SRV_KEY_EXIST				(EAG_PORTAL_ERR_BASE-13)
#define EAG_ERR_PORTAL_SRV_URL_FORMAT_ERR				(EAG_PORTAL_ERR_BASE-14)
#define EAG_ERR_PORTAL_DEL_SRV_NOT_EXIST				(EAG_PORTAL_ERR_BASE-15)
#define EAG_ERR_PORTAL_DEL_SRV_ERR_TYPE					(EAG_PORTAL_ERR_BASE-16)
#define EAG_ERR_PORTAL_MODIFY_SRV_NOT_EXIST				(EAG_PORTAL_ERR_BASE-17)
#define EAG_ERR_PORTAL_MODIFY_SRV_ERR_TYPE				(EAG_PORTAL_ERR_BASE-18)
#define EAG_ERR_PORTAL_SOCKET_BIND_FAILED				(EAG_PORTAL_ERR_BASE-19)
#define EAG_ERR_PORTAL_SOCKET_SETOPT_FAILED				(EAG_PORTAL_ERR_BASE-20)

#define EAG_ERR_PORTAL_WLANPARAMTER_DESKEY_LEN_LIMITE	(EAG_PORTAL_ERR_BASE-21)
#define EAG_ERR_PORTAL_WLANPARAMTER_NOT_SET_DESKEY		(EAG_PORTAL_ERR_BASE-22)

#define EAG_ERR_PORTAL_ADD_SRV_INTF_LEN_LIMITE			(EAG_PORTAL_ERR_BASE-23)

#define EAG_ERR_PORTAL_SET_WISPR_URL_TYPE_ERR			(EAG_PORTAL_ERR_BASE-24)

#define EAG_ERR_PORTAL_SET_URLPARAM_LEN_LINITE			(EAG_PORTAL_ERR_BASE-25)
#define EAG_ERR_PORTAL_SET_URLPARAM_INPUT_ERR			(EAG_PORTAL_ERR_BASE-26)
#define EAG_ERR_PORTAL_SET_URLPARAM_MAX_NUM				(EAG_PORTAL_ERR_BASE-27)

/*eag radius error!*/
#define EAG_ERR_RADIUS_CREATE_FAILED					(EAG_RADIUS_ERR_BASE-1)
#define EAG_ERR_RADIUS_QUEUE_IN_FAILED					(EAG_RADIUS_ERR_BASE-2)
#define EAG_ERR_RADIUS_QUEUE_OUT_FAILED					(EAG_RADIUS_ERR_BASE-3)
#define EAG_ERR_RADIUS_ID_OUTOFF_RANGE					(EAG_RADIUS_ERR_BASE-4)
#define EAG_ERR_RADIUS_PKG_NOT_IN_QUEUE					(EAG_RADIUS_ERR_BASE-5)
#define EAG_ERR_RADIUS_PKG_OUTOFF_SIZE					(EAG_RADIUS_ERR_BASE-6)
#define EAG_ERR_RADIUS_PKG_LESSTHAN_HDRSIZE				(EAG_RADIUS_ERR_BASE-7)
#define EAG_ERR_RADIUS_WHITH_WRONG_SIZEFILED			(EAG_RADIUS_ERR_BASE-8)
#define EAG_ERR_RADIUS_UNKNOWN_CODE						(EAG_RADIUS_ERR_BASE-9)
#define EAG_ERR_RADIUS_COA_CALLBACK_NOTSET				(EAG_RADIUS_ERR_BASE-10)
#define EAG_ERR_RADIUS_AUTH_CALLBACK_NOTSET				(EAG_RADIUS_ERR_BASE-11)
#define EAG_ERR_RADIUS_ACCT_CALLBACK_NOTSET				(EAG_RADIUS_ERR_BASE-12)
#define EAG_ERR_RADIUS_PKG_FROM_WRONG_SERVER			(EAG_RADIUS_ERR_BASE-13)
#define EAG_ERR_RADIUS_PKG_FROM_WRONG_PORT				(EAG_RADIUS_ERR_BASE-14)
#define EAG_ERR_RADIUS_PKG_NOTFINED_IN_QUEUE			(EAG_RADIUS_ERR_BASE-15)
#define EAG_ERR_RADIUS_PKG_AUTHENTICATOR_CHECK_FAILED	(EAG_RADIUS_ERR_BASE-16)
#define EAG_ERR_RADIUS_SECRET_LENTH_OUTOFF_SIZE			(EAG_RADIUS_ERR_BASE-17)
#define EAG_ERR_RADIUS_CREATE_RADIUSREQ_FAILED 			(EAG_RADIUS_ERR_BASE-18)
#define EAG_ERR_RADIUS_UESRNAME_TOOLEN					(EAG_RADIUS_ERR_BASE-19)
#define EAG_ERR_RADIUS_GET_SERVER_FAILED				(EAG_RADIUS_ERR_BASE-20)
#define EAG_ERR_RADIUS_PKG_CODE_UNEXPECT				(EAG_RADIUS_ERR_BASE-21)
#define EAG_ERR_RADIUS_COA_CHECK_FAILED					(EAG_RADIUS_ERR_BASE-22)
#define EAG_ERR_RADIUS_COA_FROM_UNKNOWN_SERVER			(EAG_RADIUS_ERR_BASE-23)
#define EAG_ERR_RADIUS_DOAMIN_AREADY_EXIST				(EAG_RADIUS_ERR_BASE-24)
#define EAG_ERR_RADIUS_DOAMIN_NOT_EXIST					(EAG_RADIUS_ERR_BASE-25)
#define EAG_ERR_RADIUS_DOMAIN_LEN_ERR					(EAG_RADIUS_ERR_BASE-26)
#define EAG_ERR_RADIUS_PARAM_ERR						(EAG_RADIUS_ERR_BASE-27)
#define EAG_ERR_RADIUS_MAX_NUM_LIMITE					(EAG_RADIUS_ERR_BASE-28)
#define EAG_ERR_RADIUS_SRV_NOT_FIND						(EAG_RADIUS_ERR_BASE-29)
#define EAG_ERR_RADIUS_AUTHENTICATOR_ERROR				(EAG_RADIUS_ERR_BASE-30)
#define EAG_ERR_RADIUS_SOCKET_BIND_FAILED				(EAG_RADIUS_ERR_BASE-31)
#define EAG_ERR_RADIUS_COA_NOT_FOUND					(EAG_RADIUS_ERR_BASE-32)
#define EAG_ERR_RADIUS_DM_USER_NOT_FOUND			(EAG_RADIUS_ERR_BASE-33)
#define EAG_ERR_COA_SOCKET_BIND_FAILED				(EAG_RADIUS_ERR_BASE-34)

/*eag appconn*/
#define EAG_ERR_APPCONN_CREATE_FAILED					(EAG_APPCONN_ERR_BASE-1)
#define EAG_ERR_APPCONN_DELAPP_NOT_INDB					(EAG_APPCONN_ERR_BASE-2)
#define EAG_ERR_APPCONN_APP_NOT_INDB					(EAG_APPCONN_ERR_BASE-3)
#define EAG_ERR_APPCONN_APP_DOWN_IF_UNKNOWN			(EAG_APPCONN_ERR_BASE-4)
#define EAG_ERR_APPCONN_APP_MAC_IS_EMPTY				(EAG_APPCONN_ERR_BASE-5)
#define EAG_ERR_APPCONN_APP_IS_CONFLICT					(EAG_APPCONN_ERR_BASE-6)

/*eag captive */
#define EAG_ERR_CAPTIVE_CREATE_FAILED					(EAG_CAPTIVE_ERR_BASE-0)
#define EAG_ERR_CAPTIVE_SERVICE_NOT_START				(EAG_CAPTIVE_ERR_BASE-1)
#define EAG_ERR_CAPTIVE_SERVICE_ALREADY_START			(EAG_CAPTIVE_ERR_BASE-2)
#define EAG_ERR_CAPTIVE_CAPSESS_NOT_BELONG_CAP			(EAG_CAPTIVE_ERR_BASE-3)
#define EAG_ERR_CAPTIVE_BWRULE_MALLOC_FAILED			(EAG_CAPTIVE_ERR_BASE-4)
#define EAG_ERR_CAPTIVE_RULE_AREADY_IN_WHITE			(EAG_CAPTIVE_ERR_BASE-5)
#define EAG_ERR_CAPTIVE_RULE_NOT_IN_WHITE				(EAG_CAPTIVE_ERR_BASE-6)
#define EAG_ERR_CAPTIVE_RULE_AREADY_IN_BLACK			(EAG_CAPTIVE_ERR_BASE-7)
#define EAG_ERR_CAPTIVE_RULE_NOT_IN_BLACK				(EAG_CAPTIVE_ERR_BASE-8)
#define EAG_ERR_CAPTIVE_INTERFACE_NUM_LIMIT				(EAG_CAPTIVE_ERR_BASE-9)
#define EAG_ERR_CAPTIVE_INTERFACE_AREADY_USED			(EAG_CAPTIVE_ERR_BASE-10)
#define EAG_ERR_CAPTIVE_INTERFACE_NOT_EXIST				(EAG_CAPTIVE_ERR_BASE-11)
#define EAG_ERR_CAPTIVE_REDIR_PARAM_NOT_SET				(EAG_CAPTIVE_ERR_BASE-12)
#define EAG_ERR_CAPTIVE_CALL_SHELL_FAILED				(EAG_CAPTIVE_ERR_BASE-13)
#define EAG_ERR_CAPTIVE_WHITE_LIST_NUM_LIMITE			(EAG_CAPTIVE_ERR_BASE-14)
#define EAG_ERR_CAPTIVE_BLACK_LIST_NUM_LIMITE			(EAG_CAPTIVE_ERR_BASE-14)
#define EAG_ERR_CAPTIVE_ID_FILE_NOT_EXIST			(EAG_CAPTIVE_ERR_BASE-15)
#define EAG_ERR_CAPTIVE_IF_DB_FILE_ALREADY_EXIST			(EAG_CAPTIVE_ERR_BASE-16)


/*eag dbus*/
//#define EAG_ERR_EAGDBUS_ERR								(EAG_DBUS_ERR_BASE-1)

/*eag wireless*/
#define EAG_ERR_WIRELESS_STA_NOT_EXIST					(EAG_WIRELESS_ERR_BASE-1)
#define EAG_ERR_WIRELESS_DLSYM_FAILED					(EAG_WIRELESS_ERR_BASE-2)
#define EAG_ERR_WIRELESS_DLOPEN_FAILED				(EAG_WIRELESS_ERR_BASE-3)
#define EAG_ERR_WIRELESS_NO_STA						(EAG_WIRELESS_ERR_BASE-4)
#define EAG_ERR_WIRELESS_NO_WTP						(EAG_WIRELESS_ERR_BASE-5)
#define EAG_ERR_WIRELESS_CONNECTION_ERR				(EAG_WIRELESS_ERR_BASE-6)
#define EAG_ERR_WIRELESS_NOT_TIMR_YET				(EAG_WIRELESS_ERR_BASE-7)
#define EAG_ERR_WIRELESS_TRAFFIC_LIMIT_FAILED		(EAG_WIRELESS_ERR_BASE-8)

/*eag ins*/
#define EAG_ERR_EAGINS_SERVICE_ALREADY_ENABLE			(EAG_INS_ERR_BASE-1)
#define EAG_ERR_EAGINS_SERVICE_IS_DISABLE				(EAG_INS_ERR_BASE-2)
#define EAG_ERR_EAGINS_NASIP_IS_EMPTY					(EAG_INS_ERR_BASE-3)
#define EAG_ERR_EAGINS_NASIPV6_IS_EMPTY					(EAG_INS_ERR_BASE-4)
/*pdc*/
#define EAG_ERR_PDC_SERVICE_ALREADY_ENABLE		(EAG_PDC_ERR_BASE-1)
#define EAG_ERR_PDC_SERVICE_ALREADY_DISABLE		(EAG_PDC_ERR_BASE-2)
#define EAG_ERR_PDC_PRODUCT_NOT_DISTRIBUTED		(EAG_PDC_ERR_BASE-3)
#define EAG_ERR_PDC_PDCINS_NULL					(EAG_PDC_ERR_BASE-4)
#define EAG_ERR_PDC_SERVER_NULL					(EAG_PDC_ERR_BASE-5)
#define EAG_ERR_PDC_CLIENT_NULL					(EAG_PDC_ERR_BASE-6)
#define EAG_ERR_PDC_MAP_NULL					(EAG_PDC_ERR_BASE-7)
#define EAG_ERR_PDC_MAP_CONFLICT				(EAG_PDC_ERR_BASE-8)
#define EAG_ERR_PDC_MAP_NOT_FOUND				(EAG_PDC_ERR_BASE-9)
#define EAG_ERR_PDC_MAP_NUM_OVERSTEP			(EAG_PDC_ERR_BASE-10)

/* rdc */
#define EAG_ERR_RDC_SERVICE_ALREADY_ENABLE		(EAG_RDC_ERR_BASE-1)
#define EAG_ERR_RDC_SERVICE_ALREADY_DISABLE		(EAG_RDC_ERR_BASE-2)
#define EAG_ERR_RDC_PRODUCT_NOT_DISTRIBUTED		(EAG_RDC_ERR_BASE-3)
#define EAG_ERR_RDC_RDCINS_NULL					(EAG_RDC_ERR_BASE-4)
#define EAG_ERR_RDC_SERVER_NULL					(EAG_RDC_ERR_BASE-5)
#define EAG_ERR_RDC_CLIENT_NULL					(EAG_RDC_ERR_BASE-6)
#define EAG_ERR_RDC_PKTCONNDB_NULL				(EAG_RDC_ERR_BASE-7)
#define EAG_ERR_RDC_USERCONNDB_NULL				(EAG_RDC_ERR_BASE-8)
#define EAG_ERR_RDC_COACONNDB_NULL				(EAG_RDC_ERR_BASE-9)
#define EAG_ERR_RDC_COA_NULL					(EAG_RDC_ERR_BASE-10)
/*eag config*/
#define EAG_ERR_CONFIG_PARAM_OUT_OF_RANGE				(EAG_CONFIG_ERR_BASE-1)
#define EAG_ERR_CONFIG_PARAM_OVER_MAX_VALUE				(EAG_CONFIG_ERR_BASE-2)
#define EAG_ERR_CONFIG_SET_INTERVAL_ERR					(EAG_CONFIG_ERR_BASE-3)
#define EAG_ERR_CONFIG_ITEM_NOT_FOUND					(EAG_CONFIG_ERR_BASE-4)
#define EAG_ERR_CONFIG_ITEM_PARAM_CONFLICT				(EAG_CONFIG_ERR_BASE-5)

#define EAG_ERR_HANSI_IS_BACKUP		(EAG_VRRP_ERR_BASE-1)
const char *eag_errcode_content(int errcode);

#endif

