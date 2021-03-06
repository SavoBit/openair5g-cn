#include <stdint.h>

#include "ExtendedProtocolDiscriminator.h"
#include "SecurityHeaderType.h"
#include "MessageType.h"
#include "_5GSIdentityType.h"


/* Minimum length macro. Formed by minimum length of each mandatory field */
#define IDENTITY_REQUEST_MINIMUM_LENGTH ( \
		EXTENDED_PROTOCOL_DISCRIMINATOR_MINIMUM_LENGTH + \
		SECURITY_HEADER_TYPE_MINIMUM_LENGTH + \
		MESSAGE_TYPE_MINIMUM_LENGTH + \
		_5GS_IDENTITY_TYPE_MINIMUM_LENGTH + \
0)

/* Maximum length macro. Formed by maximum length of each field */
#define IDENTITY_REQUEST_MAXIMUM_LENGTH ( \
		EXTENDED_PROTOCOL_DISCRIMINATOR_MAXIMUM_LENGTH + \
		SECURITY_HEADER_TYPE_MAXIMUM_LENGTH + \
		MESSAGE_TYPE_MAXIMUM_LENGTH + \
		_5GS_IDENTITY_TYPE_MAXIMUM_LENGTH + \
0)

typedef struct identity_request_msg_tag{
	ExtendedProtocolDiscriminator extendedprotocoldiscriminator;
	SecurityHeaderType securityheadertype;
	MessageType messagetype;
	_5GSIdentityType _5gsidentitytype;
}identity_request_msg;


int decode_identity_request(identity_request_msg *identityrequest, uint8_t *buffer, uint32_t len);
int encode_identity_request(identity_request_msg *identityrequest, uint8_t *buffer, uint32_t len);
