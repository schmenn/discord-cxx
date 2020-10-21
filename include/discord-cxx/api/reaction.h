#pragma once

#include "emoji.h"

namespace discord {
    struct Reaction {
        /**
         * How many times this emoji was used to react.
         */
        uint32_t count; // count

        /**
         * Specifies whether you have reacted using this emoji.
         */
        bool clientReacted; // me

        /**
         * A partial emoji.
         */
        Emoji emoji; // emoji
    };
}