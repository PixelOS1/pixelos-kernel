/*
 * Automatically generated by asn1_compiler.  Do not edit
 *
 * ASN.1 parser for mscode
 */
#include <linux/asn1_ber_bytecode.h>
#include "mscode.asn1.h"

enum mscode_actions {
	ACT_mscode_note_content_type = 0,
	ACT_mscode_note_digest = 1,
	ACT_mscode_note_digest_algo = 2,
	NR__mscode_actions = 3
};

static const asn1_action_t mscode_action_table[NR__mscode_actions] = {
	[   0] = mscode_note_content_type,
	[   1] = mscode_note_digest,
	[   2] = mscode_note_digest_algo,
};

static const unsigned char mscode_machine[] = {
	// MSCode
	[   0] = ASN1_OP_MATCH,
	[   1] = _tag(UNIV, CONS, SEQ),
	[   2] =  ASN1_OP_MATCH,		// type
	[   3] =  _tag(UNIV, CONS, SEQ),
	// ContentType
	[   4] =   ASN1_OP_MATCH_ACT,
	[   5] =   _tag(UNIV, PRIM, OID),
	[   6] =   _action(ACT_mscode_note_content_type),
	[   7] =   ASN1_OP_MATCH_ANY,		// parameters
	[   8] =  ASN1_OP_END_SEQ,
	[   9] =  ASN1_OP_MATCH,		// content
	[  10] =  _tag(UNIV, CONS, SEQ),
	// DigestAlgorithmIdentifier
	[  11] =   ASN1_OP_MATCH,
	[  12] =   _tag(UNIV, CONS, SEQ),
	[  13] =    ASN1_OP_MATCH_ACT,		// algorithm
	[  14] =    _tag(UNIV, PRIM, OID),
	[  15] =    _action(ACT_mscode_note_digest_algo),
	[  16] =    ASN1_OP_MATCH_ANY_OR_SKIP,		// parameters
	[  17] =   ASN1_OP_END_SEQ,
	[  18] =   ASN1_OP_MATCH_ACT,		// digest
	[  19] =   _tag(UNIV, PRIM, OTS),
	[  20] =   _action(ACT_mscode_note_digest),
	[  21] =  ASN1_OP_END_SEQ,
	[  22] = ASN1_OP_END_SEQ,
	[  23] = ASN1_OP_COMPLETE,
};

const struct asn1_decoder mscode_decoder = {
	.machine = mscode_machine,
	.machlen = sizeof(mscode_machine),
	.actions = mscode_action_table,
};
