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
 * PositioningMode.h
 *
 * 
 */

#ifndef PositioningMode_H_
#define PositioningMode_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PositioningMode
    : public ModelBase
{
public:
    PositioningMode();
    virtual ~PositioningMode();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PositioningMode members


protected:
};

}
}
}
}

#endif /* PositioningMode_H_ */
