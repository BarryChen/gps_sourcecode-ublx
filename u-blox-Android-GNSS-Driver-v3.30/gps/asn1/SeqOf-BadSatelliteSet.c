/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 * 	found in "rrlp-components.asn"
 * 	`asn1c -gen-PER -fnative-types`
 */

#include "SeqOf-BadSatelliteSet.h"

static asn_per_constraints_t asn_PER_type_SeqOf_BadSatelliteSet_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_SeqOf_BadSatelliteSet_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_SatelliteID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_SeqOf_BadSatelliteSet_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_SeqOf_BadSatelliteSet_specs_1 = {
	sizeof(struct SeqOf_BadSatelliteSet),
	offsetof(struct SeqOf_BadSatelliteSet, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_SeqOf_BadSatelliteSet = {
	"SeqOf-BadSatelliteSet",
	"SeqOf-BadSatelliteSet",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SeqOf_BadSatelliteSet_tags_1,
	sizeof(asn_DEF_SeqOf_BadSatelliteSet_tags_1)
		/sizeof(asn_DEF_SeqOf_BadSatelliteSet_tags_1[0]), /* 1 */
	asn_DEF_SeqOf_BadSatelliteSet_tags_1,	/* Same as above */
	sizeof(asn_DEF_SeqOf_BadSatelliteSet_tags_1)
		/sizeof(asn_DEF_SeqOf_BadSatelliteSet_tags_1[0]), /* 1 */
	&asn_PER_type_SeqOf_BadSatelliteSet_constr_1,
	asn_MBR_SeqOf_BadSatelliteSet_1,
	1,	/* Single element */
	&asn_SPC_SeqOf_BadSatelliteSet_specs_1	/* Additional specs */
};

