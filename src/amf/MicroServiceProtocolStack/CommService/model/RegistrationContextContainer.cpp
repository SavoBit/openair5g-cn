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


#include "RegistrationContextContainer.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

RegistrationContextContainer::RegistrationContextContainer()
{
    m_LocalTimeZone = "";
    m_LocalTimeZoneIsSet = false;
    m_AnN2IPv4Address = "";
    m_AnN2IPv4AddressIsSet = false;
    m_AnN2IPv6AddrIsSet = false;
    m_AllowedNssaiIsSet = false;
    
}

RegistrationContextContainer::~RegistrationContextContainer()
{
}

void RegistrationContextContainer::validate()
{
    // TODO: implement validation
}

nlohmann::json RegistrationContextContainer::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["ueContext"] = ModelBase::toJson(m_UeContext);
    if(m_LocalTimeZoneIsSet)
    {
        val["localTimeZone"] = ModelBase::toJson(m_LocalTimeZone);
    }
    val["anType"] = ModelBase::toJson(m_AnType);
    if(m_AnN2IPv4AddressIsSet)
    {
        val["anN2IPv4Address"] = ModelBase::toJson(m_AnN2IPv4Address);
    }
    if(m_AnN2IPv6AddrIsSet)
    {
        val["anN2IPv6Addr"] = ModelBase::toJson(m_AnN2IPv6Addr);
    }
    if(m_AllowedNssaiIsSet)
    {
        val["allowedNssai"] = ModelBase::toJson(m_AllowedNssai);
    }
    

    return val;
}

void RegistrationContextContainer::fromJson(const nlohmann::json& val)
{
    if(val.find("localTimeZone") != val.end())
    {
        setLocalTimeZone(val.at("localTimeZone"));
    }
    if(val.find("anN2IPv4Address") != val.end())
    {
        setAnN2IPv4Address(val.at("anN2IPv4Address"));
    }
    if(val.find("anN2IPv6Addr") != val.end())
    {
        if(!val["anN2IPv6Addr"].is_null())
        {
            std::string newItem;
            //newItem.fromJson(val["anN2IPv6Addr"]);
            setAnN2IPv6Addr( newItem );
        }
        
    }
    if(val.find("allowedNssai") != val.end())
    {
        if(!val["allowedNssai"].is_null())
        {
            AllowedNssai newItem;
            newItem.fromJson(val["allowedNssai"]);
            setAllowedNssai( newItem );
        }
        
    }
    
}


UeContext RegistrationContextContainer::getUeContext() const
{
    return m_UeContext;
}
void RegistrationContextContainer::setUeContext(UeContext const& value)
{
    m_UeContext = value;
    
}
std::string RegistrationContextContainer::getLocalTimeZone() const
{
    return m_LocalTimeZone;
}
void RegistrationContextContainer::setLocalTimeZone(std::string const& value)
{
    m_LocalTimeZone = value;
    m_LocalTimeZoneIsSet = true;
}
bool RegistrationContextContainer::localTimeZoneIsSet() const
{
    return m_LocalTimeZoneIsSet;
}
void RegistrationContextContainer::unsetLocalTimeZone()
{
    m_LocalTimeZoneIsSet = false;
}
AccessType RegistrationContextContainer::getAnType() const
{
    return m_AnType;
}
void RegistrationContextContainer::setAnType(AccessType const& value)
{
    m_AnType = value;
    
}
std::string RegistrationContextContainer::getAnN2IPv4Address() const
{
    return m_AnN2IPv4Address;
}
void RegistrationContextContainer::setAnN2IPv4Address(std::string const& value)
{
    m_AnN2IPv4Address = value;
    m_AnN2IPv4AddressIsSet = true;
}
bool RegistrationContextContainer::anN2IPv4AddressIsSet() const
{
    return m_AnN2IPv4AddressIsSet;
}
void RegistrationContextContainer::unsetAnN2IPv4Address()
{
    m_AnN2IPv4AddressIsSet = false;
}
std::string RegistrationContextContainer::getAnN2IPv6Addr() const
{
    return m_AnN2IPv6Addr;
}
void RegistrationContextContainer::setAnN2IPv6Addr(std::string const& value)
{
    m_AnN2IPv6Addr = value;
    m_AnN2IPv6AddrIsSet = true;
}
bool RegistrationContextContainer::anN2IPv6AddrIsSet() const
{
    return m_AnN2IPv6AddrIsSet;
}
void RegistrationContextContainer::unsetAnN2IPv6Addr()
{
    m_AnN2IPv6AddrIsSet = false;
}
AllowedNssai RegistrationContextContainer::getAllowedNssai() const
{
    return m_AllowedNssai;
}
void RegistrationContextContainer::setAllowedNssai(AllowedNssai const& value)
{
    m_AllowedNssai = value;
    m_AllowedNssaiIsSet = true;
}
bool RegistrationContextContainer::allowedNssaiIsSet() const
{
    return m_AllowedNssaiIsSet;
}
void RegistrationContextContainer::unsetAllowedNssai()
{
    m_AllowedNssaiIsSet = false;
}

}
}
}
}

