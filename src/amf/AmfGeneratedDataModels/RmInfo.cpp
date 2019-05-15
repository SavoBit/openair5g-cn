/**
* Namf_EventExposure Service
* AMF Event Exposure Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "RmInfo.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RmInfo::RmInfo()
{
    
}

RmInfo::~RmInfo()
{
}

void RmInfo::validate()
{
    // TODO: implement validation
}

nlohmann::json RmInfo::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["rmState"] = ModelBase::toJson(m_RmState);
    val["accessType"] = ModelBase::toJson(m_AccessType);
    

    return val;
}

void RmInfo::fromJson(const nlohmann::json& val)
{
    
}


RmState RmInfo::getRmState() const
{
    return m_RmState;
}
void RmInfo::setRmState(RmState const& value)
{
    m_RmState = value;
    
}
AccessType RmInfo::getAccessType() const
{
    return m_AccessType;
}
void RmInfo::setAccessType(AccessType const& value)
{
    m_AccessType = value;
    
}

}
}
}
}

