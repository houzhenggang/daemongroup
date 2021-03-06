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
#include "dot11SSIDInfoTable.h"


/** @defgroup data_get data_get: Routines to get data
 *
 * TODO:230:M: Implement dot11SSIDInfoTable get routines.
 * TODO:240:M: Implement dot11SSIDInfoTable mapping routines (if any).
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
 *** Table dot11SSIDInfoTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11SSIDInfoTable is subid 4 of wtpWlan.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.33050.6.1.1.5.4, length: 12
*/

/* ---------------------------------------------------------------------
 * TODO:200:r: Implement dot11SSIDInfoTable data context functions.
 */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11WtpInfoEntry.wtpMacAddr
 * wtpMacAddr is subid 1 of dot11WtpInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.33050.6.1.1.1.1.1.1
 * Description:
AP mac.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 *
 * Its syntax is Dot11BaseWtpIdTC (based on perltype OCTETSTR)
 * The net-snmp type is ASN_OCTET_STR. The C type decl is char (char)
 * This data type requires a length.  (Max )
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
wtpMacAddr_map_ssidinfo(char **mib_wtpMacAddr_val_ptr_ptr, size_t *mib_wtpMacAddr_val_ptr_len_ptr, char *raw_wtpMacAddr_val_ptr, size_t raw_wtpMacAddr_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_wtpMacAddr_val_ptr);
    netsnmp_assert((NULL != mib_wtpMacAddr_val_ptr_ptr) && (NULL != mib_wtpMacAddr_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpMacAddr_map","called\n"));
    
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
 * DOT11-WTP-MIB::dot11WtpWlanStatsEntry.wlanCurrID
 * wlanCurrID is subid 1 of dot11WtpWlanStatsEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.33050.6.1.1.5.3.1.1
 * Description:
The wlan's ID.
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
 * default-node-wlanCurrID.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wlanCurrID_map_ssidinfo(long *mib_wlanCurrID_val_ptr, long raw_wlanCurrID_val)
{
    netsnmp_assert(NULL != mib_wlanCurrID_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wlanCurrID_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement wlanCurrID mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_wlanCurrID_val_ptr) = raw_wlanCurrID_val;

    return MFD_SUCCESS;
} /* wlanCurrID_map */


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
dot11SSIDInfoTable_indexes_set_tbl_idx(dot11SSIDInfoTable_mib_index *tbl_idx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wlanCurrID_val)
{
    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:dot11SSIDInfoTable_indexes_set_tbl_idx","called\n"));

    /* wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h */
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
    
    /* wlanCurrID(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h */
    tbl_idx->wlanCurrID = wlanCurrID_val;
    

    return MFD_SUCCESS;
} /* dot11SSIDInfoTable_indexes_set_tbl_idx */

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
dot11SSIDInfoTable_indexes_set(dot11SSIDInfoTable_rowreq_ctx *rowreq_ctx, char *wtpMacAddr_val_ptr,  size_t wtpMacAddr_val_ptr_len, long wlanCurrID_val)
{
    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:dot11SSIDInfoTable_indexes_set","called\n"));

    if(MFD_SUCCESS != dot11SSIDInfoTable_indexes_set_tbl_idx(&rowreq_ctx->tbl_idx
                                   , wtpMacAddr_val_ptr, wtpMacAddr_val_ptr_len
                                   , wlanCurrID_val
           ))
        return MFD_ERROR;

    /*
     * convert mib index to oid index
     */
    rowreq_ctx->oid_idx.len = sizeof(rowreq_ctx->oid_tmp) / sizeof(oid);
    if(0 != dot11SSIDInfoTable_index_to_oid(&rowreq_ctx->oid_idx,
                                    &rowreq_ctx->tbl_idx)) {
        return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* dot11SSIDInfoTable_indexes_set */


/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11SSIDInfoEntry.wtpSSIDName
 * wtpSSIDName is subid 1 of dot11SSIDInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.33050.6.1.1.5.4.1.1
 * Description:
SSID name.
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
 * default-node-wtpSSIDName.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wtpSSIDName_map(char **mib_wtpSSIDName_val_ptr_ptr, size_t *mib_wtpSSIDName_val_ptr_len_ptr, char *raw_wtpSSIDName_val_ptr, size_t raw_wtpSSIDName_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_wtpSSIDName_val_ptr);
    netsnmp_assert((NULL != mib_wtpSSIDName_val_ptr_ptr) && (NULL != mib_wtpSSIDName_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpSSIDName_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement wtpSSIDName non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_wtpSSIDName_val_ptr_len; /* assume equal */
    if((NULL == *mib_wtpSSIDName_val_ptr_ptr) || (*mib_wtpSSIDName_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_wtpSSIDName_val_ptr_ptr = realloc( *mib_wtpSSIDName_val_ptr_ptr, converted_len * sizeof(**mib_wtpSSIDName_val_ptr_ptr));
        if(NULL == *mib_wtpSSIDName_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_wtpSSIDName_val_ptr_len_ptr = converted_len;
    memcpy( *mib_wtpSSIDName_val_ptr_ptr, raw_wtpSSIDName_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* wtpSSIDName_map */

/**
 * Extract the current value of the wtpSSIDName data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param wtpSSIDName_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param wtpSSIDName_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by wtpSSIDName.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*wtpSSIDName_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update wtpSSIDName_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
wtpSSIDName_get( dot11SSIDInfoTable_rowreq_ctx *rowreq_ctx, char **wtpSSIDName_val_ptr_ptr, size_t *wtpSSIDName_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != wtpSSIDName_val_ptr_ptr) && (NULL != *wtpSSIDName_val_ptr_ptr));
   netsnmp_assert( NULL != wtpSSIDName_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpSSIDName_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the wtpSSIDName data.
 * set (* wtpSSIDName_val_ptr_ptr ) and (* wtpSSIDName_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for wtpSSIDName data
     */
    if ((NULL == (* wtpSSIDName_val_ptr_ptr )) ||
        ((* wtpSSIDName_val_ptr_len_ptr ) < (rowreq_ctx->data.wtpSSIDName_len * sizeof((* wtpSSIDName_val_ptr_ptr )[0])))) {
        /*
         * allocate space for wtpSSIDName data
         */
        (* wtpSSIDName_val_ptr_ptr ) = malloc(rowreq_ctx->data.wtpSSIDName_len * sizeof((* wtpSSIDName_val_ptr_ptr )[0]));
        if(NULL == (* wtpSSIDName_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* wtpSSIDName_val_ptr_len_ptr ) = rowreq_ctx->data.wtpSSIDName_len * sizeof((* wtpSSIDName_val_ptr_ptr )[0]);
    memcpy( (* wtpSSIDName_val_ptr_ptr ), rowreq_ctx->data.wtpSSIDName, (* wtpSSIDName_val_ptr_len_ptr ) );

    return MFD_SUCCESS;
} /* wtpSSIDName_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11SSIDInfoEntry.wtpSSIDMaxLoginUsr
 * wtpSSIDMaxLoginUsr is subid 2 of dot11SSIDInfoEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.33050.6.1.1.5.4.1.2
 * Description:
Max login user number.(Range 0-65535,if the input value larger than 65535,it will not be set)
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 1      hashint   0
 *   settable   1
 *
 * Ranges:  0 - 65535;
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
 * default-node-wtpSSIDMaxLoginUsr.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wtpSSIDMaxLoginUsr_map(long *mib_wtpSSIDMaxLoginUsr_val_ptr, long raw_wtpSSIDMaxLoginUsr_val)
{
    netsnmp_assert(NULL != mib_wtpSSIDMaxLoginUsr_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpSSIDMaxLoginUsr_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement wtpSSIDMaxLoginUsr mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_wtpSSIDMaxLoginUsr_val_ptr) = raw_wtpSSIDMaxLoginUsr_val;

    return MFD_SUCCESS;
} /* wtpSSIDMaxLoginUsr_map */

/**
 * Extract the current value of the wtpSSIDMaxLoginUsr data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param wtpSSIDMaxLoginUsr_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
wtpSSIDMaxLoginUsr_get( dot11SSIDInfoTable_rowreq_ctx *rowreq_ctx, long * wtpSSIDMaxLoginUsr_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != wtpSSIDMaxLoginUsr_val_ptr );


    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpSSIDMaxLoginUsr_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the wtpSSIDMaxLoginUsr data.
 * set (* wtpSSIDMaxLoginUsr_val_ptr ) from rowreq_ctx->data
 */
    (* wtpSSIDMaxLoginUsr_val_ptr ) = rowreq_ctx->data.wtpSSIDMaxLoginUsr;

    return MFD_SUCCESS;
} /* wtpSSIDMaxLoginUsr_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11SSIDInfoEntry.wtpSSIDLoadBalance
 * wtpSSIDLoadBalance is subid 3 of dot11SSIDInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.33050.6.1.1.5.4.1.3
 * Description:
Wlan load balancing state.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   0
 *
 * Enum range: 2/8. Values:  disable(0), enable(1)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
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
 * default-node-wtpSSIDLoadBalance.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wtpSSIDLoadBalance_map(u_long *mib_wtpSSIDLoadBalance_val_ptr, u_long raw_wtpSSIDLoadBalance_val)
{
    netsnmp_assert(NULL != mib_wtpSSIDLoadBalance_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpSSIDLoadBalance_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement wtpSSIDLoadBalance enum mapping.
     * uses INTERNAL_* macros defined in the header files
     */
    switch(raw_wtpSSIDLoadBalance_val) {
        case INTERNAL_WTPSSIDLOADBALANCE_DISABLE:
             *mib_wtpSSIDLoadBalance_val_ptr = WTPSSIDLOADBALANCE_DISABLE;
             break;

        case INTERNAL_WTPSSIDLOADBALANCE_ENABLE:
             *mib_wtpSSIDLoadBalance_val_ptr = WTPSSIDLOADBALANCE_ENABLE;
             break;

             default:
                 snmp_log(LOG_ERR, "couldn't map value %ld for wtpSSIDLoadBalance\n", raw_wtpSSIDLoadBalance_val );
                 return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* wtpSSIDLoadBalance_map */

/**
 * Extract the current value of the wtpSSIDLoadBalance data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param wtpSSIDLoadBalance_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
wtpSSIDLoadBalance_get( dot11SSIDInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpSSIDLoadBalance_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != wtpSSIDLoadBalance_val_ptr );


    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpSSIDLoadBalance_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the wtpSSIDLoadBalance data.
 * set (* wtpSSIDLoadBalance_val_ptr ) from rowreq_ctx->data
 */
    (* wtpSSIDLoadBalance_val_ptr ) = rowreq_ctx->data.wtpSSIDLoadBalance;

    return MFD_SUCCESS;
} /* wtpSSIDLoadBalance_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11SSIDInfoEntry.wtpSSIDESSID
 * wtpSSIDESSID is subid 4 of dot11SSIDInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.33050.6.1.1.5.4.1.4
 * Description:
ESSID.
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
 * default-node-wtpSSIDESSID.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wtpSSIDESSID_map(char **mib_wtpSSIDESSID_val_ptr_ptr, size_t *mib_wtpSSIDESSID_val_ptr_len_ptr, char *raw_wtpSSIDESSID_val_ptr, size_t raw_wtpSSIDESSID_val_ptr_len, int allow_realloc)
{
    int converted_len;

    netsnmp_assert(NULL != raw_wtpSSIDESSID_val_ptr);
    netsnmp_assert((NULL != mib_wtpSSIDESSID_val_ptr_ptr) && (NULL != mib_wtpSSIDESSID_val_ptr_len_ptr));
    
    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpSSIDESSID_map","called\n"));
    
    /*
     * TODO:241:r: |-> Implement wtpSSIDESSID non-integer mapping
     * it is hard to autogenerate code for mapping types that are not simple
     * integers, so here is an idea of what you might need to do. It will
     * probably need some tweaking to get right.
     */
    /*
     * if the length of the raw data doesn't directly correspond with
     * the length of the mib data, set converted_len to the
     * space required.
     */
    converted_len = raw_wtpSSIDESSID_val_ptr_len; /* assume equal */
    if((NULL == *mib_wtpSSIDESSID_val_ptr_ptr) || (*mib_wtpSSIDESSID_val_ptr_len_ptr < converted_len)) {
        if(! allow_realloc) {
            snmp_log(LOG_ERR,"not enough space for value mapping\n");
            return SNMP_ERR_GENERR;
        }
        *mib_wtpSSIDESSID_val_ptr_ptr = realloc( *mib_wtpSSIDESSID_val_ptr_ptr, converted_len * sizeof(**mib_wtpSSIDESSID_val_ptr_ptr));
        if(NULL == *mib_wtpSSIDESSID_val_ptr_ptr) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return SNMP_ERR_GENERR;
        }
    }
    *mib_wtpSSIDESSID_val_ptr_len_ptr = converted_len;
    memcpy( *mib_wtpSSIDESSID_val_ptr_ptr, raw_wtpSSIDESSID_val_ptr, converted_len );

    return MFD_SUCCESS;
} /* wtpSSIDESSID_map */

/**
 * Extract the current value of the wtpSSIDESSID data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param wtpSSIDESSID_val_ptr_ptr
 *        Pointer to storage for a char variable
 * @param wtpSSIDESSID_val_ptr_len_ptr
 *        Pointer to a size_t. On entry, it will contain the size (in bytes)
 *        pointed to by wtpSSIDESSID.
 *        On exit, this value should contain the data size (in bytes).
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
*
 * @note If you need more than (*wtpSSIDESSID_val_ptr_len_ptr) bytes of memory,
 *       allocate it using malloc() and update wtpSSIDESSID_val_ptr_ptr.
 *       <b>DO NOT</b> free the previous pointer.
 *       The MFD helper will release the memory you allocate.
 *
 * @remark If you call this function yourself, you are responsible
 *         for checking if the pointer changed, and freeing any
 *         previously allocated memory. (Not necessary if you pass
 *         in a pointer to static memory, obviously.)
 */
int
wtpSSIDESSID_get( dot11SSIDInfoTable_rowreq_ctx *rowreq_ctx, char **wtpSSIDESSID_val_ptr_ptr, size_t *wtpSSIDESSID_val_ptr_len_ptr )
{
   /** we should have a non-NULL pointer and enough storage */
   netsnmp_assert( (NULL != wtpSSIDESSID_val_ptr_ptr) && (NULL != *wtpSSIDESSID_val_ptr_ptr));
   netsnmp_assert( NULL != wtpSSIDESSID_val_ptr_len_ptr );


    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpSSIDESSID_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the wtpSSIDESSID data.
 * set (* wtpSSIDESSID_val_ptr_ptr ) and (* wtpSSIDESSID_val_ptr_len_ptr ) from rowreq_ctx->data
 */
    /*
     * make sure there is enough space for wtpSSIDESSID data
     */
    if ((NULL == (* wtpSSIDESSID_val_ptr_ptr )) ||
        ((* wtpSSIDESSID_val_ptr_len_ptr ) < (rowreq_ctx->data.wtpSSIDESSID_len * sizeof((* wtpSSIDESSID_val_ptr_ptr )[0])))) {
        /*
         * allocate space for wtpSSIDESSID data
         */
        (* wtpSSIDESSID_val_ptr_ptr ) = malloc(rowreq_ctx->data.wtpSSIDESSID_len * sizeof((* wtpSSIDESSID_val_ptr_ptr )[0]));
        if(NULL == (* wtpSSIDESSID_val_ptr_ptr )) {
            snmp_log(LOG_ERR,"could not allocate memory\n");
            return MFD_ERROR;
        }
    }
    (* wtpSSIDESSID_val_ptr_len_ptr ) = rowreq_ctx->data.wtpSSIDESSID_len * sizeof((* wtpSSIDESSID_val_ptr_ptr )[0]);
    memcpy( (* wtpSSIDESSID_val_ptr_ptr ), rowreq_ctx->data.wtpSSIDESSID, (* wtpSSIDESSID_val_ptr_len_ptr ) );

    return MFD_SUCCESS;
} /* wtpSSIDESSID_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11SSIDInfoEntry.wtpSSIDState
 * wtpSSIDState is subid 5 of dot11SSIDInfoEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.33050.6.1.1.5.4.1.5
 * Description:
SSID state.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  1      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 * Enum range: 2/8. Values:  disable(0), enable(1)
 *
 * Its syntax is INTEGER (based on perltype INTEGER)
 * The net-snmp type is ASN_INTEGER. The C type decl is long (u_long)
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
 * default-node-wtpSSIDState.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wtpSSIDState_map(u_long *mib_wtpSSIDState_val_ptr, u_long raw_wtpSSIDState_val)
{
    netsnmp_assert(NULL != mib_wtpSSIDState_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpSSIDState_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement wtpSSIDState enum mapping.
     * uses INTERNAL_* macros defined in the header files
     */
    switch(raw_wtpSSIDState_val) {
        case INTERNAL_WTPSSIDSTATE_DISABLE:
             *mib_wtpSSIDState_val_ptr = WTPSSIDSTATE_DISABLE;
             break;

        case INTERNAL_WTPSSIDSTATE_ENABLE:
             *mib_wtpSSIDState_val_ptr = WTPSSIDSTATE_ENABLE;
             break;

             default:
                 snmp_log(LOG_ERR, "couldn't map value %ld for wtpSSIDState\n", raw_wtpSSIDState_val );
                 return MFD_ERROR;
    }

    return MFD_SUCCESS;
} /* wtpSSIDState_map */

/**
 * Extract the current value of the wtpSSIDState data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param wtpSSIDState_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
wtpSSIDState_get( dot11SSIDInfoTable_rowreq_ctx *rowreq_ctx, u_long * wtpSSIDState_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != wtpSSIDState_val_ptr );


    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpSSIDState_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the wtpSSIDState data.
 * set (* wtpSSIDState_val_ptr ) from rowreq_ctx->data
 */
    (* wtpSSIDState_val_ptr ) = rowreq_ctx->data.wtpSSIDState;

    return MFD_SUCCESS;
} /* wtpSSIDState_get */

/*---------------------------------------------------------------------
 * DOT11-WTP-MIB::dot11SSIDInfoEntry.wtpSSIDSecurityPolicyID
 * wtpSSIDSecurityPolicyID is subid 6 of dot11SSIDInfoEntry.
 * Its status is Current, and its access level is ReadOnly.
 * OID: .1.3.6.1.4.1.33050.6.1.1.5.4.1.6
 * Description:
SSID security policy ID(0 means no security policy).
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
 * default-node-wtpSSIDSecurityPolicyID.m2d :
 *   @eval $m2c_node_skip_mapping = 1@
 *
 * @remark
 *  If the values for your data type don't exactly match the
 *  possible values defined by the mib, you should map them here.
 *  Otherwise, just do a direct copy.
 */
int
wtpSSIDSecurityPolicyID_map(long *mib_wtpSSIDSecurityPolicyID_val_ptr, long raw_wtpSSIDSecurityPolicyID_val)
{
    netsnmp_assert(NULL != mib_wtpSSIDSecurityPolicyID_val_ptr);
    
    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpSSIDSecurityPolicyID_map","called\n"));
    
    /*
     * TODO:241:o: |-> Implement wtpSSIDSecurityPolicyID mapping.
     * If the values for your data type don't exactly match the
     * possible values defined by the mib, you should map them here.
     */
    (*mib_wtpSSIDSecurityPolicyID_val_ptr) = raw_wtpSSIDSecurityPolicyID_val;

    return MFD_SUCCESS;
} /* wtpSSIDSecurityPolicyID_map */

/**
 * Extract the current value of the wtpSSIDSecurityPolicyID data.
 *
 * Set a value using the data context for the row.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param wtpSSIDSecurityPolicyID_val_ptr
 *        Pointer to storage for a long variable
 *
 * @retval MFD_SUCCESS         : success
 * @retval MFD_SKIP            : skip this node (no value for now)
 * @retval MFD_ERROR           : Any other error
 */
int
wtpSSIDSecurityPolicyID_get( dot11SSIDInfoTable_rowreq_ctx *rowreq_ctx, long * wtpSSIDSecurityPolicyID_val_ptr )
{
   /** we should have a non-NULL pointer */
   netsnmp_assert( NULL != wtpSSIDSecurityPolicyID_val_ptr );


    DEBUGMSGTL(("verbose:dot11SSIDInfoTable:wtpSSIDSecurityPolicyID_get","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:231:o: |-> Extract the current value of the wtpSSIDSecurityPolicyID data.
 * set (* wtpSSIDSecurityPolicyID_val_ptr ) from rowreq_ctx->data
 */
    (* wtpSSIDSecurityPolicyID_val_ptr ) = rowreq_ctx->data.wtpSSIDSecurityPolicyID;

    return MFD_SUCCESS;
} /* wtpSSIDSecurityPolicyID_get */



/** @} */
