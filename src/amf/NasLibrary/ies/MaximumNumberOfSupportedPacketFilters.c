#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>

#include "TLVEncoder.h"
#include "TLVDecoder.h"
#include "MaximumNumberOfSupportedPacketFilters.h"

int encode_maximum_number_of_supported_packet_filters ( MaximumNumberOfSupportedPacketFilters maximumnumberofsupportedpacketfilters, uint8_t iei, uint8_t * buffer, uint32_t len  ) 
{
    uint8_t *lenPtr;
    uint32_t encoded = 0;
    int encode_result;
    CHECK_PDU_POINTER_AND_LENGTH_ENCODER (buffer,MAXIMUM_NUMBER_OF_SUPPORTED_PACKET_FILTERS_MINIMUM_LENGTH , len);
    

       if( iei >0  )
       {
           *buffer=iei;
               encoded++;
       }





    if ((encode_result = encode_bstring (maximumnumberofsupportedpacketfilters, buffer + encoded, len - encoded)) < 0)//加密,实体,首地址,长度
        return encode_result;
    else
        encoded += encode_result;


    return encoded;
}

int decode_maximum_number_of_supported_packet_filters ( MaximumNumberOfSupportedPacketFilters * maximumnumberofsupportedpacketfilters, uint8_t iei, uint8_t * buffer, uint32_t len  ) 
{
	int decoded=0;
	uint8_t ielen=0;
	int decode_result;

    if (iei > 0)
    {
        CHECK_IEI_DECODER (iei, *buffer);
        decoded++;
    }




    if((decode_result = decode_bstring (maximumnumberofsupportedpacketfilters, ielen, buffer + decoded, len - decoded)) < 0)
        return decode_result;
    else
        decoded += decode_result;
            return decoded;
}

