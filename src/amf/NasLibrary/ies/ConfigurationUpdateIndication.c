#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#include "TLVEncoder.h"
#include "TLVDecoder.h"
#include "ConfigurationUpdateIndication.h"

int encode_configuration_update_indication ( ConfigurationUpdateIndication configurationupdateindication, uint8_t iei, uint8_t * buffer, uint32_t len  ) 
{
    uint8_t *lenPtr;
    uint32_t encoded = 0;
    int encode_result;
    CHECK_PDU_POINTER_AND_LENGTH_ENCODER (buffer,CONFIGURATION_UPDATE_INDICATION_MINIMUM_LENGTH , len);
    






    if ((encode_result = encode_bstring (configurationupdateindication, buffer + encoded, len - encoded)) < 0)//加密,实体,首地址,长度
        return encode_result;
    else
        encoded += encode_result;


    return encoded;
}

int decode_configuration_update_indication ( ConfigurationUpdateIndication * configurationupdateindication, uint8_t iei, uint8_t * buffer, uint32_t len  ) 
{
	int decoded=0;
	uint8_t ielen=0;
	int decode_result;





    if((decode_result = decode_bstring (configurationupdateindication, ielen, buffer + decoded, len - decoded)) < 0)
        return decode_result;
    else
        decoded += decode_result;
            return decoded;
}

