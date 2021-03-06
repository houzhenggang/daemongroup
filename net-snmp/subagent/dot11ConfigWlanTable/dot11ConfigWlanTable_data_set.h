/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18 $ of : mfd-data-set.m2c,v $ 
 *
 * $Id:$
 */
#ifndef DOT11CONFIGWLANTABLE_DATA_SET_H
#define DOT11CONFIGWLANTABLE_DATA_SET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * SET function declarations
 */

/* *********************************************************************
 * SET Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11ConfigWlanTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11ConfigWlanTable is subid 2 of dot11wlanConfig.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.13.2, length: 12
*/
    int dot11ConfigWlanTable_wlanID_check_index( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx ); /* external */


int dot11ConfigWlanTable_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx);
int dot11ConfigWlanTable_undo_cleanup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx);
int dot11ConfigWlanTable_commit( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx);
int dot11ConfigWlanTable_undo_commit( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx);


int wlanBindSecurity_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, long wlanBindSecurity_val);
int wlanBindSecurity_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanBindSecurity_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, long wlanBindSecurity_val );
int wlanBindSecurity_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanBindIf_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, char *wlanBindIf_val_ptr,  size_t wlanBindIf_val_ptr_len);
int wlanBindIf_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanBindIf_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, char *wlanBindIf_val_ptr,  size_t wlanBindIf_val_ptr_len );
int wlanBindIf_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanHideEssid_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanHideEssid_val);
int wlanHideEssid_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanHideEssid_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanHideEssid_val );
int wlanHideEssid_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanServiceEnable_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanServiceEnable_val);
int wlanServiceEnable_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanServiceEnable_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanServiceEnable_val );
int wlanServiceEnable_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanMaxConnectUsr_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, long wlanMaxConnectUsr_val);
int wlanMaxConnectUsr_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanMaxConnectUsr_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, long wlanMaxConnectUsr_val );
int wlanMaxConnectUsr_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanLoadBalanceStatus_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanLoadBalanceStatus_val);
int wlanLoadBalanceStatus_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanLoadBalanceStatus_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanLoadBalanceStatus_val );
int wlanLoadBalanceStatus_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanLoadBalanceStatusBaseOnFlow_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanLoadBalanceStatusBaseOnFlow_val);
int wlanLoadBalanceStatusBaseOnFlow_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanLoadBalanceStatusBaseOnFlow_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanLoadBalanceStatusBaseOnFlow_val );
int wlanLoadBalanceStatusBaseOnFlow_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanLoadBalanceStatusBaseOnUsr_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanLoadBalanceStatusBaseOnUsr_val);
int wlanLoadBalanceStatusBaseOnUsr_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanLoadBalanceStatusBaseOnUsr_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanLoadBalanceStatusBaseOnUsr_val );
int wlanLoadBalanceStatusBaseOnUsr_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanLoadBalanceTrafficDiffThreshhd_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, long wlanLoadBalanceTrafficDiffThreshhd_val);
int wlanLoadBalanceTrafficDiffThreshhd_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanLoadBalanceTrafficDiffThreshhd_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, long wlanLoadBalanceTrafficDiffThreshhd_val );
int wlanLoadBalanceTrafficDiffThreshhd_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanLoadBalanceUsersDiffThreshhd_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, long wlanLoadBalanceUsersDiffThreshhd_val);
int wlanLoadBalanceUsersDiffThreshhd_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanLoadBalanceUsersDiffThreshhd_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, long wlanLoadBalanceUsersDiffThreshhd_val );
int wlanLoadBalanceUsersDiffThreshhd_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanStaOnlineNum_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, long wlanStaOnlineNum_val);
int wlanStaOnlineNum_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanStaOnlineNum_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, long wlanStaOnlineNum_val );
int wlanStaOnlineNum_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanUsrWirelessResoUseRate_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, char *wlanUsrWirelessResoUseRate_val_ptr,  size_t wlanUsrWirelessResoUseRate_val_ptr_len);
int wlanUsrWirelessResoUseRate_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanUsrWirelessResoUseRate_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, char *wlanUsrWirelessResoUseRate_val_ptr,  size_t wlanUsrWirelessResoUseRate_val_ptr_len );
int wlanUsrWirelessResoUseRate_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanBindSecType_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanBindSecType_val);
int wlanBindSecType_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanBindSecType_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanBindSecType_val );
int wlanBindSecType_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );

int wlanBindEncryType_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanBindEncryType_val);
int wlanBindEncryType_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );
int wlanBindEncryType_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, u_long wlanBindEncryType_val );
int wlanBindEncryType_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx );


int wlanInterfaceIPAddr_check_value( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, char *WlanInterfaceIPAddr_val_ptr,  size_t WlanInterfaceIPAddr_val_ptr_len);
int wlanInterfaceIPAddr_undo_setup( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx);
int wlanInterfaceIPAddr_set( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx, char *wlanInterfaceIPAddr_val_ptr,  size_t wlanInterfaceIPAddr_val_ptr_len );
int wlanInterfaceIPAddr_undo( dot11ConfigWlanTable_rowreq_ctx *rowreq_ctx);



int dot11ConfigWlanTable_check_dependencies(dot11ConfigWlanTable_rowreq_ctx *ctx);


#ifdef __cplusplus
}
#endif

#endif /* DOT11CONFIGWLANTABLE_DATA_SET_H */
