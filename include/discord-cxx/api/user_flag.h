#pragma once

#include <cstdint>

namespace discord {
    enum class UserFlag {
        None,

        DiscordEmployee = 1 << 0,

        DiscordPartner = 1 << 1,

        HypeSquadEvents = 1 << 2,

        BugHunterLevel1 = 1 << 3,

        HouseBravery = 1 << 6,

        HouseBrilliance = 1 << 7,

        HouseBalance = 1 << 8,

        EarlySupporter = 1 << 9,

        TeamUser = 1 << 10,

        System = 1 << 12,

        BugHunterLevel2 = 1 << 14,

        VerifiedBot = 1 << 16,

        VerifiedBotDeveloper = 1 << 17
    };

    /**
     * An integer representing a combination of user
     * flags.
     */
    typedef uint64_t UserFlagMix;
}
