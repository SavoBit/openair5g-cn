/**
* AMF MT Service
* AMF Mobile Termination Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "EnableUEReachabilityApiImpl.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::model;

EnableUEReachabilityApiImpl::EnableUEReachabilityApiImpl(std::shared_ptr<Pistache::Rest::Router> rtr)
    : EnableUEReachabilityApi(rtr)
    { }

void EnableUEReachabilityApiImpl::enable_ue_reachability(const std::string &ueContextId, const EnableUeReachabilityReqData &enableUeReachabilityReqData, Pistache::Http::ResponseWriter &response) {
    response.send(Pistache::Http::Code::Ok, "Do some magic\n");
}

}
}
}
}

