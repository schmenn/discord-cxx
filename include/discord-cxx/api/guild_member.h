#pragma once

#include <string>
#include <optional>
#include <vector>
#include "timestamp.h"
#include "snowflake.h"
#include "user_info.h"

namespace discord {
    struct GuildMember {
        // TODO: "The field user won't be included in the member object attached to MESSAGE_CREATE and MESSAGE_UPDATE gateway events."
        /**
         * The user object of the member.
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
