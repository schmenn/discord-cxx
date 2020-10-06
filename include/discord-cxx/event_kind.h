#pragma once

#include <cstdint>

namespace discord {
    enum class EventKind : uint64_t {
        Unknown,

        Hello,

        Ready,

        Resumed,

        InvalidSession,

        ChannelCreate,

        ChannelUpdate,

        ChannelDelete,

        ChannelPinsUpdate,

        GuildCreate,

        GuildUpdate,

        GuildDelete,

        GuildBanAdd,

        GuildBanRemove,

        GuildEmojisUpdate,

        GuildIntegrationsUpdate,

        GuildMemberAdd,

        GuildMemberRemove,

        GuildMemberUpdate,

        GuildMembersChunk,

        GuildRoleCreate,

        GuildRoleUpdate,

        GuildRoleDelete,

        MessageCreate,

        MessageUpdate,

        MessageDelete,

        MessageDeleteBulk,

        MessageReactionAdd,

        MessageReactionRemove,

        MessageReactionRemoveAll,

        PresenceUpdate,

        TypingStart,

        UserUpdate,

        VoiceStateUpdate,

        VoiceServerUpdate,

        WebhooksUpdate,

        RawMessageUpdate,

        RawMessageDelete,

        RawMessageDeleteBulk
    };
}
