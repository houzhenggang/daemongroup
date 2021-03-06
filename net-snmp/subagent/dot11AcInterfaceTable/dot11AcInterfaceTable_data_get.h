/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12088 $ of $
 *
 * $Id:$
 *
 * @file dot11AcInterfaceTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11ACINTERFACETABLE_DATA_GET_H
#define DOT11ACINTERFACETABLE_DATA_GET_H

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
 *** Table dot11AcInterfaceTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11AcInterfaceTable is subid 4 of dot11AcInterface.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.4.4, length: 12
*/
    /*
     * indexes
     */

    int AcInterfaceName_get( dot11AcInterfaceTable_rowreq_ctx *rowreq_ctx, char **AcInterfaceName_val_ptr_ptr, size_t *AcInterfaceName_val_ptr_len_ptr );
    int AcInterfaceIP_get( dot11AcInterfaceTable_rowreq_ctx *rowreq_ctx, u_long * AcInterfaceIP_val_ptr );
    int AcInterfaceNetMask_get( dot11AcInterfaceTable_rowreq_ctx *rowreq_ctx, u_long * AcInterfaceNetMask_val_ptr );
    int AcInterfaceIPV6_get( dot11AcInterfaceTable_rowreq_ctx *rowreq_ctx, char **AcInterfaceIPV6_val_ptr_ptr, size_t *AcInterfaceIPV6_val_ptr_len_ptr );
    int AcInterfaceIPV6prefix_get( dot11AcInterfaceTable_rowreq_ctx *rowreq_ctx, long * AcInterfaceIPV6prefix_val_ptr );


int dot11AcInterfaceTable_indexes_set_tbl_idx(dot11AcInterfaceTable_mib_index *tbl_idx, long ifIndex_val);
int dot11AcInterfaceTable_indexes_set(dot11AcInterfaceTable_rowreq_ctx *rowreq_ctx, long ifIndex_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11ACINTERFACETABLE_DATA_GET_H */
/** @} */
