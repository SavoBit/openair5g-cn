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
 * UeContextTransferStatus.h
 *
 * 
 */

#ifndef UeContextTransferStatus_H_
#define UeContextTransferStatus_H_


#include "ModelBase.h"


namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  UeContextTransferStatus
    : public ModelBase
{
public:
    UeContextTransferStatus();
    virtual ~UeContextTransferStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// UeContextTransferStatus members


protected:
};

}
}
}
}

#endif /* UeContextTransferStatus_H_ */
