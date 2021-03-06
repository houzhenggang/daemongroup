/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.18 $ of : mfd-data-set.m2c,v $
 *
 * $Id:$
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>
#include "wcpss/asd/asd.h"
#include "wcpss/wid/WID.h"
#include "dbus/wcpss/dcli_wid_wtp.h"
#include "dbus/wcpss/dcli_wid_wlan.h"
#include "ws_dcli_wlans.h"
#include "ws_sysinfo.h"
#include "ws_init_dbus.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "ws_init_dbus.h"
#include <dbus/dbus.h>
#include "sysdef/npd_sysdef.h"
#include "dbus/npd/npd_dbus_def.h"
#include "autelanWtpGroup.h"
#include "ws_snmpd_engine.h"
#include "ws_security.h"
/* include our parent header */
#include "dot11ConfigWapiTable.h"


/** @defgroup data_set data_set: Routines to set data
 *
 * These routines are used to set the value for individual objects. The
 * row context is passed, along with the new value.
 * 
 * @{
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table dot11ConfigWapiTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * dot11ConfigWapiTable is subid 5 of dot11securityConfig.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.33050.6.1.2.14.5, length: 12
*/
    /*
     * NOTE: if you update this chart, please update the versions in
     *       local/mib2c-conf.d/parent-set.m2i
     *       agent/mibgroup/helpers/baby_steps.c
     * while you're at it.
     */
    /*
     ***********************************************************************
     * Baby Steps Flow Chart (2004.06.05)                                  *
     *                                                                     *
     * +--------------+    +================+    U = unconditional path    *
     * |optional state|    ||required state||    S = path for success      *
     * +--------------+    +================+    E = path for error        *
     ***********************************************************************
     *
     *                        +--------------+
     *                        |     pre      |
     *                        |   request    |
     *                        +--------------+
     *                               | U
     *                        +==============+
     *       +----------------||  object    ||
     *       |              E ||  lookup    ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |              E ||   check    ||
     *       |<---------------||   values   ||
     *       |                +==============+
     *       |                       | S
     *       |                +==============+
     *       |       +<-------||   undo     ||
     *       |       |      E ||   setup    ||
     *       |       |        +==============+
     *       |       |               | S
     *       |       |        +==============+
     *       |       |        ||    set     ||-------------------------->+
     *       |       |        ||   value    || E                         |
     *       |       |        +==============+                           |
     *       |       |               | S                                 |
     *       |       |        +--------------+                           |
     *       |       |        |    check     |-------------------------->|
     *       |       |        |  consistency | E                         |
     *       |       |        +--------------+                           |
     *       |       |               | S                                 |
     *       |       |        +==============+         +==============+  |
     *       |       |        ||   commit   ||-------->||     undo   ||  |
     *       |       |        ||            || E       ||    commit  ||  |
     *       |       |        +==============+         +==============+  |
     *       |       |               | S                     U |<--------+
     *       |       |        +--------------+         +==============+
     *       |       |        | irreversible |         ||    undo    ||
     *       |       |        |    commit    |         ||     set    ||
     *       |       |        +--------------+         +==============+
     *       |       |               | U                     U |
     *       |       +-------------->|<------------------------+
     *       |                +==============+
     *       |                ||   undo     ||
     *       |                ||  cleanup   ||
     *       |                +==============+
     *       +---------------------->| U
     *                        +--------------+
     *                        |    post      |
     *                        |   request    |
     *                        +--------------+
     *
     */

/**
 * Setup up context with information needed to undo a set request.
 *
 * This function will be called before the individual node undo setup
 * functions are called. If you need to do any undo setup that is not
 * related to a specific column, you can do it here.
 *
 * Note that an individual node's undo_setup function will only be called
 * if that node is being set to a new value.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in the node's undo_setup
 * function, so it won't be done unless it is necessary.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11ConfigWapiTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 */
int
dot11ConfigWapiTable_undo_setup( dot11ConfigWapiTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11ConfigWapiTable:dot11ConfigWapiTable_undo_setup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:451:M: |-> Setup dot11ConfigWapiTable undo.
     * set up dot11ConfigWapiTable undo information, in preparation for a set.
     */

    return rc;
} /* dot11ConfigWapiTable_undo_setup */

