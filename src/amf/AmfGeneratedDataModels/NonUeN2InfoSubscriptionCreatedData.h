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
 * NonUeN2InfoSubscriptionCreatedData.h
 *
 * 
 */

#ifndef NonUeN2InfoSubscriptionCreatedData_H_
#define NonUeN2InfoSubscriptionCreatedData_H_


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  NonUeN2InfoSubscriptionCreatedData
    : public ModelBase
{
public:
    NonUeN2InfoSubscriptionCreatedData();
    virtual ~NonUeN2InfoSubscriptionCreatedData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// NonUeN2InfoSubscriptionCreatedData members

    /// <summary>
    /// 
    /// </summary>
    std::string getN2NotifySubscriptionId() const;
    void setN2NotifySubscriptionId(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getSupportedFeatures() const;
    void setSupportedFeatures(std::string const& value);
    bool supportedFeaturesIsSet() const;
    void unsetSupportedFeatures();

protected:
    std::string m_N2NotifySubscriptionId;

    std::string m_SupportedFeatures;
    bool m_SupportedFeaturesIsSet;
};

}
}
}
}

#endif /* NonUeN2InfoSubscriptionCreatedData_H_ */
