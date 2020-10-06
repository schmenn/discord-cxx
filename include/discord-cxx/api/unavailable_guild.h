#pragma once

#include <set>
#include <optional>
#include "snowflake.h"
#include "emoji.h"
#include "guild_feature.h"

namespace discord {
    struct UnavailableGuild {
        /**
         * The guild id.
         */
        Snowflake id; // id

        /**
         * The guild name (2-100 characters).
         */
        std::string name; // name

        std::optional<std::string> iconHash; // icon

        std::optional<std::string> splashHash; // splash

        std::optional<std::string> discoverySplashHash; // discovery_splash

        /**
         * Custom guild emojis.
         */
        std::set<Emoji> emojis; // emojis

        /**
         * Enabled guild features.
         */
        std::set<GuildFeature> features; // features

        /**
         * Approximate number of members in this guild.
         */
        uint32_t approximateMemberCount; // approximate_member_count

        /**
         * Approximate number of online members in this guild.
         */
        uint32_t approximatePresenceCount; // approximate_presence_count

        /**
         * The description for the guild.
         */
        std::optional<std::string> description;
    };
}
