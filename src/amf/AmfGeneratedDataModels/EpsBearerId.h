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
 * EpsBearerId.h
 *
 * 
 */

#ifndef EpsBearerId_H_
#define EpsBearerId_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  EpsBearerId
    : public ModelBase
{
public:
    EpsBearerId();
    virtual ~EpsBearerId();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// EpsBearerId members


protected:
};

}
}
}
}

#endif /* EpsBearerId_H_ */
