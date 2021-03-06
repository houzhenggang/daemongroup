/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_CauseTransmissionNetwork_H_
#define	_CauseTransmissionNetwork_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CauseTransmissionNetwork {
	CauseTransmissionNetwork_signalling_transport_resource_failure	= 65,
	CauseTransmissionNetwork_iu_transport_connection_failed_to_establish	= 66
} e_CauseTransmissionNetwork;

/* CauseTransmissionNetwork */
typedef long	 CauseTransmissionNetwork_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CauseTransmissionNetwork;
asn_struct_free_f CauseTransmissionNetwork_free;
asn_struct_print_f CauseTransmissionNetwork_print;
asn_constr_check_f CauseTransmissionNetwork_constraint;
ber_type_decoder_f CauseTransmissionNetwork_decode_ber;
der_type_encoder_f CauseTransmissionNetwork_encode_der;
xer_type_decoder_f CauseTransmissionNetwork_decode_xer;
xer_type_encoder_f CauseTransmissionNetwork_encode_xer;
per_type_decoder_f CauseTransmissionNetwork_decode_uper;
per_type_encoder_f CauseTransmissionNetwork_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CauseTransmissionNetwork_H_ */
#include <asn_internal.h>
