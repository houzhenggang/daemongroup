/*
 * Note: this file originally auto-generated by mib2c using
 *  : generic-table-enums.m2c,v 1.3 2004/05/18 17:44:32 rstory Exp $
 *
 * $Id:$
 */
#ifndef DOT11CONFIGWLANTABLE_ENUMS_H
#define DOT11CONFIGWLANTABLE_ENUMS_H

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
 * enum definitions for table dot11ConfigWlanTable
 *
 *************************************************************************
 *************************************************************************/

/*************************************************************
 * constants for enums for the MIB node
 * wlanHideEssid (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef WLANHIDEESSID_ENUMS
#define WLANHIDEESSID_ENUMS

#define WLANHIDEESSID_NO  0 
#define WLANHIDEESSID_YES  1 


#endif /* WLANHIDEESSID_ENUMS */

    /*
     * TODO:140:o: Define interal representation of wlanHideEssid enums.
     * (used for value mapping; see notes at top of file)
     */
#define INTERNAL_WLANHIDEESSID_NO  0 
#define INTERNAL_WLANHIDEESSID_YES  1 

/*************************************************************
 * constants for enums for the MIB node
 * wlanServiceEnable (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef WLANSERVICEENABLE_ENUMS
#define WLANSERVICEENABLE_ENUMS

#define WLANSERVICEENABLE_DISABLE  0 
#define WLANSERVICEENABLE_ENABLE  1 


#endif /* WLANSERVICEENABLE_ENUMS */

    /*
     * TODO:140:o: Define interal representation of wlanServiceEnable enums.
     * (used for value mapping; see notes at top of file)
     */
#define INTERNAL_WLANSERVICEENABLE_DISABLE  0 
#define INTERNAL_WLANSERVICEENABLE_ENABLE  1 

/*************************************************************
 * constants for enums for the MIB node
 * wlanLoadBalanceStatus (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef WLANLOADBALANCESTATUS_ENUMS
#define WLANLOADBALANCESTATUS_ENUMS

#define WLANLOADBALANCESTATUS_NO  0 
#define WLANLOADBALANCESTATUS_NUMBER  1 
#define WLANLOADBALANCESTATUS_FLOW  2 


#endif /* WLANLOADBALANCESTATUS_ENUMS */

    /*
     * TODO:140:o: Define interal representation of wlanLoadBalanceStatus enums.
     * (used for value mapping; see notes at top of file)
     */
#define INTERNAL_WLANLOADBALANCESTATUS_NO  0 
#define INTERNAL_WLANLOADBALANCESTATUS_NUMBER  1 
#define INTERNAL_WLANLOADBALANCESTATUS_FLOW  2 

/*************************************************************
 * constants for enums for the MIB node
 * wlanLoadBalanceStatusBaseOnFlow (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef WLANLOADBALANCESTATUSBASEONFLOW_ENUMS
#define WLANLOADBALANCESTATUSBASEONFLOW_ENUMS

#define WLANLOADBALANCESTATUSBASEONFLOW_DISABLE  0 
#define WLANLOADBALANCESTATUSBASEONFLOW_ENABLE  1 


#endif /* WLANLOADBALANCESTATUSBASEONFLOW_ENUMS */

    /*
     * TODO:140:o: Define interal representation of wlanLoadBalanceStatusBaseOnFlow enums.
     * (used for value mapping; see notes at top of file)
     */
#define INTERNAL_WLANLOADBALANCESTATUSBASEONFLOW_DISABLE  0 
#define INTERNAL_WLANLOADBALANCESTATUSBASEONFLOW_ENABLE  1 

