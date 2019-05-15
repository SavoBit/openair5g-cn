/**
* AMF MT Service
* AMF Mobile Termination Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "InvalidParam.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

InvalidParam::InvalidParam()
{
    m_Param = "";
    m_Reason = "";
    m_ReasonIsSet = false;
    
}

InvalidParam::~InvalidParam()
{
}

void InvalidParam::validate()
{
    // TODO: implement validation
}

nlohmann::json InvalidParam::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["param"] = ModelBase::toJson(m_Param);
    if(m_ReasonIsSet)
    {
        val["reason"] = ModelBase::toJson(m_Reason);
    }
    

    return val;
}

void InvalidParam::fromJson(const nlohmann::json& val)
{
    setParam(val.at("param"));
    if(val.find("reason") != val.end())
    {
        setReason(val.at("reason"));
    }
    
}


std::string InvalidParam::getParam() const
{
    return m_Param;
}
void InvalidParam::setParam(std::string const& value)
{
    m_Param = value;
    
}
std::string InvalidParam::getReason() const
{
    return m_Reason;
}
void InvalidParam::setReason(std::string const& value)
{
    m_Reason = value;
    m_ReasonIsSet = true;
}
bool InvalidParam::reasonIsSet() const
{
    return m_ReasonIsSet;
}
void InvalidParam::unsetReason()
{
    m_ReasonIsSet = false;
}

}
}
}
}

