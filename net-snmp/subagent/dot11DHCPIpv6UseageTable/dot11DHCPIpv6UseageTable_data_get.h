/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12088 $ of $
 *
 * $Id:$
 *
 * @file dot11DHCPIpv6UseageTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef DOT11DHCPIPV6USEAGETABLE_DATA_GET_H
#define DOT11DHCPIPV6USEAGETABLE_DATA_GET_H

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
 *** Table dot11DHCPIpv6UseageTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * DOT11-AC-MIB::dot11DHCPIpv6UseageTable is subid 8 of dot11Service.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.6.8, length: 12
*/
    /*
     * indexes
     */

    int DHCPIpv6poolName_get( dot11DHCPIpv6UseageTable_rowreq_ctx *rowreq_ctx, char **DHCPIpv6poolName_val_ptr_ptr, size_t *DHCPIpv6poolName_val_ptr_len_ptr );
    int DHCPIpv6PoolUseage_get( dot11DHCPIpv6UseageTable_rowreq_ctx *rowreq_ctx, long * DHCPIpv6PoolUseage_val_ptr );


int dot11DHCPIpv6UseageTable_indexes_set_tbl_idx(dot11DHCPIpv6UseageTable_mib_index *tbl_idx, long Ipv6DHCPUSEID_val);
int dot11DHCPIpv6UseageTable_indexes_set(dot11DHCPIpv6UseageTable_rowreq_ctx *rowreq_ctx, long Ipv6DHCPUSEID_val);




#ifdef __cplusplus
}
#endif

#endif /* DOT11DHCPIPV6USEAGETABLE_DATA_GET_H */
/** @} */
