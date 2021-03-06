/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18.2.1 $ of : mfd-data-get.m2c,v $ 
 *
 * $Id:$
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11WlanStationTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11WlanStationTable get routines.
 * TODO:240:M: Implement dot11WlanStationTable mapping routines (if any).
 *
 * These routine are used to get the value for individual objects. The
 * row context is passed, along with a pointer to the memory where the
 * value should be copied.
 *
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11WlanStationTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11WlanStationTable is subid 3 of dot11wlanConfig.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.13.3, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11WlanStationTable data context functions.
 */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11VlanConfigEntry.wlanID
 * wlanID is subid 1 of dot11VlanConfigEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.7.1.1
 * Description:
Vlan ID.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-wlanID.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wlanID_dot11WlanStationTable_map(long *mib_wlanID_val_ptr, long raw_wlanID_val)
{
    netsnmp_assert(NULL != mib_wlanID_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11WlanStationTable:wlanID_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement wlanID mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_wlanID_val_ptr) = raw_wlanID_val;

    return MFD_SUCCESS;
} /* wlanID_map */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11WlanStaEntry.StaMacAddr
 * StaMacAddr is subid 1 of dot11WlanStaEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.13.3.1.1
 * Description:
The  station mac address.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   0
 *   hint: 255a
 *
 * Ranges:  0 - 255;
 *
 * Its syntax is DisplayString (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 255)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-StaMacAddr.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
