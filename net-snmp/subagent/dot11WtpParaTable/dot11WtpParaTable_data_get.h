/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11WtpParaTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11WTPPARATABLE_DATA_GET_H
#define DOT11WTPPARATABLE_DATA_GET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * GET function declarations
 */

/* *********************************************************************
 * GET Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11WtpParaTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpParaTable is subid 5 of wtpStats.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.2.5, length: 12
*/
    /*
     * indexes
     */
    int wtpMacAddr_map(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc);

    int wtpCurBssid_map(char **mib_wtpCurBssid_val_ptr_ptr, size_t *mib_wtpCurBssid_val_ptr_len_ptr, char *raw_wtpCurBssid_val_ptr, size_t raw_wtpCurBssid_val_ptr_len, int allow_realloc);
    int wtpCurBssid_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, char **wtpCurBssid_val_ptr_ptr, size_t *wtpCurBssid_val_ptr_len_ptr );
    int wtpGateAddr_map(u_long *mib_wtpGateAddr_val_ptr, u_long raw_wtpGateAddr_val);
    int wtpGateAddr_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, u_long * wtpGateAddr_val_ptr );
    int wtpNetElementCode_map(char **mib_wtpNetElementCode_val_ptr_ptr, size_t *mib_wtpNetElementCode_val_ptr_len_ptr, char *raw_wtpNetElementCode_val_ptr, size_t raw_wtpNetElementCode_val_ptr_len, int allow_realloc);
    int wtpNetElementCode_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, char **wtpNetElementCode_val_ptr_ptr, size_t *wtpNetElementCode_val_ptr_len_ptr );
    int wtpAddrMask_map(u_long *mib_wtpAddrMask_val_ptr, u_long raw_wtpAddrMask_val);
    int wtpAddrMask_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, u_long * wtpAddrMask_val_ptr );
    int wtpsupportIfType_map(char **mib_wtpsupportIfType_val_ptr_ptr, size_t *mib_wtpsupportIfType_val_ptr_len_ptr, char *raw_wtpsupportIfType_val_ptr, size_t raw_wtpsupportIfType_val_ptr_len, int allow_realloc);
    int wtpsupportIfType_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, char **wtpsupportIfType_val_ptr_ptr, size_t *wtpsupportIfType_val_ptr_len_ptr );
    int wtpRemoteRestartFun_map(u_long *mib_wtpRemoteRestartFun_val_ptr, u_long raw_wtpRemoteRestartFun_val);
    int wtpRemoteRestartFun_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, u_long * wtpRemoteRestartFun_val_ptr );
    int wtpWorkMode_map(u_long *mib_wtpWorkMode_val_ptr, u_long raw_wtpWorkMode_val);
    int wtpWorkMode_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, u_long * wtpWorkMode_val_ptr );
    int wtpReceiverSignalPWL_map(char **mib_wtpReceiverSignalPWL_val_ptr_ptr, size_t *mib_wtpReceiverSignalPWL_val_ptr_len_ptr, char *raw_wtpReceiverSignalPWL_val_ptr, size_t raw_wtpReceiverSignalPWL_val_ptr_len, int allow_realloc);
    int wtpReceiverSignalPWL_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, char **wtpReceiverSignalPWL_val_ptr_ptr, size_t *wtpReceiverSignalPWL_val_ptr_len_ptr );
    int wtpMacConApAc_map(char **mib_wtpMacConApAc_val_ptr_ptr, size_t *mib_wtpMacConApAc_val_ptr_len_ptr, char *raw_wtpMacConApAc_val_ptr, size_t raw_wtpMacConApAc_val_ptr_len, int allow_realloc);
    int wtpMacConApAc_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, char **wtpMacConApAc_val_ptr_ptr, size_t *wtpMacConApAc_val_ptr_len_ptr );
    int wtpState_map(u_long *mib_wtpState_val_ptr, u_long raw_wtpState_val);
    int wtpState_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, u_long * wtpState_val_ptr );
    int wtpDefenceDOSAttack_map(u_long *mib_wtpDefenceDOSAttack_val_ptr, u_long raw_wtpDefenceDOSAttack_val);
    int wtpDefenceDOSAttack_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, u_long * wtpDefenceDOSAttack_val_ptr );
    int wtpIGMPSwitch_map(u_long *mib_wtpIGMPSwitch_val_ptr, u_long raw_wtpIGMPSwitch_val);
    int wtpIGMPSwitch_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, u_long * wtpIGMPSwitch_val_ptr );
    int wtpBridgingWorkMode_map(u_long *mib_wtpBridgingWorkMode_val_ptr, u_long raw_wtpBridgingWorkMode_val);
    int wtpBridgingWorkMode_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, u_long * wtpBridgingWorkMode_val_ptr );
    int wtpCurrAPMode_map(u_long *mib_wtpCurrAPMode_val_ptr, u_long raw_wtpCurrAPMode_val);
    int wtpCurrAPMode_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, u_long * wtpCurrAPMode_val_ptr );
    int wtpSupport11B_map(u_long *mib_wtpSupport11B_val_ptr, u_long raw_wtpSupport11B_val);
    int wtpSupport11B_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, u_long * wtpSupport11B_val_ptr );
    int wtpSupport11G_map(u_long *mib_wtpSupport11G_val_ptr, u_long raw_wtpSupport11G_val);
    int wtpSupport11G_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, u_long * wtpSupport11G_val_ptr );
	int wtpAccessTime_map(char **mib_wtpAccessTime_val_ptr_ptr, size_t *mib_wtpAccessTime_val_ptr_len_ptr, char *raw_wtpAccessTime_val_ptr, size_t raw_wtpAccessTime_val_ptr_len, int allow_realloc);
    int wtpAccessTime_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, char **wtpAccessTime_val_ptr_ptr, size_t *wtpAccessTime_val_ptr_len_ptr );
	int wtpStartTime_map(char **mib_wtpStartTime_val_ptr_ptr, size_t *mib_wtpStartTime_val_ptr_len_ptr, char *raw_wtpStartTime_val_ptr, size_t raw_wtpStartTime_val_ptr_len, int allow_realloc);
    int wtpStartTime_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, char **wtpStartTime_val_ptr_ptr, size_t *wtpStartTime_val_ptr_len_ptr );
	int wtpImagadataTime_map(char **mib_wtpImagadataTime_val_ptr_ptr, size_t *mib_wtpImagadataTime_val_ptr_len_ptr, char *raw_wtpImagadataTime_val_ptr, size_t raw_wtpImagadataTime_val_ptr_len, int allow_realloc);
    int wtpImagadataTime_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, char **wtpImagadataTime_val_ptr_ptr, size_t *wtpImagadataTime_val_ptr_len_ptr );
	int wtpConfigUpdateTime_map(char **mib_wtpConfigUpdateTime_val_ptr_ptr, size_t *mib_wtpConfigUpdateTime_val_ptr_len_ptr, char *raw_wtpConfigUpdateTime_val_ptr, size_t raw_wtpConfigUpdateTime_val_ptr_len, int allow_realloc);
    int wtpConfigUpdateTime_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, char **wtpConfigUpdateTime_val_ptr_ptr, size_t *wtpConfigUpdateTime_val_ptr_len_ptr );
    int wtpIpv6NetPrefixLen_get( dot11WtpParaTable_rowreq_ctx *rowreq_ctx, long * wtpIpv6NetPrefixLen_val_ptr );


int dot11WtpParaTable_indexes_set_tbl_idx(dot11WtpParaTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len);
int dot11WtpParaTable_indexes_set(dot11WtpParaTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPPARATABLE_DATA_GET_H */
/** @} */
