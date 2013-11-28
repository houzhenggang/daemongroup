/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 1.32.2.3 $ of : mfd-top.m2c,v $
 *
 * $Id:$
 */
#ifndef DOT11WTPENDSTAINFOTABLE_H
#define DOT11WTPENDSTAINFOTABLE_H

#ifdef __cplusplus
extern "C" {
#endif


/** @defgroup misc misc: Miscelaneous routines
 *
 * @{
 */
#include <net-snmp/library/asn1.h>

/* other required module components */
    /* *INDENT-OFF*  */
config_require(DOT11-WTP-MIB/dot11WtpEndStaInfoTable/dot11WtpEndStaInfoTable_interface);
config_require(DOT11-WTP-MIB/dot11WtpEndStaInfoTable/dot11WtpEndStaInfoTable_data_access);
config_require(DOT11-WTP-MIB/dot11WtpEndStaInfoTable/dot11WtpEndStaInfoTable_data_get);
config_require(DOT11-WTP-MIB/dot11WtpEndStaInfoTable/dot11WtpEndStaInfoTable_data_set);
    /* *INDENT-ON*  */

/* OID and column number definitions for  */
#include "dot11WtpEndStaInfoTable_oids.h"

/* enum definions */
#include "dot11WtpEndStaInfoTable_enums.h"
#include "ws_dbus_list_interface.h"

/* *********************************************************************
 * function declarations
 */
void init_dot11WtpEndStaInfoTable(void);

/* *********************************************************************
 * Table declarations
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
/* *********************************************************************
 * When you register your mib, you get to provide a generic
 * pointer that will be passed back to you for most of the
 * functions calls.
 *
 * TODO:100:r: Review all context structures
 */
    /*
     * TODO:101:o: |-> Review dot11WtpEndStaInfoTable registration context.
     */
typedef netsnmp_data_list * dot11WtpEndStaInfoTable_registration_ptr;

/**********************************************************************/
/*
 * TODO:110:r: |-> Review dot11WtpEndStaInfoTable data context structure.
 * This structure is used to represent the data for dot11WtpEndStaInfoTable.
 */
/*
 * This structure contains storage for all the columns defined in the
 * dot11WtpEndStaInfoTable.
 */
typedef struct dot11WtpEndStaInfoTable_data_s {
    
        /*
         * wtpEndWMMSta(1)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpEndWMMSta;
    
        /*
         * wtpStaIPAddress(2)/IPADDR/ASN_IPADDRESS/u_long(u_long)//l/A/w/e/r/d/h
         */
   u_long   wtpStaIPAddress;
    
        /*
         * wtpStaRadioMode(3)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   wtpStaRadioMode;
    
        /*
         * wtpStaRadioChannel(4)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpStaRadioChannel;
    
        /*
         * wtpAPTxRates(5)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpAPTxRates;
    
        /*
         * wtpStaPowerSaveMode(6)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   wtpStaPowerSaveMode;
    
        /*
         * wtpStaVlanId(7)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   wtpStaVlanId;
    
        /*
         * wtpStaSSIDName(8)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpStaSSIDName[255];
size_t      wtpStaSSIDName_len; /* # of char elements, not bytes */
    
        /*
         * wtpStaAuthenMode(9)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   wtpStaAuthenMode;
    
        /*
         * wtpStaSecurityCiphers(10)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   wtpStaSecurityCiphers;
    
        /*
         * wtpAuthenModel(11)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   wtpAuthenModel;
    
        /*
         * wtpSecurityCiphers(12)/INTEGER/ASN_INTEGER/long(u_long)//l/A/w/E/r/d/h
         */
   u_long   wtpSecurityCiphers;
    
        /*
         * apEndStaID(13)/INTEGER/ASN_INTEGER/long(long)//l/A/w/e/r/d/h
         */
   long   apEndStaID;
    
        /*
         * wtpStaIPV6Address(17)/InetAddressIPv6/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
   char   wtpStaIPV6Address[128];
size_t      wtpStaIPV6Address_len; /* # of char elements, not bytes */
    
} dot11WtpEndStaInfoTable_data;


/*
 * TODO:120:r: |-> Review dot11WtpEndStaInfoTable mib index.
 * This structure is used to represent the index for dot11WtpEndStaInfoTable.
 */
typedef struct dot11WtpEndStaInfoTable_mib_index_s {

        /*
         * wtpMacAddr(1)/Dot11BaseWtpIdTC/ASN_OCTET_STR/char(char)//L/A/w/e/r/d/h
         */
        /** 128 - 1(other indexes) - oid length(14) = 112 */
   char   wtpMacAddr[112];
   size_t      wtpMacAddr_len;

        /*
         * wtpStaMacAddr(1)/DisplayString/ASN_OCTET_STR/char(char)//L/A/w/e/R/d/H
         */
        /** 128 - 1(other indexes) - oid length(14) = 112 */
   char   wtpStaMacAddr[112];
   size_t      wtpStaMacAddr_len;


} dot11WtpEndStaInfoTable_mib_index;

    /*
     * TODO:121:r: |   |-> Review dot11WtpEndStaInfoTable max index length.
     * If you KNOW that your indexes will never exceed a certain
     * length, update this macro to that length.
     *
     * BE VERY CAREFUL TO TAKE INTO ACCOUNT THE MAXIMUM
     * POSSIBLE LENGHT FOR EVERY VARIABLE LENGTH INDEX!
     * Guessing 128 - col/entry(2)  - oid len(12)
*/
#define MAX_dot11WtpEndStaInfoTable_IDX_LEN     114


/* *********************************************************************
 * TODO:130:o: |-> Review dot11WtpEndStaInfoTable Row request (rowreq) context.
 * When your functions are called, you will be passed a
 * dot11WtpEndStaInfoTable_rowreq_ctx pointer.
 */
typedef struct dot11WtpEndStaInfoTable_rowreq_ctx_s {

    /** this must be first for container compare to work */
    netsnmp_index        oid_idx;
    oid                  oid_tmp[MAX_dot11WtpEndStaInfoTable_IDX_LEN];
    
    dot11WtpEndStaInfoTable_mib_index        tbl_idx;
    
    dot11WtpEndStaInfoTable_data              data;

    /*
     * flags per row. Currently, the first (lower) 8 bits are reserved
     * for the user. See mfd.h for other flags.
     */
    u_int                       rowreq_flags;

    /*
     * implementor's context pointer (provided during registration)
     */
    dot11WtpEndStaInfoTable_registration_ptr dot11WtpEndStaInfoTable_reg;

    /*
     * TODO:131:o: |   |-> Add useful data to dot11WtpEndStaInfoTable rowreq context.
     */
    
    /*
     * storage for future expansion
     */
    netsnmp_data_list             *dot11WtpEndStaInfoTable_data_list;

} dot11WtpEndStaInfoTable_rowreq_ctx;

typedef struct dot11WtpEndStaInfoTable_ref_rowreq_ctx_s {
    dot11WtpEndStaInfoTable_rowreq_ctx *rowreq_ctx;
} dot11WtpEndStaInfoTable_ref_rowreq_ctx;

/* *********************************************************************
 * function prototypes
 */
    int dot11WtpEndStaInfoTable_pre_request(dot11WtpEndStaInfoTable_registration_ptr user_context);
    int dot11WtpEndStaInfoTable_post_request(dot11WtpEndStaInfoTable_registration_ptr user_context);


extern oid dot11WtpEndStaInfoTable_oid[];
extern int dot11WtpEndStaInfoTable_oid_size;


#include "dot11WtpEndStaInfoTable_interface.h"
#include "dot11WtpEndStaInfoTable_data_access.h"
#include "dot11WtpEndStaInfoTable_data_get.h"
#include "dot11WtpEndStaInfoTable_data_set.h"

/*
 * DUMMY markers, ignore
 *
 * TODO:099:x: *************************************************************
 * TODO:199:x: *************************************************************
 * TODO:299:x: *************************************************************
 * TODO:399:x: *************************************************************
 * TODO:499:x: *************************************************************
 */

#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPENDSTAINFOTABLE_H */
