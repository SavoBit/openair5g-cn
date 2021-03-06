/**
* Namf_EventExposure Service
* AMF Event Exposure Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * CreateSubscriptionApi.h
 *
 * 
 */

#ifndef CreateSubscriptionApi_H_
#define CreateSubscriptionApi_H_


#include <pistache/http.h>
#include <pistache/router.h>
#include <pistache/http_headers.h>
#include <pistache/optional.h>


#include "AmfCreateEventSubscription.h"
#include "AmfCreatedEventSubscription.h"
#include "ProblemDetails.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

class  CreateSubscriptionApi {
public:
    CreateSubscriptionApi(std::shared_ptr<Pistache::Rest::Router>);
    virtual ~CreateSubscriptionApi() {}
    void init();

    const std::string base = "/namf-evts/v1";

private:
    void setupRoutes();

    void create_subscription_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);
    void create_subscription_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response);

    std::shared_ptr<Pistache::Rest::Router> router;

    /// <summary>
    /// Namf_EventExposure Subscribe service Operation
    /// </summary>
    /// <remarks>
    /// 
    /// </remarks>
    /// <param name="amfCreateEventSubscription"></param>
    virtual void create_subscription(const AmfCreateEventSubscription &amfCreateEventSubscription, Pistache::Http::ResponseWriter &response) = 0;

};

}
}
}
}

#endif /* CreateSubscriptionApi_H_ */

