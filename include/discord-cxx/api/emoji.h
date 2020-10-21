#pragma once

#include <optional>
#include <string>
#include <vector>
#include "snowflake.h"
#include "user_info.h"

namespace discord {
    struct Emoji {
        /**
         * The emoji id.
         */
        std::optional<Snowflake> id;

        /**
         * The emoji name. Can be std::nullopt only in reaction
         * emoji structs.
         */
        std::optional<std::string> name;

        /**
         * Array of role ids.
         */
        std::optional<std::vector<Snowflake>> roles; // roles

        /**
         * The user that created this emoji.
         */
        std::optional<UserInfo> creatorUserInfo; // user

        /**
         * Whether this emoji must be wrapped in colons.
         */
        std::optional<bool> isColonsRequired; // require_colons

        /**
         * Whether this emoji is managed.
         */
        std::optional<bool> isManaged; // managed

        /**
         * Whether this emoji is animated.
         */
        std::optional<bool> isAnimated; // animated

        /**
         * Whether this emoji can be used. May be false due to
         * loss of Server Boosts.
         */
        std::optional<bool> isAvailable; // available
    };
}
