#pragma once

#include "../../DynamicEvents/IEventHandler.hpp"

struct TimeoutIndHandler : IEventHandler
{
    void receive(std::unique_ptr<Event>) override
    {
        //no time to implement due to constarints
        //here should be handled tiemout indications
    }
};