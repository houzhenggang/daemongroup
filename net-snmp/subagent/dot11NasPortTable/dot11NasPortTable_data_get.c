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
#include "dot11NasPortTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11NasPortTable get routines.
 * TODO:240:M: Implement dot11NasPortTable mapping routines (if any).
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
 *** Table dot11NasPortTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11NasPortTable is subid 2 of dot11ConfigNasGroup.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.31656.6.1.2.21.2, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11NasPortTable data context functions.
 */

/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigTrapSwitchEntry.wtpMacAddr
 * wtpMacAddr is subid 1 of dot11ConfigTrapSwitchEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.18.2.1.1
 * Description:
AP Mac  Address Group.
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
 * default-node-wtpMacAddr.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wtpMacAddr_dot11NasPortTable_map(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_wtpMacAddr_val_ptr);
    netsnmp_assert((NULL != mib_wtpMacAddr_val_ptr_ptr) && (NULL != mib_wtpMacAddr_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11NasPortTable:wtpMacAddr_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement wtpMacAddr non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_wtpMacAddr_val_ptr_len; /* assume equal */
    if((NULL == *mib_wtpMacAddr_val_ptr_ptr) || (*mib_wtpMacAddr_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_wtpMacAddr_val_ptr_ptr = realloc( *mib_wtpMacAddr_val_ptr_ptr, converted_len * sizeof(**mib_wtpMacAddr_val_ptr_ptr));
        if(NULL == *mib_wtpMacAddr_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_wtpMacAddr_val_ptr_len_ptr = converted_len;
    memcpy( *mib_wtpMacAddr_val_ptr_ptr, raw_wtpMacAddr_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* wtpMacAddr_map */

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
wlanID_map(long *mib_wlanID_val_ptr, long raw_wlanID_val)
{
    netsnmp_assert(NULL != mib_wlanID_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11NasPortTable:wlanID_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement wlanID mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_wlanID_val_ptr) = raw_wlanID_val;

    return MFD_SUCCESS;
} /* wlanID_map */


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
dot11NasPortTable_indexes_set_tbl_idx(dot11NasPortTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wlanID_val)
{
    DEBUGMSGTL(("verbose:dot11NasPortTable:dot11NasPortTable_indexes_set_tbl_idx","called\n"));

    /* wtpMacAddr(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H */
     tbl_idx->wtpMacAddr_len = sizeof(tbl_idx->wtpMacAddr);
    /*
     * make sure there is enough space for wtpMacAddr data
     */
    if ((NULL == tbl_idx->wtpMacAddr) ||
        (tbl_idx->wtpMacAddr_len < (wtpMacAddr_val_ptr_len * sizeof(tbl_idx->wtpMacAddr[0])))) {
        snmp_log(LOG_ERR,"not enough space for value\n");
        return MFD_ERROR;
    }
    tbl_idx->wtpMacAddr_len = wtpMacAddr_val_ptr_len * sizeof(tbl_idx->wtpMacAddr[0]);
    memcpy( tbl_idx->wtpMacAddr, wtpMacAddr_val_ptr, tbl_idx->wtpMacAddr_len );
    
    /* wlanID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    tbl_idx->wlanID = wlanID_val;
    

    return MFD_SUCCESS;
} /* dot11NasPortTable_indexes_set_tbl_idx */

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
dot11NasPortTable_indexes_set(dot11NasPortTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wlanID_val)
{
    DEBUGMSGTL(("verbose:dot11NasPortTable:dot11NasPortTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11NasPortTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , wtpMacAddr_val_ptr, wtpMacAddr_val_ptr_len
                                   , wlanID_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11NasPortTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11NasPortTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11NasPortEntry.NasPortID
 * NasPortID is subid 1 of dot11NasPortEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.31656.6.1.2.21.2.1.1
 * Description:
Nas Port ID.
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
 * default-node-NasPortID.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
NasPortID_map(char **mib_NasPortID_val_ptr_ptr, size_t *mib_NasPortID_val_ptr_len_ptr, char *raw_NasPortID_val_ptr, size_t raw_NasPortID_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_NasPortID_val_ptr);
    netsnmp_assert((NULL != mib_NasPortID_val_ptr_ptr) && (NULL != mib_NasPortID_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11NasPortTable:NasPortID_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement NasPortID non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_NasPortID_val_ptr_len; /* assume equal */
    if((NULL == *mib_NasPortID_val_ptr_ptr) || (*mib_NasPortID_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_NasPortID_val_ptr_ptr = realloc( *mib_NasPortID_val_ptr_ptr, converted_len * sizeof(**mib_NasPortID_val_ptr_ptr));
        if(NULL == *mib_NasPortID_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_NasPortID_val_ptr_len_ptr = converted_len;
    memcpy( *mib_NasPortID_val_ptr_ptr, raw_NasPortID_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* NasPortID_map */

/**
 * Extract the current value of the NasPortID data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param NasPortID_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param NasPortID_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by NasPortID.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*NasPortID_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update NasPortID_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
NasPortID_get( dot11NasPortTable_rowreq_ctx *rowreq_ctx, char **NasPortID_val_ptr_ptr, size_t *NasPortID_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != NasPortID_val_ptr_ptr) && (NULL != *NasPortID_val_ptr_ptr));
   netsnmp_assert( NULL != NasPortID_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11NasPortTable:NasPortID_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the NasPortID data.
 * set (* NasPortID_val_ptr_ptr ) and (* NasPortID_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for NasPortID data
     */
    if ((NULL == (* NasPortID_val_ptr_ptr )) ||
        ((* NasPortID_val_ptr_len_ptr ) < (rowreq_ctx->data.NasPortID_len * sizeof((* NasPortID_val_ptr_ptr )[0])))) {
        /*
         * allocate space for NasPortID data
         */
        (* NasPortID_val_ptr_ptr ) = malloc(rowreq_ctx->data.NasPortID_len * sizeof((* NasPortID_val_ptr_ptr )[0]));
        if(NULL == (* NasPortID_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* NasPortID_val_ptr_len_ptr ) = rowreq_ctx->data.NasPortID_len * sizeof((* NasPortID_val_ptr_ptr )[0]);
    memcpy( (* NasPortID_val_ptr_ptr ), rowreq_ctx->data.NasPortID, (* NasPortID_val_ptr_len_ptr ) );

    return MFD_SUCCESS;
} /* NasPortID_get */



/** @} */
