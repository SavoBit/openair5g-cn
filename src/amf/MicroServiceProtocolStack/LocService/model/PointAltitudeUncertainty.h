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
 * PointAltitudeUncertainty.h
 *
 * 
 */

#ifndef PointAltitudeUncertainty_H_
#define PointAltitudeUncertainty_H_


#include "ModelBase.h"

#include "GeographicalCoordinates.h"
#include "UncertaintyEllipse.h"
#include "GADShape.h"
#include "SupportedGADShapes.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  PointAltitudeUncertainty
    : public ModelBase
{
public:
    PointAltitudeUncertainty();
    virtual ~PointAltitudeUncertainty();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// PointAltitudeUncertainty members

    /// <summary>
    /// 
    /// </summary>
    SupportedGADShapes getShape() const;
    void setShape(SupportedGADShapes const& value);
        /// <summary>
    /// 
    /// </summary>
    GeographicalCoordinates getPoint() const;
    void setPoint(GeographicalCoordinates const& value);
        /// <summary>
    /// 
    /// </summary>
    float getAltitude() const;
    void setAltitude(float const value);
        /// <summary>
    /// 
    /// </summary>
    UncertaintyEllipse getUncertaintyEllipse() const;
    void setUncertaintyEllipse(UncertaintyEllipse const& value);
        /// <summary>
    /// 
    /// </summary>
    float getUncertaintyAltitude() const;
    void setUncertaintyAltitude(float const value);
        /// <summary>
    /// 
    /// </summary>
    int32_t getConfidence() const;
    void setConfidence(int32_t const value);
    
protected:
    SupportedGADShapes m_Shape;

    GeographicalCoordinates m_Point;

    float m_Altitude;

    UncertaintyEllipse m_UncertaintyEllipse;

    float m_UncertaintyAltitude;

    int32_t m_Confidence;

};

}
}
}
}

#endif /* PointAltitudeUncertainty_H_ */
