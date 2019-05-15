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
 * ProvideLocationApi.h
 *
 * 
 */

#ifndef ProvideLocationApi_H_
#define ProvideLocationApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "ProblemDetails.h"
#include "ProvideUELocation.h"
#include "RequestUELocation.h"
#include <string>

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  ProvideLocationApi {
public:
    ProvideLocationApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~ProvideLocationApi() {}
    void init();

    const std::string base = "/namf-loc/v1";

private:
    void setupRoutes();

    void provide_location_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void provide_location_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Namf_Location ProvideLocation service Operation
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="ueContextId">UE Context Identifier</param>
    /// <param name="requestUELocation"></param>
    virtual void provide_location(const std::string &ueContextId, const RequestUELocation &requestUELocation, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* ProvideLocationApi_H_ */

