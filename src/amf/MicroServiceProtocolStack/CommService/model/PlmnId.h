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
 * PlmnId.h
 *
 * 
 */

#ifndef PlmnId_H_
#define PlmnId_H_


#include "ModelBase.h"

#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PlmnId
    : public ModelBase
{
public:
    PlmnId();
    virtual ~PlmnId();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PlmnId members

    /// <summary>
    /// 
    /// </summary>
    std::string getMcc() const;
    void setMcc(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getMnc() const;
    void setMnc(std::string const& value);
    
protected:
    std::string m_Mcc;

    std::string m_Mnc;

};

}
}
}
}

#endif /* PlmnId_H_ */