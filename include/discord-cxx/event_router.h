#pragma once

#include <map>
#include "callback.h"
#include "event.h"

namespace discord {
    typedef std::map<uint64_t, std::vector<ReceiverCallback<const Event &>>> EventListenersMap;

    class EventRouter {
    public:
        EventListenersMap listeners;

        /**
         * Event handlers which are invoked before the listeners,
         * and control whether listeners can be invoked afterwards
         * or not.
         */
        std::map<uint64_t, ReceiverCallback<const Event &, bool>> interceptors;

        EventRouter();

        /**
         * Trigger all listeners registered to the provided event.
         * Returns the amount of invoked listeners. If no listener
         * is registered for the provided event, the result will be
         * 0.
         */
        size_t trigger(const Event &event);
    };
}
