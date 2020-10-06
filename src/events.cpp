#include <discord-cxx/events.h>

namespace discord {
    EventHello::EventHello(uint64_t heartbeatInterval) noexcept :
        Event(EventKind::Hello),
        heartbeatInterval(heartbeatInterval) {
        //
    }

    EventReady::EventReady(
        uint32_t gatewayVersion,
        UserInfo userInfo,
        void* privateChannels,
        std::set<UnavailableGuild> guilds,
        std::string sessionId,
        std::pair<uint32_t, uint32_t> shard
    ) :
        Event(EventKind::Ready),
        gatewayVersion(gatewayVersion),
        userInfo(userInfo),
        privateChannels(privateChannels),
        guilds(guilds),
        sessionId(sessionId),
        shard(shard) {
        //
    }

    EventChannelPinsUpdate::EventChannelPinsUpdate(
        Snowflake guildId,
        Snowflake channelId,
        Timestamp lastPinTimestamp
    ) :
        Event(EventKind::ChannelPinsUpdate),
        guildId(guildId),
        channelId(channelId),
        lastPinTimestamp(lastPinTimestamp) {
        //
    }
}
