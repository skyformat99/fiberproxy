/**
 * @file process/RouterInitializer.cpp
 * @date Created <2015-01-26 18:29:17>
 *
 * This file is generated by generators/router_initializer.rb from config file
 * generators/router_initializer.yml. Do not edit this file directly. Please read
 * the config file, update options there and re-run the ruby script to
 * update this file.
 */

#include "RouterInitializer.h"
#include <util/driver/ActionHandler.h>

#include <memory> // for std::auto_ptr

#include "controllers/CommandsController.h"
#include "controllers/APIController.h"

namespace fibp
{

void initializeDriverRouter(::izenelib::driver::Router& router, bool enableTest)
{
    {
        CommandsController commands;
        const std::string controllerName("commands");
        typedef ::izenelib::driver::ActionHandler<CommandsController> handler_type;
        typedef std::auto_ptr<handler_type> handler_ptr;

        handler_ptr call_services_asyncHandler(
            new handler_type(
                commands,
                &CommandsController::call_services_async,
                true
            )
        );

        router.map(
            controllerName,
            "call_services_async",
            call_services_asyncHandler.get()
        );
        call_services_asyncHandler.release();

        handler_ptr call_single_service_asyncHandler(
            new handler_type(
                commands,
                &CommandsController::call_single_service_async,
                true
            )
        );

        router.map(
            controllerName,
            "call_single_service_async",
            call_single_service_asyncHandler.get()
        );
        call_single_service_asyncHandler.release();

        handler_ptr check_aliveHandler(
            new handler_type(
                commands,
                &CommandsController::check_alive,
                false
            )
        );

        router.map(
            controllerName,
            "check_alive",
            check_aliveHandler.get()
        );
        check_aliveHandler.release();
    }

    {
        APIController api;
        const std::string controllerName("api");
        typedef ::izenelib::driver::ActionHandler<APIController> handler_type;
        typedef std::auto_ptr<handler_type> handler_ptr;

        handler_ptr list_port_forward_servicesHandler(
            new handler_type(
                api,
                &APIController::list_port_forward_services,
                false
            )
        );

        router.map(
            controllerName,
            "list_port_forward_services",
            list_port_forward_servicesHandler.get()
        );
        list_port_forward_servicesHandler.release();
    }

}

} // namespace 

