#pragma once

#include "event.h"

namespace discord {
    struct $ClientConnectionStateChanged : Event {
        static constexpr EventId id = EventId::ClientConnectedStateChanged;

        bool isConnected;
    };
}
