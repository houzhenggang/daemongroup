/*
 * Generated by asn1c-0.9.23 (http://lionet.info/asn1c)
 * From ASN.1 module "RANAP-IEs"
 * 	found in "RANAP-IEs.asn"
 */

#ifndef	_CellType_H_
#define	_CellType_H_


#include <asn_application.h>

/* Including external dependencies */
#include <ENUMERATED.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellType {
	CellType_macro	= 0,
	CellType_micro	= 1,
	CellType_pico	= 2,
	CellType_femto	= 3
	/*
	 * Enumeration is extensible
	 */
} e_CellType;

/* CellType */
typedef ENUMERATED_t	 CellType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellType;
asn_struct_free_f CellType_free;
asn_struct_print_f CellType_print;
asn_constr_check_f CellType_constraint;
ber_type_decoder_f CellType_decode_ber;
der_type_encoder_f CellType_encode_der;
xer_type_decoder_f CellType_decode_xer;
xer_type_encoder_f CellType_encode_xer;
per_type_decoder_f CellType_decode_uper;
per_type_encoder_f CellType_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _CellType_H_ */
#include <asn_internal.h>
