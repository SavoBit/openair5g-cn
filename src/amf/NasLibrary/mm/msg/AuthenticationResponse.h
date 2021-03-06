#include <stdint.h>

#include "ExtendedProtocolDiscriminator.h"
#include "SecurityHeaderType.h"
#include "MessageType.h"
#include "NASKeySetIdentifier.h"
#include "ABBA.h"
#include "AuthenticationParameterRAND.h"
#include "AuthenticationParameterAUTN.h"
#include "AuthenticationResponseParameter.h"
#include "EAPMessage.h"


/* Minimum length macro. Formed by minimum length of each mandatory field */
#define AUTHENTICATION_RESPONSE_MINIMUM_LENGTH ( \
		EXTENDED_PROTOCOL_DISCRIMINATOR_MINIMUM_LENGTH + \
		SECURITY_HEADER_TYPE_MINIMUM_LENGTH + \
		MESSAGE_TYPE_MINIMUM_LENGTH + \
		NAS_KEY_SET_IDENTIFIER_MINIMUM_LENGTH + \
		ABBA_MINIMUM_LENGTH + \
		AUTHENTICATION_PARAMETER_RAND_MINIMUM_LENGTH + \
		AUTHENTICATION_PARAMETER_AUTN_MINIMUM_LENGTH + \
		AUTHENTICATION_RESPONSE_PARAMETER_MINIMUM_LENGTH + \
		EAP_MESSAGE_MINIMUM_LENGTH + \
0)

/* Maximum length macro. Formed by maximum length of each field */
#define AUTHENTICATION_RESPONSE_MAXIMUM_LENGTH ( \
		EXTENDED_PROTOCOL_DISCRIMINATOR_MAXIMUM_LENGTH + \
		SECURITY_HEADER_TYPE_MAXIMUM_LENGTH + \
		MESSAGE_TYPE_MAXIMUM_LENGTH + \
		NAS_KEY_SET_IDENTIFIER_MAXIMUM_LENGTH + \
		ABBA_MAXIMUM_LENGTH + \
		AUTHENTICATION_PARAMETER_RAND_MAXIMUM_LENGTH + \
		AUTHENTICATION_PARAMETER_AUTN_MAXIMUM_LENGTH + \
		AUTHENTICATION_RESPONSE_PARAMETER_MAXIMUM_LENGTH + \
		EAP_MESSAGE_MAXIMUM_LENGTH + \
0)

typedef struct authentication_response_msg_tag{
	ExtendedProtocolDiscriminator extendedprotocoldiscriminator;
	SecurityHeaderType securityheadertype;
	MessageType messagetype;
	NASKeySetIdentifier naskeysetidentifier;
	ABBA abba;
	AuthenticationParameterRAND authenticationparameterrand;
	AuthenticationParameterAUTN authenticationparameterautn;
	AuthenticationResponseParameter authenticationresponseparameter;
	EAPMessage eapmessage;
}authentication_response_msg;


int decode_authentication_response(authentication_response_msg *authenticationresponse, uint8_t *buffer, uint32_t len);
int encode_authentication_response(authentication_response_msg *authenticationresponse, uint8_t *buffer, uint32_t len);