/*************************************************************
 * constants for enums for the MIB node
 * wlanLoadBalanceStatusBaseOnUsr (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef WLANLOADBALANCESTATUSBASEONUSR_ENUMS
#define WLANLOADBALANCESTATUSBASEONUSR_ENUMS

#define WLANLOADBALANCESTATUSBASEONUSR_DISABLE  0 
#define WLANLOADBALANCESTATUSBASEONUSR_ENABLE  1 


#endif /* WLANLOADBALANCESTATUSBASEONUSR_ENUMS */

    /*
     * TODO:140:o: Define interal representation of wlanLoadBalanceStatusBaseOnUsr enums.
     * (used for value mapping; see notes at top of file)
     */
#define INTERNAL_WLANLOADBALANCESTATUSBASEONUSR_DISABLE  0 
#define INTERNAL_WLANLOADBALANCESTATUSBASEONUSR_ENABLE  1 

/*************************************************************
 * constants for enums for the MIB node
 * wlanBindSecType (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef WLANBINDSECTYPE_ENUMS
#define WLANBINDSECTYPE_ENUMS

#define WLANBINDSECTYPE_OPENSYSTEM  1 
#define WLANBINDSECTYPE_SHAREDKEY  2 
#define WLANBINDSECTYPE_DOT11X  3 
#define WLANBINDSECTYPE_WPA_P  4 
#define WLANBINDSECTYPE_WPA2_P  5 
#define WLANBINDSECTYPE_WPA_E  6 
#define WLANBINDSECTYPE_WPA2_E  7 
#define WLANBINDSECTYPE_MD5  8 
#define WLANBINDSECTYPE_WAPI_PSK  9 
#define WLANBINDSECTYPE_WAPI_AUTH  10 


#endif /* WLANBINDSECTYPE_ENUMS */

    /*
     * TODO:140:o: Define interal representation of wlanBindSecType enums.
     * (used for value mapping; see notes at top of file)
     */
#define INTERNAL_WLANBINDSECTYPE_OPENSYSTEM  1 
#define INTERNAL_WLANBINDSECTYPE_SHAREDKEY  2 
#define INTERNAL_WLANBINDSECTYPE_DOT11X  3 
#define INTERNAL_WLANBINDSECTYPE_WPA_P  4 
#define INTERNAL_WLANBINDSECTYPE_WPA2_P  5 
#define INTERNAL_WLANBINDSECTYPE_WPA_E  6 
#define INTERNAL_WLANBINDSECTYPE_WPA2_E  7 
#define INTERNAL_WLANBINDSECTYPE_MD5  8 
#define INTERNAL_WLANBINDSECTYPE_WAPI_PSK  9 
#define INTERNAL_WLANBINDSECTYPE_WAPI_AUTH  10 

/*************************************************************
 * constants for enums for the MIB node
 * wlanBindEncryType (INTEGER / ASN_INTEGER)
 *
 * since a Textual Convention may be referenced more than once in a
 * MIB, protect againt redefinitions of the enum values.
 */
#ifndef WLANBINDENCRYTYPE_ENUMS
#define WLANBINDENCRYTYPE_ENUMS

#define WLANBINDENCRYTYPE_NONE  1 
#define WLANBINDENCRYTYPE_WEP  2 
#define WLANBINDENCRYTYPE_AES  3 
#define WLANBINDENCRYTYPE_TKIP  4 
#define WLANBINDENCRYTYPE_SMS4  5 


#endif /* WLANBINDENCRYTYPE_ENUMS */

    /*
     * TODO:140:o: Define interal representation of wlanBindEncryType enums.
     * (used for value mapping; see notes at top of file)
     */
#define INTERNAL_WLANBINDENCRYTYPE_NONE  1 
#define INTERNAL_WLANBINDENCRYTYPE_WEP  2 
#define INTERNAL_WLANBINDENCRYTYPE_AES  3 
#define INTERNAL_WLANBINDENCRYTYPE_TKIP  4 
#define INTERNAL_WLANBINDENCRYTYPE_SMS4  5 



#ifdef __cplusplus
}
#endif

#endif /* DOT11CONFIGWLANTABLE_ENUMS_H */
