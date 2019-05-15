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
 * UERegCompleteNotifData.h
 *
 * 
 */

#ifndef UERegCompleteNotifData_H_
#define UERegCompleteNotifData_H_


#include "ModelBase.h"

#include "UeContextTransferStatus.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  UERegCompleteNotifData
    : public ModelBase
{
public:
    UERegCompleteNotifData();
    virtual ~UERegCompleteNotifData();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// UERegCompleteNotifData members

    /// <summary>
    /// 
    /// </summary>
    UeContextTransferStatus getTransferStatus() const;
    void setTransferStatus(UeContextTransferStatus const& value);
    
protected:
    UeContextTransferStatus m_TransferStatus;

};

}
}
}
}

#endif /* UERegCompleteNotifData_H_ */
