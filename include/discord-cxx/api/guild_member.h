#pragma once

#include <string>
#include <optional>
#include <vector>
#include "timestamp.h"
#include "snowflake.h"
#include "user_info.h"

namespace discord {
    struct GuildMember {
        /**
         * The user object of the member.
         * WONT BE INCLUDED IN 'MESSAGE_CREATE' AND 'MESSAGE_UPDATE' EVENTS
         */
        std::optional<UserInfo> user; // user

        /**
         * The nickname of the member.
         */
        std::optional<std::string> nickname; // nick

        /**
         * Array of role ids.
         */
        std::vector<Snowflake> roles; // roles

        /**
         * Time at which the member joined the guild.
         */
        Timestamp joinedAt; // joined_at

        /**
         * Time at which the member started boosting the guild.
         */
        std::optional<Timestamp> boostingSince; // premium_since

        /**
         * Specifies whether the member is deafened in voice channels.
         */
        bool isServerDeafened; // deaf

        /**
         * Specifies whether the user is muted in voice channels.
         */
        bool isServerMuted; // mute
    };
}
