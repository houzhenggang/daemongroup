/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_DeltaRAListofIdleModeUEs_H_
#define	_DeltaRAListofIdleModeUEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NewRAListofIdleModeUEs;
struct RAListwithNoIdleModeUEsAnyMore;
/* auto changed by perl script */
/*struct ;*/

/* DeltaRAListofIdleModeUEs */
typedef struct DeltaRAListofIdleModeUEs {
/* auto changed by perl script */
	struct NewRAListofIdleModeUEs	*newRAListofIdleModeUEs;	/* OPTIONAL */
/* auto changed by perl script */
	struct RAListwithNoIdleModeUEsAnyMore	*rAListwithNoIdleModeUEsAnyMore;	/* OPTIONAL */
/* auto changed by perl script */
	struct 	 ProtocolExtensionContainer_209P0 *iE_Extensions ;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DeltaRAListofIdleModeUEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DeltaRAListofIdleModeUEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NewRAListofIdleModeUEs.h"
#include "RAListwithNoIdleModeUEsAnyMore.h"
#include "ProtocolExtensionContainer.h"

#endif	/* _DeltaRAListofIdleModeUEs_H_ */
#include <asn_internal.h>
