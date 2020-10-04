#pragma once

#include <string>
#include "event_id.h"

namespace discord {
    struct Event {
        static constexpr EventId id = EventId::Default;
    };
}
