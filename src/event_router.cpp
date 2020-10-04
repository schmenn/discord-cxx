#include <discord-cxx/event_router.h>

namespace discord {
    EventRouter::EventRouter() :
        listeners({}),
        interceptors({}) {
        //
    }

    size_t EventRouter::trigger(const Event &event) {
        size_t invokedCounter = 0;
        uint64_t eventId = (uint64_t)event.id;

        if (this->interceptors.contains(eventId)) {
            if (!this->interceptors.at(eventId)(event)) {
                return invokedCounter;
            }
        }

        if (this->listeners.contains(eventId)) {
            auto listeners = this->listeners.at(eventId);

            for (auto const &listener : listeners) {
                listener(event);
                invokedCounter++;
            }
        }

        return invokedCounter;
    }
}
