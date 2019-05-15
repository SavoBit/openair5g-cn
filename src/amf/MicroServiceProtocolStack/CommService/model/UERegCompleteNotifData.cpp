/**
* AMF Communicaiton Service
* AMF Communication Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "UERegCompleteNotifData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UERegCompleteNotifData::UERegCompleteNotifData()
{
    
}

UERegCompleteNotifData::~UERegCompleteNotifData()
{
}

void UERegCompleteNotifData::validate()
{
    // TODO: implement validation
}

nlohmann::json UERegCompleteNotifData::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["transferStatus"] = ModelBase::toJson(m_TransferStatus);
    

    return val;
}

void UERegCompleteNotifData::fromJson(const nlohmann::json& val)
{
    
}


UeContextTransferStatus UERegCompleteNotifData::getTransferStatus() const
{
    return m_TransferStatus;
}
void UERegCompleteNotifData::setTransferStatus(UeContextTransferStatus const& value)
{
    m_TransferStatus = value;
    
}

}
}
}
}

