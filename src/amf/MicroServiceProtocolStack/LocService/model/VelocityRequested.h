/**
* AMF Location Service
* AMF Location Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * VelocityRequested.h
 *
 * 
 */

#ifndef VelocityRequested_H_
#define VelocityRequested_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  VelocityRequested
    : public ModelBase
{
public:
    VelocityRequested();
    virtual ~VelocityRequested();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// VelocityRequested members


protected:
};

}
}
}
}

#endif /* VelocityRequested_H_ */
