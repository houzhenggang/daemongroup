/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_SourceRNC_ID_H_
#define	_SourceRNC_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PLMNidentity.h"
#include "RNC-ID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
/* auto changed by perl script */
/*struct ;*/

/* SourceRNC-ID */
typedef struct SourceRNC_ID {
	PLMNidentity_t	 pLMNidentity;
	RNC_ID_t	 rNC_ID;
/* auto changed by perl script */
	struct 	 ProtocolExtensionContainer_209P0 *iE_Extensions ;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SourceRNC_ID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SourceRNC_ID;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "ProtocolExtensionContainer.h"

#endif	/* _SourceRNC_ID_H_ */
#include <asn_internal.h>