/**
 * Cleanup up context undo information.
 *
 * This function will be called after set/commit processing. If you
 * allocated any resources in undo_setup, this is the place to release
 * those resources.
 *
 * This function is called regardless of the success or failure of the set
 * request. If you need to perform different steps for cleanup depending
 * on success or failure, you can add a flag to the rowreq_ctx.
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11ConfigWapiTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot11ConfigWapiTable_undo_cleanup( dot11ConfigWapiTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11ConfigWapiTable:dot11ConfigWapiTable_undo_cleanup","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:452:M: |-> Cleanup dot11ConfigWapiTable undo.
     */

    return rc;
} /* dot11ConfigWapiTable_undo_cleanup */

/**
 * commit new values.
 *
 * At this point, you should have done everything you can to ensure that
 * this commit will not fail.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the FLAG_* bits can be found in
 * dot11ConfigWapiTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param dot11ConfigWapiTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot11ConfigWapiTable_commit( dot11ConfigWapiTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;
    int             save_flags;

    DEBUGMSGTL(("verbose:dot11ConfigWapiTable:dot11ConfigWapiTable_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * save flags, then clear until we actually do something
     */
    save_flags = rowreq_ctx->column_set_flags;
    rowreq_ctx->column_set_flags = 0;

    /*
     * commit dot11ConfigWapiTable data
     * 1) check the column's flag in save_flags to see if it was set.
     * 2) clear the flag when you handle that column
     * 3) set the column's flag in column_set_flags if it needs undo
     *    processing in case of a failure.
     */
    if (save_flags & FLAG_WAPIASIPADDRESS) {
       save_flags &= ~FLAG_WAPIASIPADDRESS; /* clear WAPIASIPAddress */
       /*
        * TODO:482:o: |-> commit column WAPIASIPAddress.
        */
       //rc = -1;
       if(-1 == rc) {
           snmp_log(LOG_ERR,"dot11ConfigWapiTable column WAPIASIPAddress commit failed\n");
       }
       else {
            /*
             * set flag, in case we need to undo WAPIASIPAddress
             */
            rowreq_ctx->column_set_flags |= FLAG_WAPIASIPADDRESS;
       }
    }

    if (save_flags) {
       snmp_log(LOG_ERR, "unhandled columns (0x%x) in commit\n", save_flags);
       return MFD_ERROR;
    }

    return rc;
} /* dot11ConfigWapiTable_commit */

/**
 * undo commit new values.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the FLAG_* bits can be found in
 * dot11ConfigWapiTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @param dot11ConfigWapiTable_rowreq_ctx
 *        Pointer to the users context.
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error
 */
int
dot11ConfigWapiTable_undo_commit( dot11ConfigWapiTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;

    DEBUGMSGTL(("verbose:dot11ConfigWapiTable:dot11ConfigWapiTable_undo_commit","called\n"));

    /** we should have a non-NULL pointer */
    netsnmp_assert( NULL != rowreq_ctx );

    /*
     * TODO:485:M: |-> Undo dot11ConfigWapiTable commit.
     * check the column's flag in rowreq_ctx->column_set_flags to see
     * if it was set during commit, then undo it.
     *
     * eg: if (rowreq_ctx->column_set_flags & FLAG_) {}
     */

    return rc;
} /* dot11ConfigWapiTable_undo_commit */

/*
 * TODO:420:r: Implement dot11ConfigWapiTable index validation.
 */
/*
 * TODO:440:M: Implement dot11ConfigWapiTable node value checks.
 * TODO:450:M: Implement dot11ConfigWapiTable undo functions.
 * TODO:460:M: Implement dot11ConfigWapiTable set functions.
 * TODO:480:M: Implement dot11ConfigWapiTable commit functions.
 */
