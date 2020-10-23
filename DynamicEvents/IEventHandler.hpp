#pragma once

#include <memory>

class Event;

class IEventHandler
{
public:
    virtual ~IEventHandler() = default;
    virtual void receive(std::unique_ptr<Event>) = 0;
};

struct IMasterEventHandler : IEventHandler
{
    virtual ~IMasterEventHandler() = default;
    virtual void registerEventHandler(std::uint32_t, std::unique_ptr<IEventHandler>&&) = 0;
};
