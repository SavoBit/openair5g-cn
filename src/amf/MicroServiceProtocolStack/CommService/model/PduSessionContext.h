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
 * PduSessionContext.h
 *
 * 
 */

#ifndef PduSessionContext_H_
#define PduSessionContext_H_


#include "ModelBase.h"

#include "EbiArpMapping.h"
#include <string>
#include "Snssai_2.h"
#include <vector>
#include "AccessType.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PduSessionContext
    : public ModelBase
{
public:
    PduSessionContext();
    virtual ~PduSessionContext();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PduSessionContext members

    /// <summary>
    /// 
    /// </summary>
    int32_t getPduSessionId() const;
    void setPduSessionId(int32_t const value);
        /// <summary>
    /// 
    /// </summary>
    std::string getSmContextRef() const;
    void setSmContextRef(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    Snssai_2 getSNssai() const;
    void setSNssai(Snssai_2 const& value);
        /// <summary>
    /// 
    /// </summary>
    std::string getDnn() const;
    void setDnn(std::string const& value);
        /// <summary>
    /// 
    /// </summary>
    AccessType getAccessType() const;
    void setAccessType(AccessType const& value);
        /// <summary>
    /// 
    /// </summary>
    std::vector<EbiArpMapping>& getAllocatedEbiList();
        /// <summary>
    /// 
    /// </summary>
    std::string getHsmfId() const;
    void setHsmfId(std::string const& value);
    bool hsmfIdIsSet() const;
    void unsetHsmfId();
    /// <summary>
    /// 
    /// </summary>
    std::string getVsmfId() const;
    void setVsmfId(std::string const& value);
    bool vsmfIdIsSet() const;
    void unsetVsmfId();
    /// <summary>
    /// 
    /// </summary>
    std::string getNsInstance() const;
    void setNsInstance(std::string const& value);
    bool nsInstanceIsSet() const;
    void unsetNsInstance();

protected:
    int32_t m_PduSessionId;

    std::string m_SmContextRef;

    Snssai_2 m_SNssai;

    std::string m_Dnn;

    AccessType m_AccessType;

    std::vector<EbiArpMapping> m_AllocatedEbiList;

    std::string m_HsmfId;
    bool m_HsmfIdIsSet;
    std::string m_VsmfId;
    bool m_VsmfIdIsSet;
    std::string m_NsInstance;
    bool m_NsInstanceIsSet;
};

}
}
}
}

#endif /* PduSessionContext_H_ */
