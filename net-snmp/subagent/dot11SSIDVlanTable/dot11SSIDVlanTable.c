/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 14170 $ of $ 
 *
 * $Id:$
 */
/** \page MFD helper for dot11SSIDVlanTable
 *
 * \section intro Introduction
 * Introductory text.
 *
 */
/* standard Net-SNMP includes */
#include <net-snmp/net-snmp-config.h>
#include <net-snmp/net-snmp-includes.h>
#include <net-snmp/agent/net-snmp-agent-includes.h>

/* include our parent header */
#include "dot11SSIDVlanTable.h"

#include <net-snmp/agent/mib_modules.h>

#include "dot11SSIDVlanTable_interface.h"
#include "autelanWtpGroup.h"

#define SSIDVLANTABLE "2.12.3"

oid dot11SSIDVlanTable_oid[128] = { 0 };
int dot11SSIDVlanTable_oid_size = 0;

    dot11SSIDVlanTable_registration  dot11SSIDVlanTable_user_context;

void initialize_table_dot11SSIDVlanTable(void);
void shutdown_table_dot11SSIDVlanTable(void);


/**
 * Initializes the dot11SSIDVlanTable module
 */
void
init_dot11SSIDVlanTable(void)
{
    DEBUGMSGTL(("verbose:dot11SSIDVlanTable:init_dot11SSIDVlanTable","called\n"));

    /*
     * TODO:300:o: Perform dot11SSIDVlanTable one-time module initialization.
     */
     
    /*
     * here we initialize all the tables we're planning on supporting
     */
    if (should_init("dot11SSIDVlanTable"))
        initialize_table_dot11SSIDVlanTable();

} /* init_dot11SSIDVlanTable */

/**
 * Shut-down the dot11SSIDVlanTable module (agent is exiting)
 */
void
shutdown_dot11SSIDVlanTable(void)
{
    if (should_init("dot11SSIDVlanTable"))
        shutdown_table_dot11SSIDVlanTable();

}

/**
 * Initialize the table dot11SSIDVlanTable 
 *    (Define its contents and how it's structured)
 */
void
initialize_table_dot11SSIDVlanTable(void)
{
    dot11SSIDVlanTable_registration * user_context;
    u_long flags;

    DEBUGMSGTL(("verbose:dot11SSIDVlanTable:initialize_table_dot11SSIDVlanTable","called\n"));

    /*
     * TODO:301:o: Perform dot11SSIDVlanTable one-time table initialization.
     */

    /*
     * TODO:302:o: |->Initialize dot11SSIDVlanTable user context
     * if you'd like to pass in a pointer to some data for this
     * table, allocate or set it up here.
     */
    /*
     * a netsnmp_data_list is a simple way to store void pointers. A simple
     * string token is used to add, find or remove pointers.
     */
    user_context = netsnmp_create_data_list("dot11SSIDVlanTable", NULL, NULL);
    
    /*
     * No support for any flags yet, but in the future you would
     * set any flags here.
     */
    flags = 0;
	
    mad_dev_oid(dot11SSIDVlanTable_oid, SSIDVLANTABLE, &dot11SSIDVlanTable_oid_size, enterprise_pvivate_oid);
    /*
     * call interface initialization code
     */
    _dot11SSIDVlanTable_initialize_interface(user_context, flags);
} /* initialize_table_dot11SSIDVlanTable */

/**
 * Shutdown the table dot11SSIDVlanTable 
 */
void
shutdown_table_dot11SSIDVlanTable(void)
{
    /*
     * call interface shutdown code
     */
    _dot11SSIDVlanTable_shutdown_interface(&dot11SSIDVlanTable_user_context);
}

/**
 * extra context initialization (eg default values)
 *
 * @param rowreq_ctx    : row request context
 * @param user_init_ctx : void pointer for user (parameter to rowreq_ctx_allocate)
 *
 * @retval MFD_SUCCESS  : no errors
 * @retval MFD_ERROR    : error (context allocate will fail)
 */
int
dot11SSIDVlanTable_rowreq_ctx_init(dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx,
                           void *user_init_ctx)
{
    DEBUGMSGTL(("verbose:dot11SSIDVlanTable:dot11SSIDVlanTable_rowreq_ctx_init","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:210:o: |-> Perform extra dot11SSIDVlanTable rowreq initialization. (eg DEFVALS)
     */

    return MFD_SUCCESS;
} /* dot11SSIDVlanTable_rowreq_ctx_init */

/**
 * extra context cleanup
 *
 */
void dot11SSIDVlanTable_rowreq_ctx_cleanup(dot11SSIDVlanTable_rowreq_ctx *rowreq_ctx)
{
    DEBUGMSGTL(("verbose:dot11SSIDVlanTable:dot11SSIDVlanTable_rowreq_ctx_cleanup","called\n"));

    netsnmp_assert(NULL != rowreq_ctx);
    
    /*
     * TODO:211:o: |-> Perform extra dot11SSIDVlanTable rowreq cleanup.
     */
} /* dot11SSIDVlanTable_rowreq_ctx_cleanup */

/************************************************************
 * the *_should_save routine is called to determine if a row
 * should be stored persistently.
 *
 * Note that this is not a 'dirty' check (i.e. if a row has changed),
 * but a check for volatile rows that should not be saved between
 * restarts.
 *
 * return 1 if the row should be stored
 * return 0 if the row should not be stored
 */
int
dot11SSIDVlanTable_container_should_save(dot11SSIDVlanTable_rowreq_ctx * rowreq_ctx)
{
    
    return 1; /* save the row */
}

/**
 * pre-request callback
 *
 *
 * @retval MFD_SUCCESS              : success.
 * @retval MFD_ERROR                : other error
 */
int
dot11SSIDVlanTable_pre_request(dot11SSIDVlanTable_registration * user_context)
{
    DEBUGMSGTL(("verbose:dot11SSIDVlanTable:dot11SSIDVlanTable_pre_request","called\n"));

    /*
     * TODO:510:o: Perform dot11SSIDVlanTable pre-request actions.
     */

    return MFD_SUCCESS;
} /* dot11SSIDVlanTable_pre_request */

/**
 * post-request callback
 *
 * Note:
 *   New rows have been inserted into the container, and
 *   deleted rows have been removed from the container and
 *   released.
 *
 * @param user_context
 * @param rc : MFD_SUCCESS if all requests succeeded
 *
 * @retval MFD_SUCCESS : success.
 * @retval MFD_ERROR   : other error (ignored)
 */
int
dot11SSIDVlanTable_post_request(dot11SSIDVlanTable_registration * user_context, int rc)
{
    DEBUGMSGTL(("verbose:dot11SSIDVlanTable:dot11SSIDVlanTable_post_request","called\n"));

    /*
     * TODO:511:o: Perform dot11SSIDVlanTable post-request actions.
     */

    /*
     * check to set if any rows were changed.
     */
    if (dot11SSIDVlanTable_dirty_get()) {
        /*
         * check if request was successful. If so, this would be
         * a good place to save data to its persistent store.
         */
        if (MFD_SUCCESS == rc) {
            /*
             * save changed rows, if you haven't already
             */
            snmp_store(netsnmp_ds_get_string(NETSNMP_DS_LIBRARY_ID,
                                             NETSNMP_DS_LIB_APPTYPE));
        }
        
        dot11SSIDVlanTable_dirty_set(0); /* clear table dirty flag */
    }

    return MFD_SUCCESS;
} /* dot11SSIDVlanTable_post_request */


/** @{ */
