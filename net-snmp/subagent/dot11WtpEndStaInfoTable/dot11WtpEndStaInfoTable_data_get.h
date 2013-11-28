/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $
 *
 * $Id:$
 *
 * @file dot11WtpEndStaInfoTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11WTPENDSTAINFOTABLE_DATA_GET_H
#define DOT11WTPENDSTAINFOTABLE_DATA_GET_H

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
 *** Table dot11WtpEndStaInfoTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WtpEndStaInfoTable is subid 2 of wtpStation.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.1.8.2, length: 12
*/
    /*
     * indexes
     */
    int wtpMacAddr_map(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc);
    int wtpStaMacAddr_map(char **mib_wtpStaMacAddr_val_ptr_ptr, size_t *mib_wtpStaMacAddr_val_ptr_len_ptr, char *raw_wtpStaMacAddr_val_ptr, size_t raw_wtpStaMacAddr_val_ptr_len, int allow_realloc);

    int wtpEndWMMSta_map(long *mib_wtpEndWMMSta_val_ptr, long raw_wtpEndWMMSta_val);
    int wtpEndWMMSta_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, long * wtpEndWMMSta_val_ptr );
    int wtpStaIPAddress_map(u_long *mib_wtpStaIPAddress_val_ptr, u_long raw_wtpStaIPAddress_val);
    int wtpStaIPAddress_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpStaIPAddress_val_ptr );
    int wtpStaRadioMode_map(u_long *mib_wtpStaRadioMode_val_ptr, u_long raw_wtpStaRadioMode_val);
    int wtpStaRadioMode_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpStaRadioMode_val_ptr );
    int wtpStaRadioChannel_map(long *mib_wtpStaRadioChannel_val_ptr, long raw_wtpStaRadioChannel_val);
    int wtpStaRadioChannel_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, long * wtpStaRadioChannel_val_ptr );
    int wtpAPTxRates_map(long *mib_wtpAPTxRates_val_ptr, long raw_wtpAPTxRates_val);
    int wtpAPTxRates_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, long * wtpAPTxRates_val_ptr );
    int wtpStaPowerSaveMode_map(u_long *mib_wtpStaPowerSaveMode_val_ptr, u_long raw_wtpStaPowerSaveMode_val);
    int wtpStaPowerSaveMode_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpStaPowerSaveMode_val_ptr );
    int wtpStaVlanId_map(long *mib_wtpStaVlanId_val_ptr, long raw_wtpStaVlanId_val);
    int wtpStaVlanId_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, long * wtpStaVlanId_val_ptr );
    int wtpStaSSIDName_map(char **mib_wtpStaSSIDName_val_ptr_ptr, size_t *mib_wtpStaSSIDName_val_ptr_len_ptr, char *raw_wtpStaSSIDName_val_ptr, size_t raw_wtpStaSSIDName_val_ptr_len, int allow_realloc);
    int wtpStaSSIDName_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, char **wtpStaSSIDName_val_ptr_ptr, size_t *wtpStaSSIDName_val_ptr_len_ptr );
    int wtpStaAuthenMode_map(u_long *mib_wtpStaAuthenMode_val_ptr, u_long raw_wtpStaAuthenMode_val);
    int wtpStaAuthenMode_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpStaAuthenMode_val_ptr );
    int wtpStaSecurityCiphers_map(u_long *mib_wtpStaSecurityCiphers_val_ptr, u_long raw_wtpStaSecurityCiphers_val);
    int wtpStaSecurityCiphers_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpStaSecurityCiphers_val_ptr );
    int wtpAuthenModel_map(u_long *mib_wtpAuthenModel_val_ptr, u_long raw_wtpAuthenModel_val);
    int wtpAuthenModel_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpAuthenModel_val_ptr );
    int wtpSecurityCiphers_map(u_long *mib_wtpSecurityCiphers_val_ptr, u_long raw_wtpSecurityCiphers_val);
    int wtpSecurityCiphers_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpSecurityCiphers_val_ptr );
    int apEndStaID_map(long *mib_apEndStaID_val_ptr, long raw_apEndStaID_val);
    int apEndStaID_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, long * apEndStaID_val_ptr );
    int wtpStaIPV6Address_get( dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, char **wtpStaIPV6Address_val_ptr_ptr, size_t *wtpStaIPV6Address_val_ptr_len_ptr );


int dot11WtpEndStaInfoTable_indexes_set_tbl_idx(dot11WtpEndStaInfoTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, char *wtpStaMacAddr_val_ptr,  size_t wtpStaMacAddr_val_ptr_len);
int dot11WtpEndStaInfoTable_indexes_set(dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, char *wtpStaMacAddr_val_ptr,  size_t wtpStaMacAddr_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPENDSTAINFOTABLE_DATA_GET_H */
/** @} */
