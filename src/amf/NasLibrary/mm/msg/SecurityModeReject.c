#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "TLVEncoder.h"
#include "TLVDecoder.h"
#include "SecurityModeReject.h"

int decode_security_mode_reject( security_mode_reject_msg *security_mode_reject, uint8_t* buffer, uint32_t len)
{
    uint32_t decoded = 0;
    int decoded_result = 0;

    // Check if we got a NULL pointer and if buffer length is >= minimum length expected for the message.
    CHECK_PDU_POINTER_AND_LENGTH_DECODER (buffer, SECURITY_MODE_REJECT_MINIMUM_LENGTH, len);

    if((decoded_result = decode_extended_protocol_discriminator (&security_mode_reject->extendedprotocoldiscriminator, 0, buffer+decoded,len-decoded))<0)
        return decoded_result;
    else
        decoded+=decoded_result;

    if((decoded_result = decode_security_header_type (&security_mode_reject->securityheadertype, 0, buffer+decoded,len-decoded))<0)
        return decoded_result;
    else
        decoded+=decoded_result;

    if((decoded_result = decode_message_type (&security_mode_reject->messagetype, 0, buffer+decoded,len-decoded))<0)
        return decoded_result;
    else
        decoded+=decoded_result;

    if((decoded_result = decode__5gmm_cause (&security_mode_reject->_5gmmcause, 0, buffer+decoded,len-decoded))<0)
        return decoded_result;
    else
        decoded+=decoded_result;


    return decoded;
}


int encode_security_mode_reject( security_mode_reject_msg *security_mode_reject, uint8_t* buffer, uint32_t len)
{
    uint32_t encoded = 0;
    int encoded_result = 0;
    
    // Check if we got a NULL pointer and if buffer length is >= minimum length expected for the message.
    CHECK_PDU_POINTER_AND_LENGTH_ENCODER (buffer, SECURITY_MODE_REJECT_MINIMUM_LENGTH, len);

    if((encoded_result = encode_extended_protocol_discriminator (security_mode_reject->extendedprotocoldiscriminator, 0, buffer+encoded,len-encoded))<0)
        return encoded_result;
    else
        encoded+=encoded_result;

    if((encoded_result = encode_security_header_type (security_mode_reject->securityheadertype, 0, buffer+encoded,len-encoded))<0)
        return encoded_result;
    else
        encoded+=encoded_result;

    if((encoded_result = encode_message_type (security_mode_reject->messagetype, 0, buffer+encoded,len-encoded))<0)
        return encoded_result;
    else
        encoded+=encoded_result;

    if((encoded_result = encode__5gmm_cause (security_mode_reject->_5gmmcause, 0, buffer+encoded,len-encoded))<0)
        return encoded_result;
    else
        encoded+=encoded_result;


    return encoded;
}
