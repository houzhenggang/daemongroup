#ifndef _HMD_DBUS_DEF_H
#define _HMD_DBUS_DEF_H

#ifndef PATH_LEN
#define PATH_LEN 64
#endif

extern char HMD_DBUS_BUSNAME[PATH_LEN];
extern char HMD_DBUS_OBJPATH[PATH_LEN];
extern char HMD_DBUS_INTERFACE[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_LOCAL_HANSI[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_DHCP_AUTO_RESTART[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_VRRP_GLOBAL_SWITCH_ADD_DEL_HANSI[PATH_LEN];

extern char HMD_DBUS_CONF_METHOD_REMOTE_HANSI[PATH_LEN];
extern char HMD_DBUS_METHOD_SET_LOCAL_HANSI_STATE[PATH_LEN];
extern char HMD_DBUS_METHOD_SET_LOCAL_HANSI_UPLINK_IF[PATH_LEN];
extern char HMD_DBUS_METHOD_SET_LOCAL_HANSI_DOWNLINK_IF[PATH_LEN];
extern char HMD_DBUS_METHOD_DELETE_SLOTID_IMG[PATH_LEN]; /*fengwenchao add 20120228 for AXSSZFI-680*/
extern char HMD_DBUS_METHOD_SET_LOCAL_HANSI_DISABLE_ENABLE[PATH_LEN];
extern char HMD_DBUS_METHOD_SHOW_HMD_INFO[PATH_LEN];      /*fengwenchao add 20110616*/
extern char HMD_DBUS_METHOD_SET_LOCAL_HANSI_GATEWAY_IF[PATH_LEN];
extern char HMD_DBUS_METHOD_HAD_NOTIFY_HMD_STATE[PATH_LEN];
extern char HMD_DBUS_METHOD_WID_NOTIFY_HMD_UPDATE_STATE[PATH_LEN];
extern char HMD_DBUS_METHOD_ASD_NOTIFY_HMD_UPDATE_STATE[PATH_LEN];
extern char HMD_DBUS_HAD_GET_ALIVE_SLOT_NO[PATH_LEN];
extern char HMD_DBUS_METHOD_DELETE_REMOTE_HANSI[PATH_LEN];
extern char HMD_DBUS_METHOD_SHOW_RUNNING[PATH_LEN];
extern char HMD_DBUS_METHOD_HANSI_SHOW_RUNNING[PATH_LEN];

extern char HMD_DBUS_METHOD_DELETE_LOCAL_HANSI[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_LICENSE_ASSIGN[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_LICENSE_ASSIGN_SHOW[PATH_LEN];
extern char HMD_DBUS_METHOD_LICENSE_SHOW_RUNNING[PATH_LEN];
extern char HMD_DBUS_METHOD_SET_HANSI_CHECK_STATE[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SERVICE_TFTP_SWITCH[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SHOW_SERVICE_TFTP_SWITCH[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SERVICE_FTP_SWITCH[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SHOW_SERVICE_FTP_SWITCH[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SET_FAST_FORWARDING[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SET_TUNNEL_QOS_MAP[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SET_TUNNEL_MM[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SET_IPFRAG_INGRESS_PMTU[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SET_IPFRAG_INFORM_NHMTU_INSTEAD[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SET_IPFRAG_IGNOREDF[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SHOW_AP_IMG_FILES[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SHOW_HMD_BAK_FOREVER_INFO[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_SET_WID_CLEAR_BINDING_INTERFACE_FLAG[PATH_LEN];//fengwenchao copy from 1318 for AXSSZFI-839
extern char HMD_DBUS_CONF_METHOD_SET_VRRP_BAKUP_FOREVER[PATH_LEN];
extern char HMD_DBUS_METHOD_DELETE_LOCAL_HANSI_LINK_IF[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_FEMTO_SERVICE_SWITCH[PATH_LEN];
extern char HMD_DBUS_CONF_METHOD_FEMTO_SERVICE_CHECK[PATH_LEN];
extern char HMD_DBUS_METHOD_SET_HMD_TIMER_CONFIG_SAVE_STATE[PATH_LEN];/*fengwenchao add 20130412 for hmd timer config save*/
extern char HMD_DBUS_METHOD_SET_HMD_TIMER_CONFIG_SAVE_TIMER[PATH_LEN];/*fengwenchao add 20130412 for hmd timer config save*/
extern char HMD_DBUS_METHOD_SYNC_WCPSS_CFG[PATH_LEN];
extern char HMD_DBUS_CONF_SYNC_TO_VRRP_BAKUP[PATH_LEN];
extern char HMD_DBUS_SET_GLOBAL_BRIDGE_MCAST[PATH_LEN];
extern char HMD_DBUS_CONF_SET_AUTO_SYNC_CONFIG_IP[PATH_LEN];
extern char HMD_DBUS_CONF_SET_AUTO_SYNC_CONFIG_TIME[PATH_LEN];
extern char HMD_DBUS_CONF_SET_AUTO_SYNC_CONFIG_SWITCH[PATH_LEN];
extern char HMD_DBUS_CONF_SHOW_AUTO_SYNC_CONFIG_STATE[PATH_LEN];



enum hmd_dbus_result_no_e {
	HMD_DBUS_SUCCESS,
	HMD_DBUS_ERROR, /* general use, no detail error information*/
	HMD_DBUS_ID_NO_EXIST,
	HMD_DBUS_UNKNOWN_ID_FORMAT,
	HMD_DBUS_LOCAL_HANSI_ID_NOT_EXIST,
	HMD_DBUS_HANSI_ID_NOT_EXIST,	
	HMD_DBUS_SLOT_ID_NOT_EXIST,
	HMD_DBUS_NUM_OVER_MAX,
	HMD_DBUS_WARNNING,
	HMD_DBUS_NOCONFIG_UPLINK,
	HMD_DBUS_NOCONFIG_DOWNLINK,
	HMD_DBUS_COMMAND_NOT_SUPPORT,
	HMD_DBUS_LICENSE_TYPE_NOT_EXIST,	
	HMD_DBUS_LICENSE_NUM_NOT_ENOUGH,
	HMD_DBUS_PERMISSION_DENIAL,
	HMD_DBUS_FEMTO_SERVICE_CONFLICT,
	HMD_DBUS_FEMTO_SERVICE_ERROR,
	HMD_DBUS_IU_NOT_IN_SERVICE,
	HMD_DBUS_IUH_NOT_IN_SERVICE,
	HMD_DBUS_INVALID_SLOT_NUM,
	HMD_DBUS_TIMER_CONFIG_SAVE_STATE_ENABLE,  //fengwenchao add 20130412 for hmd timer config save 
	HMD_DBUS_IS_NOT_MASTER, //fengwenchao add 20130412 for hmd timer config save 
	HMD_DBUS_SET_NUM_MORE_THAN_SPECEFICATION,  //fengwenchao add for read gMaxWTPs from  /dbm/local_board/board_ap_max_counter
	HMD_DBUS_DELETING_HANSI,
	HMD_DBUS_DHCP_RESTART_ALREADY_ENABLE, //DHCP RESTART already open supf add 20130730
	HMD_DBUS_DHCP_RESTART_ALREADY_DISABLE,
	HMD_DBUS_HANSI_ID_EXIST//zhangchunlong add 20130819 for vrrp global switch
};
#define DCLI_HMD_CHECK_FAILED	(-1)
#define DCLI_HMD_CREATED		(1)		/* HMD have created.		*/
#define DCLI_HMD_NO_CREATED	(0)		/* HMD have not created.	*/


#endif
