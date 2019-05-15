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
/*
 * AmfEventSubscription.h
 *
 * 
 */

#ifndef AmfEventSubscription_H_
#define AmfEventSubscription_H_


#include "ModelBase.h"

#include "AmfEvent.h"
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  AmfEventSubscription
    : public ModelBase
{
public:
    AmfEventSubscription();
    virtual ~AmfEventSubscription();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// AmfEventSubscription members

    /// <summary>
    /// 
    /// </summary>
    std::vector<AmfEvent>& getEvents();
        /// <summary>
    /// 
    /// </summary>
    std::string getEventNotifyUri() const;
    void setEventNotifyUri(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getNotifyCorrelationId() const;
    void setNotifyCorrelationId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getNfId() const;
    void setNfId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getSubsChangeNotifyUri() const;
    void setSubsChangeNotifyUri(std::string const& value);
    bool subsChangeNotifyUriIsSet() const;
    void unsetSubsChangeNotifyUri();
    /// <summary>
    /// 
    /// </summary>
    std::string getSupi() const;
    void setSupi(std::string const& value);
    bool supiIsSet() const;
    void unsetSupi();
    /// <summary>
    /// 
    /// </summary>
    std::string getGroupId() const;
    void setGroupId(std::string const& value);
    bool groupIdIsSet() const;
    void unsetGroupId();
    /// <summary>
    /// 
    /// </summary>
    std::string getGpsi() const;
    void setGpsi(std::string const& value);
    bool gpsiIsSet() const;
    void unsetGpsi();
    /// <summary>
    /// 
    /// </summary>
    std::string getPei() const;
    void setPei(std::string const& value);
    bool peiIsSet() const;
    void unsetPei();
    /// <summary>
    /// 
    /// </summary>
    bool isAnyUE() const;
    void setAnyUE(bool const value);
    bool anyUEIsSet() const;
    void unsetAnyUE();

protected:
    std::vector<AmfEvent> m_Events;

    std::string m_EventNotifyUri;

    std::string m_NotifyCorrelationId;

    std::string m_NfId;

    std::string m_SubsChangeNotifyUri;
    bool m_SubsChangeNotifyUriIsSet;
    std::string m_Supi;
    bool m_SupiIsSet;
    std::string m_GroupId;
    bool m_GroupIdIsSet;
    std::string m_Gpsi;
    bool m_GpsiIsSet;
    std::string m_Pei;
    bool m_PeiIsSet;
    bool m_AnyUE;
    bool m_AnyUEIsSet;
};

}
}
}
}

#endif /* AmfEventSubscription_H_ */
