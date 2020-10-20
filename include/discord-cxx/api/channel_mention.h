#pragma once

#include <string>
#include "snowflake.h"

namespace discord {
    struct ChannelMention {
        /**
         * Id of the mentioned channel.
         */
        Snowflake id; // id

        /**
         * Id of the guild the mentioned channel is in.
         */
        Snowflake guildId; // guild_id

        /**
         * Type of the mentioned channel. (int)
         */
        uint8_t type; // type

        /**
         * Name of the mentioned channel.
         */
        std::string name; // name
    };
}