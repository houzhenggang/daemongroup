/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_ForwardingIndication_H_
#define	_ForwardingIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ForwardingIndication {
	ForwardingIndication_forwarding_admitted	= 0
	/*
	 * Enumeration is extensible
	 */
} e_ForwardingIndication;

/* ForwardingIndication */
typedef ENUMERATED_t	 ForwardingIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ForwardingIndication;
asn_struct_free_f ForwardingIndication_free;
asn_struct_print_f ForwardingIndication_print;
asn_constr_check_f ForwardingIndication_constraint;
ber_type_decoder_f ForwardingIndication_decode_ber;
der_type_encoder_f ForwardingIndication_encode_der;
xer_type_decoder_f ForwardingIndication_decode_xer;
xer_type_encoder_f ForwardingIndication_encode_xer;
per_type_decoder_f ForwardingIndication_decode_uper;
per_type_encoder_f ForwardingIndication_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ForwardingIndication_H_ */
#include <asn_internal.h>
