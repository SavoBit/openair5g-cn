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
 * NrppaInformation.h
 *
 * 
 */

#ifndef NrppaInformation_H_
#define NrppaInformation_H_


#include "ModelBase.h"

#include "N2InfoContent.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  NrppaInformation
    : public ModelBase
{
public:
    NrppaInformation();
    virtual ~NrppaInformation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// NrppaInformation members

    /// <summary>
    /// 
    /// </summary>
    std::string getLmfId() const;
    void setLmfId(std::string const& value);
    bool lmfIdIsSet() const;
    void unsetLmfId();
    /// <summary>
    /// 
    /// </summary>
    N2InfoContent getNrppaPdu() const;
    void setNrppaPdu(N2InfoContent const& value);
    
protected:
    std::string m_LmfId;
    bool m_LmfIdIsSet;
    N2InfoContent m_NrppaPdu;

};

}
}
}
}

#endif /* NrppaInformation_H_ */
