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
#include "ModelBase.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

ModelBase::ModelBase()
{
}
ModelBase::~ModelBase()
{
}

std::string ModelBase::toJson( std::string const& value )
{
    return value;
}

std::string ModelBase::toJson( std::time_t const& value )
{
    char buf[sizeof "2011-10-08T07:07:09Z"];
    strftime(buf, sizeof buf, "%FT%TZ", gmtime(&value));
    return buf;
}

int32_t ModelBase::toJson( int32_t const value )
{
    return value;
}

int64_t ModelBase::toJson( int64_t const value )
{
    return value;
}

double ModelBase::toJson( double const value )
{
    return value;
}

bool ModelBase::toJson( bool const value )
{
    return value;
}

nlohmann::json ModelBase::toJson(ModelBase const& content )
{
    return content.toJson();
}

}
}
}
}
