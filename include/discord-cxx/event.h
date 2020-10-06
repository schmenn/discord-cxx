#pragma once

#include <string>
#include "event_kind.h"

namespace discord {
    struct Event {
        const EventKind kind;

        explicit Event(EventKind kind) :
            kind(kind) {
            //
        }
    };
}