StaMacAddr_map(char **mib_StaMacAddr_val_ptr_ptr, size_t *mib_StaMacAddr_val_ptr_len_ptr, char *raw_StaMacAddr_val_ptr, size_t raw_StaMacAddr_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_StaMacAddr_val_ptr);
    netsnmp_assert((NULL != mib_StaMacAddr_val_ptr_ptr) && (NULL != mib_StaMacAddr_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11WlanStationTable:StaMacAddr_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement StaMacAddr non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_StaMacAddr_val_ptr_len; /* assume equal */
    if((NULL == *mib_StaMacAddr_val_ptr_ptr) || (*mib_StaMacAddr_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_StaMacAddr_val_ptr_ptr = realloc( *mib_StaMacAddr_val_ptr_ptr, converted_len * sizeof(**mib_StaMacAddr_val_ptr_ptr));
        if(NULL == *mib_StaMacAddr_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_StaMacAddr_val_ptr_len_ptr = converted_len;
    memcpy( *mib_StaMacAddr_val_ptr_ptr, raw_StaMacAddr_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* StaMacAddr_map */


/**
 * set mib index(es)
 *
 * @param tbl_idx mib index structure
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This convenience function is useful for setting all the MIB index
 *  components with a single function call. It is assume that the C values
 *  have already been mapped from their native/rawformat to the MIB format.
 */
int
dot11WlanStationTable_indexes_set_tbl_idx(dot11WlanStationTable_mib_index *tbl_idx, long wlanID_val, char *StaMacAddr_val_ptr,  size_t StaMacAddr_val_ptr_len)
{
    DEBUGMSGTL(("verbose:dot11WlanStationTable:dot11WlanStationTable_indexes_set_tbl_idx","called\n"));

    /* wlanID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    tbl_idx->wlanID = wlanID_val;
    
    /* StaMacAddr(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H */
     tbl_idx->StaMacAddr_len = sizeof(tbl_idx->StaMacAddr);
    /*
     * make sure there is enough space for StaMacAddr data
     */
    if ((NULL == tbl_idx->StaMacAddr) ||
        (tbl_idx->StaMacAddr_len < (StaMacAddr_val_ptr_len * sizeof(tbl_idx->StaMacAddr[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }
    tbl_idx->StaMacAddr_len = StaMacAddr_val_ptr_len * sizeof(tbl_idx->StaMacAddr[0]);
    memcpy( tbl_idx->StaMacAddr, StaMacAddr_val_ptr, tbl_idx->StaMacAddr_len );
    

    return MFD_SUCCESS;
} /* dot11WlanStationTable_indexes_set_tbl_idx */

/**
 * @internal
 * set row context indexes
 *
 * @param reqreq_ctx the row context that needs updated indexes
 *
 * @retval MFD_SUCCESS     : success.
 * @retval MFD_ERROR       : other error.
 *
 * @remark
 *  This function sets the mib indexs, then updates the oid indexs
 *  from the mib index.
 */
int
dot11WlanStationTable_indexes_set(dot11WlanStationTable_rowreq_ctx *rowreq_ctx, long wlanID_val, char *StaMacAddr_val_ptr,  size_t StaMacAddr_val_ptr_len)
{
    DEBUGMSGTL(("verbose:dot11WlanStationTable:dot11WlanStationTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11WlanStationTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , wlanID_val
                                   , StaMacAddr_val_ptr, StaMacAddr_val_ptr_len
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11WlanStationTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11WlanStationTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11WlanStaEntry.StaOnlineTime
 * StaOnlineTime is subid 2 of dot11WlanStaEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.13.3.1.2
 * Description:
The  station on line time .
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is TICKS (based on perltype TICKS)
 * The net-snmp type is ASN_TIMETICKS. The C type decl is u_long (u_long)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-StaOnlineTime.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
StaOnlineTime_map(u_long *mib_StaOnlineTime_val_ptr, u_long raw_StaOnlineTime_val)
{
    netsnmp_assert(NULL != mib_StaOnlineTime_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11WlanStationTable:StaOnlineTime_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement StaOnlineTime mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_StaOnlineTime_val_ptr) = raw_StaOnlineTime_val;

    return MFD_SUCCESS;
} /* StaOnlineTime_map */

/**
 * Extract the current value of the StaOnlineTime data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param StaOnlineTime_val_ptr
 *        Pointer to storage for a u_long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
StaOnlineTime_get( dot11WlanStationTable_rowreq_ctx *rowreq_ctx, u_long * StaOnlineTime_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != StaOnlineTime_val_ptr );


    DEBUGMSGTL(("verbose:dot11WlanStationTable:StaOnlineTime_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the StaOnlineTime data.
 * set (* StaOnlineTime_val_ptr ) from rowreq_ctx->data
 */
    (* StaOnlineTime_val_ptr ) = rowreq_ctx->data.StaOnlineTime;

    return MFD_SUCCESS;
} /* StaOnlineTime_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11WlanStaEntry.StaAccessTime
 * StaAccessTime is subid 3 of dot11WlanStaEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.13.3.1.3
 * Description:
The station Access Time.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   1
 *   settable   0
 *   hint: 255a
 *
 * Ranges:  0 - 255;
 *
 * Its syntax is DisplayString (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max 255)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-StaAccessTime.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
StaAccessTime_map(char **mib_StaAccessTime_val_ptr_ptr, size_t *mib_StaAccessTime_val_ptr_len_ptr, char *raw_StaAccessTime_val_ptr, size_t raw_StaAccessTime_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_StaAccessTime_val_ptr);
    netsnmp_assert((NULL != mib_StaAccessTime_val_ptr_ptr) && (NULL != mib_StaAccessTime_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11WlanStationTable:StaAccessTime_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement StaAccessTime non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_StaAccessTime_val_ptr_len; /* assume equal */
    if((NULL == *mib_StaAccessTime_val_ptr_ptr) || (*mib_StaAccessTime_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_StaAccessTime_val_ptr_ptr = realloc( *mib_StaAccessTime_val_ptr_ptr, converted_len * sizeof(**mib_StaAccessTime_val_ptr_ptr));
        if(NULL == *mib_StaAccessTime_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_StaAccessTime_val_ptr_len_ptr = converted_len;
    memcpy( *mib_StaAccessTime_val_ptr_ptr, raw_StaAccessTime_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* StaAccessTime_map */

/**
 * Extract the current value of the StaAccessTime data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param StaAccessTime_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param StaAccessTime_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by StaAccessTime.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*StaAccessTime_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update StaAccessTime_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
StaAccessTime_get( dot11WlanStationTable_rowreq_ctx *rowreq_ctx, char **StaAccessTime_val_ptr_ptr, size_t *StaAccessTime_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != StaAccessTime_val_ptr_ptr) && (NULL != *StaAccessTime_val_ptr_ptr));
   netsnmp_assert( NULL != StaAccessTime_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11WlanStationTable:StaAccessTime_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the StaAccessTime data.
 * set (* StaAccessTime_val_ptr_ptr ) and (* StaAccessTime_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for StaAccessTime data
     */
    if ((NULL == (* StaAccessTime_val_ptr_ptr )) ||
        ((* StaAccessTime_val_ptr_len_ptr ) < (rowreq_ctx->data.StaAccessTime_len * sizeof((* StaAccessTime_val_ptr_ptr )[0])))) {
        /*
         * allocate space for StaAccessTime data
         */
        (* StaAccessTime_val_ptr_ptr ) = malloc(rowreq_ctx->data.StaAccessTime_len * sizeof((* StaAccessTime_val_ptr_ptr )[0]));
        if(NULL == (* StaAccessTime_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* StaAccessTime_val_ptr_len_ptr ) = rowreq_ctx->data.StaAccessTime_len * sizeof((* StaAccessTime_val_ptr_ptr )[0]);
    memcpy( (* StaAccessTime_val_ptr_ptr ), rowreq_ctx->data.StaAccessTime, (* StaAccessTime_val_ptr_len_ptr ) );

    return MFD_SUCCESS;
} /* StaAccessTime_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11WlanStaEntry.StaUplinkTrafficLimitThreshold
 * StaUplinkTrafficLimitThreshold is subid 4 of dot11WlanStaEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.13.3.1.4
 * Description:
Station uplink traffic limit threshold.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-StaUplinkTrafficLimitThreshold.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
StaUplinkTrafficLimitThreshold_map(long *mib_StaUplinkTrafficLimitThreshold_val_ptr, long raw_StaUplinkTrafficLimitThreshold_val)
{
    netsnmp_assert(NULL != mib_StaUplinkTrafficLimitThreshold_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11WlanStationTable:StaUplinkTrafficLimitThreshold_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement StaUplinkTrafficLimitThreshold mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_StaUplinkTrafficLimitThreshold_val_ptr) = raw_StaUplinkTrafficLimitThreshold_val;

    return MFD_SUCCESS;
} /* StaUplinkTrafficLimitThreshold_map */

/**
 * Extract the current value of the StaUplinkTrafficLimitThreshold data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param StaUplinkTrafficLimitThreshold_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
StaUplinkTrafficLimitThreshold_get( dot11WlanStationTable_rowreq_ctx *rowreq_ctx, long * StaUplinkTrafficLimitThreshold_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != StaUplinkTrafficLimitThreshold_val_ptr );


    DEBUGMSGTL(("verbose:dot11WlanStationTable:StaUplinkTrafficLimitThreshold_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the StaUplinkTrafficLimitThreshold data.
 * set (* StaUplinkTrafficLimitThreshold_val_ptr ) from rowreq_ctx->data
 */
    (* StaUplinkTrafficLimitThreshold_val_ptr ) = rowreq_ctx->data.StaUplinkTrafficLimitThreshold;

    return MFD_SUCCESS;
} /* StaUplinkTrafficLimitThreshold_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11WlanStaEntry.StaDownlinkTrafficLimitThreshold
 * StaDownlinkTrafficLimitThreshold is subid 5 of dot11WlanStaEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.31656.6.1.2.13.3.1.5
 * Description:
Station downlink traffic limit threshold.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is INTEGER32 (based on perltype INTEGER32)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (long)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-StaDownlinkTrafficLimitThreshold.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
StaDownlinkTrafficLimitThreshold_map(long *mib_StaDownlinkTrafficLimitThreshold_val_ptr, long raw_StaDownlinkTrafficLimitThreshold_val)
{
    netsnmp_assert(NULL != mib_StaDownlinkTrafficLimitThreshold_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11WlanStationTable:StaDownlinkTrafficLimitThreshold_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement StaDownlinkTrafficLimitThreshold mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_StaDownlinkTrafficLimitThreshold_val_ptr) = raw_StaDownlinkTrafficLimitThreshold_val;

    return MFD_SUCCESS;
} /* StaDownlinkTrafficLimitThreshold_map */

/**
 * Extract the current value of the StaDownlinkTrafficLimitThreshold data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param StaDownlinkTrafficLimitThreshold_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
StaDownlinkTrafficLimitThreshold_get( dot11WlanStationTable_rowreq_ctx *rowreq_ctx, long * StaDownlinkTrafficLimitThreshold_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != StaDownlinkTrafficLimitThreshold_val_ptr );


    DEBUGMSGTL(("verbose:dot11WlanStationTable:StaDownlinkTrafficLimitThreshold_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the StaDownlinkTrafficLimitThreshold data.
 * set (* StaDownlinkTrafficLimitThreshold_val_ptr ) from rowreq_ctx->data
 */
    (* StaDownlinkTrafficLimitThreshold_val_ptr ) = rowreq_ctx->data.StaDownlinkTrafficLimitThreshold;

    return MFD_SUCCESS;
} /* StaDownlinkTrafficLimitThreshold_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11WlanStaEntry.StaUplinkBitRate
 * StaUplinkBitRate is subid 6 of dot11WlanStaEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.13.3.1.6
 * Description:
Station uplink traffic bit rate.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER64 (based on perltype COUNTER64)
 * The net-snmp type is ASN_COUNTER64. The C type decl is U64 (U64)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-StaUplinkBitRate.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
StaUplinkBitRate_map(unsigned long long *mib_StaUplinkBitRate_val_ptr, unsigned long long raw_StaUplinkBitRate_val)
{
    netsnmp_assert(NULL != mib_StaUplinkBitRate_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11WlanStationTable:StaUplinkBitRate_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement StaUplinkBitRate mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_StaUplinkBitRate_val_ptr) = raw_StaUplinkBitRate_val;

    return MFD_SUCCESS;
} /* StaUplinkBitRate_map */

/**
 * Extract the current value of the StaUplinkBitRate data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param StaUplinkBitRate_val_ptr
 *        Pointer to storage for a U64 variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
StaUplinkBitRate_get( dot11WlanStationTable_rowreq_ctx *rowreq_ctx, unsigned long long * StaUplinkBitRate_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != StaUplinkBitRate_val_ptr );

/*
 * TODO:231:o: |-> copy StaUplinkBitRate data.
 * get (* StaUplinkBitRate_val_ptr ).low and (* StaUplinkBitRate_val_ptr ).high from rowreq_ctx->data
 */
    //(* StaUplinkBitRate_val_ptr ).high = rowreq_ctx->data.StaUplinkBitRate.high;
    (* StaUplinkBitRate_val_ptr ) = rowreq_ctx->data.StaUplinkBitRate;


    return MFD_SUCCESS;
} /* StaUplinkBitRate_get */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11WlanStaEntry.StaDownlinkBitRate
 * StaDownlinkBitRate is subid 7 of dot11WlanStaEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.13.3.1.7
 * Description:
Station downlink traffic bit rate.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is COUNTER64 (based on perltype COUNTER64)
 * The net-snmp type is ASN_COUNTER64. The C type decl is U64 (U64)
 */
/**
 * map a value from its original native format to the MIB format.
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_ERROR           : Any other error
 *
 * @note parameters follow the memset convention (dest, src).
 *
 * @note generation and use of this function can be turned off by re-running
 * mib2c after adding the following line to the file
 * default-node-StaDownlinkBitRate.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
StaDownlinkBitRate_map(unsigned long long *mib_StaDownlinkBitRate_val_ptr, unsigned long long raw_StaDownlinkBitRate_val)
{
    netsnmp_assert(NULL != mib_StaDownlinkBitRate_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11WlanStationTable:StaDownlinkBitRate_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement StaDownlinkBitRate mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_StaDownlinkBitRate_val_ptr) = raw_StaDownlinkBitRate_val;

    return MFD_SUCCESS;
} /* StaDownlinkBitRate_map */

/**
 * Extract the current value of the StaDownlinkBitRate data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param StaDownlinkBitRate_val_ptr
 *        Pointer to storage for a U64 variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
StaDownlinkBitRate_get( dot11WlanStationTable_rowreq_ctx *rowreq_ctx, unsigned long long * StaDownlinkBitRate_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != StaDownlinkBitRate_val_ptr );

/*
 * TODO:231:o: |-> copy StaDownlinkBitRate data.
 * get (* StaDownlinkBitRate_val_ptr ).low and (* StaDownlinkBitRate_val_ptr ).high from rowreq_ctx->data
 */
    //(* StaDownlinkBitRate_val_ptr ).high = rowreq_ctx->data.StaDownlinkBitRate.high;
    (* StaDownlinkBitRate_val_ptr ) = rowreq_ctx->data.StaDownlinkBitRate;


    return MFD_SUCCESS;
} /* StaDownlinkBitRate_get */



/** @} */
