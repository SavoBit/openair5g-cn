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


#include "UeContextTransferReqData.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

UeContextTransferReqData::UeContextTransferReqData()
{
    m_RegRequestIsSet = false;
    m_SupportedFeatures = "";
    m_SupportedFeaturesIsSet = false;
    
}

UeContextTransferReqData::~UeContextTransferReqData()
{
}

void UeContextTransferReqData::validate()
{
    // TODO: implement validation
}

nlohmann::json UeContextTransferReqData::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["reason"] = ModelBase::toJson(m_Reason);
    if(m_RegRequestIsSet)
    {
        val["regRequest"] = ModelBase::toJson(m_RegRequest);
    }
    if(m_SupportedFeaturesIsSet)
    {
        val["supportedFeatures"] = ModelBase::toJson(m_SupportedFeatures);
    }
    

    return val;
}

void UeContextTransferReqData::fromJson(const nlohmann::json& val)
{
    if(val.find("regRequest") != val.end())
    {
        if(!val["regRequest"].is_null())
        {
            N1MessageContainer newItem;
            newItem.fromJson(val["regRequest"]);
            setRegRequest( newItem );
        }
        
    }
    if(val.find("supportedFeatures") != val.end())
    {
        setSupportedFeatures(val.at("supportedFeatures"));
    }
    
}


TransferReason UeContextTransferReqData::getReason() const
{
    return m_Reason;
}
void UeContextTransferReqData::setReason(TransferReason const& value)
{
    m_Reason = value;
    
}
N1MessageContainer UeContextTransferReqData::getRegRequest() const
{
    return m_RegRequest;
}
void UeContextTransferReqData::setRegRequest(N1MessageContainer const& value)
{
    m_RegRequest = value;
    m_RegRequestIsSet = true;
}
bool UeContextTransferReqData::regRequestIsSet() const
{
    return m_RegRequestIsSet;
}
void UeContextTransferReqData::unsetRegRequest()
{
    m_RegRequestIsSet = false;
}
std::string UeContextTransferReqData::getSupportedFeatures() const
{
    return m_SupportedFeatures;
}
void UeContextTransferReqData::setSupportedFeatures(std::string const& value)
{
    m_SupportedFeatures = value;
    m_SupportedFeaturesIsSet = true;
}
bool UeContextTransferReqData::supportedFeaturesIsSet() const
{
    return m_SupportedFeaturesIsSet;
}
void UeContextTransferReqData::unsetSupportedFeatures()
{
    m_SupportedFeaturesIsSet = false;
}

}
}
}
}

