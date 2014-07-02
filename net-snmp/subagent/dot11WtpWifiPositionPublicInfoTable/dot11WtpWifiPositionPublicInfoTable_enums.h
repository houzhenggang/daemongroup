/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-enums.m2c 12526 2005-07-15 22:41:16Z rstory $
 *
 * $Id:$
 */
#ifndef DOT11WTPWIFIPOSITIONPUBLICINFOTABLE_ENUMS_H
#define DOT11WTPWIFIPOSITIONPUBLICINFOTABLE_ENUMS_H

#ifdef __cplusplus
extern "C" {
#endif

 /*
 * NOTES on enums
 * ==============
 *
 * Value Mapping
 * -------------
 * If the values for your data type don't exactly match the
 * possible values defined by the mib, you should map them
 * below. For example, a boolean flag (1/0) is usually represented
 * as a TruthValue in a MIB, which maps to the values (1/2).
 *
 */
/*************************************************************************
 *************************************************************************
 *
 * enum definitions for table dot11WtpWifiPositionPublicInfoTable
 *
 *************************************************************************
 *************************************************************************/

/*************************************************************
 * constants for enums for the MIB node
 * wtpWifiPositionScanType (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef WTPWIFIPOSITIONSCANTYPE_ENUMS
#define WTPWIFIPOSITIONSCANTYPE_ENUMS

#define WTPWIFIPOSITIONSCANTYPE_ALL  0 
#define WTPWIFIPOSITIONSCANTYPE_ASSOCIATE  1 
#define WTPWIFIPOSITIONSCANTYPE_NONASSOCIATED  2 

#endif /* WTPWIFIPOSITIONSCANTYPE_ENUMS */


/*************************************************************
 * constants for enums for the MIB node
 * wtpWifiPositionScanSwitch (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef WTPWIFIPOSITIONSCANSWITCH_ENUMS
#define WTPWIFIPOSITIONSCANSWITCH_ENUMS

#define WTPWIFIPOSITIONSCANSWITCH_OFF  0 
#define WTPWIFIPOSITIONSCANSWITCH_ON  1 

#endif /* WTPWIFIPOSITIONSCANSWITCH_ENUMS */




#ifdef __cplusplus
}
#endif

#endif /* DOT11WTPWIFIPOSITIONPUBLICINFOTABLE_ENUMS_H */