/*---------------------------------------------------------------------
 * DOT11-AC-MIB::dot11ConfigWapiEntry.WAPIASIPAddress
 * WAPIASIPAddress is subid 2 of dot11ConfigWapiEntry.
 * Its status is Current, and its access level is ReadWrite.
 * OID: .1.3.6.1.4.1.33050.6.1.2.14.5.1.2
 * Description:
WAPIASIPAddress	.
 *
 * Attributes:
 *   accessible 1     isscalar 0     enums  0      hasdefval 0
 *   readable   1     iscolumn 1     ranges 0      hashint   0
 *   settable   1
 *
 *
 * Its syntax is IPADDR (based on perltype IPADDR)
 * The net-snmp type is ASN_IPADDRESS. The C type decl is u_long (u_long)
 */
/**
 * Check that the proposed new value is potentially valid.
 *
 * @param rowreq_ctx
 *        Pointer to the row request context.
 * @param WAPIASIPAddress_val
 *        A u_long containing the new value.
 *
 * @retval MFD_SUCCESS        : incoming value is legal
 * @retval MFD_NOT_VALID_NOW  : incoming value is not valid now
 * @retval MFD_NOT_VALID_EVER : incoming value is never valid
 *
 * This is the place to check for requirements that are not
 * expressed in the mib syntax (for example, a requirement that
 * is detailed in the description for an object).
 *
 * You should check that the requested change between the undo value and the
 * new value is legal (ie, the transistion from one value to another
 * is legal).
 *      
 *@note
 * This check is only to determine if the new value
 * is \b potentially valid. This is the first check of many, and
 * is one of the simplest ones.
 * 
 *@note
 * this is not the place to do any checks for values
 * which depend on some other value in the mib. Those
 * types of checks should be done in the
 * dot11ConfigWapiTable_check_dependencies() function.
 *
 * The following checks have already been done for you:
 *    The syntax is ASN_IPADDRESS
 *
 * If there a no other checks you need to do, simply return MFD_SUCCESS.
 *
 */
int
WAPIASIPAddress_check_value( dot11ConfigWapiTable_rowreq_ctx *rowreq_ctx, u_long WAPIASIPAddress_val)
{
    DEBUGMSGTL(("verbose:dot11ConfigWapiTable:WAPIASIPAddress_check_value","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:441:o: |-> Check for valid WAPIASIPAddress value.
     */

    return MFD_SUCCESS; /* WAPIASIPAddress value not illegal */
} /* WAPIASIPAddress_check_value */

/**
 * Save old value information
 *
 * @param rowreq_ctx
 *        Pointer to the table context (dot11ConfigWapiTable_rowreq_ctx)
 *
 * @retval MFD_SUCCESS : success
 * @retval MFD_ERROR   : error. set will fail.
 *
 * This function will be called after the table level undo setup function
 * dot11ConfigWapiTable_undo_setup has been called.
 *
 *@note
 * this function will only be called if a new value is set for this column.
 *
 * If there is any setup specific to a particular column (e.g. allocating
 * memory for a string), you should do that setup in this function, so it
 * won't be done unless it is necessary.
 */
int
WAPIASIPAddress_undo_setup( dot11ConfigWapiTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11ConfigWapiTable:WAPIASIPAddress_undo_setup","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:455:o: |-> Setup WAPIASIPAddress undo.
     */
    /*
     * copy WAPIASIPAddress data
     * set rowreq_ctx->undo->WAPIASIPAddress from rowreq_ctx->data.WAPIASIPAddress
     */
    rowreq_ctx->undo->WAPIASIPAddress = rowreq_ctx->data.WAPIASIPAddress;


    return MFD_SUCCESS;
} /* WAPIASIPAddress_undo_setup */

/**
 * Set the new value.
 *
 * @param rowreq_ctx
 *        Pointer to the users context. You should know how to
 *        manipulate the value from this object.
 * @param WAPIASIPAddress_val
 *        A u_long containing the new value.
 */
int
WAPIASIPAddress_set( dot11ConfigWapiTable_rowreq_ctx *rowreq_ctx, u_long WAPIASIPAddress_val )
{

    DEBUGMSGTL(("verbose:dot11ConfigWapiTable:WAPIASIPAddress_set","called\n"));

    /** should never get a NULL pointer */
    netsnmp_assert(NULL != rowreq_ctx);

/*
 * TODO:245:o: |-> Implement WAPIASIPAddress reverse mapping.
 * If the values for your data type don't exactly match the
 * possible values defined by the mib, you should map them here.
 */
    /*
     * TODO:461:M: |-> Set WAPIASIPAddress value.
     * set WAPIASIPAddress value in rowreq_ctx->data
     */
	int ret = 2;
	char input[DEFAULT_LEN] = {0};
	memset(input,0,DEFAULT_LEN);
	int ret_one = 2;
	int ret_two = 2;
	int ret_three = 2;	
	int rc = MFD_ERROR;

    void *connection = NULL;
    if(SNMPD_DBUS_ERROR == get_instance_dbus_connection(rowreq_ctx->data.parameter, &connection, SNMPD_INSTANCE_MASTER_V3))
        return MFD_ERROR;
    
	ret = config_wlan_service(rowreq_ctx->data.parameter, connection,rowreq_ctx->data.WapiSSID,"disable");
	if(ret == 1)
	{
		INET_NTOA(WAPIASIPAddress_val,input);
		ret_one = config_wapi_auth(rowreq_ctx->data.parameter, connection,rowreq_ctx->data.SecurityID,input,"X.509");
		if (ret_one == 1)
		{   
			ret_two = apply_wlanID(rowreq_ctx->data.parameter, connection,rowreq_ctx->data.SecurityID,rowreq_ctx->data.WapiSSID); 
			if(ret_two == 1)
			{
				ret_three = config_wlan_service(rowreq_ctx->data.parameter, connection,rowreq_ctx->data.WapiSSID,"enable");
				if (ret_three == 1)
				{
				    rowreq_ctx->data.WAPIASIPAddress = WAPIASIPAddress_val;
					rc = MFD_SUCCESS;
				}
				else
				{
					rc = MFD_ERROR;
				}
			}
			else
			{
				rc = MFD_ERROR;
			}					
		}	
		else
		{
			rc = MFD_ERROR;
		}								 	     

	}
	else 
	{
		rc = MFD_ERROR;
	}

    return rc;
} /* WAPIASIPAddress_set */

/**
 * undo the previous set.
 *
 * @param rowreq_ctx
 *        Pointer to the users context.
 */
int
WAPIASIPAddress_undo( dot11ConfigWapiTable_rowreq_ctx *rowreq_ctx)
{

    DEBUGMSGTL(("verbose:dot11ConfigWapiTable:WAPIASIPAddress_undo","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:456:o: |-> Clean up WAPIASIPAddress undo.
     */
    /*
     * copy WAPIASIPAddress data
     * set rowreq_ctx->data.WAPIASIPAddress from rowreq_ctx->undo->WAPIASIPAddress
     */
    rowreq_ctx->data.WAPIASIPAddress = rowreq_ctx->undo->WAPIASIPAddress;

    
    return MFD_SUCCESS;
} /* WAPIASIPAddress_undo */

/**
 * check dependencies
 *
 * This is useful for for tables which have dependencies between columns
 * (or rows, or tables). For example, two columns allocating a percentage
 * of something add up 100%.
 *
 * Should you need different behavior depending on which columns were
 * set, rowreq_ctx->column_set_flags will indicate which writeable columns were
 * set. The definitions for the FLAG_* bits can be found in
 * dot11ConfigWapiTable_oids.h.
 * A new row will have the MFD_ROW_CREATED bit set in rowreq_flags.
 *
 * @retval MFD_SUCCESS all the changes to the row are legal
 * @retval MFD_ERROR   one or more changes are not legal
 *
 * (see README-table-dot11ConfigWapiTable if you don't have dependencies)
 */
int
dot11ConfigWapiTable_check_dependencies(dot11ConfigWapiTable_rowreq_ctx *rowreq_ctx)
{
    int rc = MFD_SUCCESS;
    
    DEBUGMSGTL(("internal:dot11ConfigWapiTable:dot11ConfigWapiTable_check_dependencies","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);

    /*
     * TODO:470:o: Check dot11ConfigWapiTable row dependencies.
     * check that all new value are legal and consistent with each other
     */
    return rc;
} /* dot11ConfigWapiTable_check_dependencies */

/** @} */
