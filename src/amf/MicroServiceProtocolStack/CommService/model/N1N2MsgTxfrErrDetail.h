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
 * N1N2MsgTxfrErrDetail.h
 *
 * 
 */

#ifndef N1N2MsgTxfrErrDetail_H_
#define N1N2MsgTxfrErrDetail_H_


#include "ModelBase.h"

#include "Arp.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  N1N2MsgTxfrErrDetail
    : public ModelBase
{
public:
    N1N2MsgTxfrErrDetail();
    virtual ~N1N2MsgTxfrErrDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// N1N2MsgTxfrErrDetail members

    /// <summary>
    /// 
    /// </summary>
    int32_t getRetryAfter() const;
    void setRetryAfter(int32_t const value);
    bool retryAfterIsSet() const;
    void unsetRetryAfter();
    /// <summary>
    /// 
    /// </summary>
    Arp getHighestPrioArp() const;
    void setHighestPrioArp(Arp const& value);
    bool highestPrioArpIsSet() const;
    void unsetHighestPrioArp();

protected:
    int32_t m_RetryAfter;
    bool m_RetryAfterIsSet;
    Arp m_HighestPrioArp;
    bool m_HighestPrioArpIsSet;
};

}
}
}
}

#endif /* N1N2MsgTxfrErrDetail_H_ */
