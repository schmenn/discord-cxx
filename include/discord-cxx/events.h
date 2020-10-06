#pragma once

#include <set>
#include <discord-cxx/api/unavailable_guild.h>
#include <discord-cxx/api/timestamp.h>
#include <discord-cxx/api/user.h>
#include "event.h"

namespace discord {
    struct EventHello : Event {
        /**
         * The interval (in milliseconds) the client should
         * heartbeat with.
         */
        uint64_t heartbeatInterval; // heartbeat_interval

        explicit EventHello(uint64_t heartbeatInterval) noexcept;
    };

    struct EventReady : Event {
        uint32_t gatewayVersion; // v

        /**
         * Information about the user including email.
         */
        UserInfo userInfo; // user

        void* privateChannels;

        /**
         * The guilds the user is in.
         */
        std::set<UnavailableGuild> guilds; // guilds

        /**
         * Used for resuming connections.
         */
        std::string sessionId; // session_id

        /**
         * The shard information associated with this session,
         * if sent when identifying
         */
        std::pair<uint32_t, uint32_t> shard; // shard

        EventReady(
            uint32_t gatewayVersion,
            UserInfo userInfo,
            void* privateChannels,
            std::set<UnavailableGuild> guilds,
            std::string sessionId,
            std::pair<uint32_t, uint32_t> shard
        );
    };

    struct EventChannelPinsUpdate : Event {
        /**
         * The id of the guild.
         */
        Snowflake guildId; // guild_id

        /**
         * The id of the channel.
         */
        Snowflake channelId; // channel_id

        /**
         * The time at which the most recent pinned message
         * was pinned.
         */
        Timestamp lastPinTimestamp; // last_pin_timestamp

        EventChannelPinsUpdate(
            Snowflake guildId,
            Snowflake channelId,
            Timestamp lastPinTimestamp
        );
    };
}
