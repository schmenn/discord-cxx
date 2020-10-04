#pragma once

#include <cstdint>

namespace discord {
    enum class EventId : uint64_t {
        Default,

        ClientConnectedStateChanged
    };
}
