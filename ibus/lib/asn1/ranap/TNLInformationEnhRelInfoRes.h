/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-PDU-Contents"
 * 	found in "RANAP-PDU-Contents.asn"
 */

#ifndef	_TNLInformationEnhRelInfoRes_H_
#define	_TNLInformationEnhRelInfoRes_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TransportLayerAddress.h"
#include "IuTransportAssociation.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
/* auto changed by perl script */
/*struct ;*/

/* TNLInformationEnhRelInfoRes */
typedef struct TNLInformationEnhRelInfoRes {
	TransportLayerAddress_t	 dl_forwardingTransportLayerAddress;
	IuTransportAssociation_t	 dl_forwardingTransportAssociation;
/* auto changed by perl script */
	struct 	 ProtocolExtensionContainer_209P0 *iE_Extensions ;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TNLInformationEnhRelInfoRes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TNLInformationEnhRelInfoRes;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _TNLInformationEnhRelInfoRes_H_ */
#include <asn_internal.h>
