#pragma once

#include <vector>
#include <optional>
#include <string>
#include "snowflake.h"
#include "user_info.h"
#include "guild_member.h"
#include "timestamp.h"
#include "role.h"

namespace discord {
    struct Message {
        /**
         * The message id.
        */
        Snowflake id; // id

        /**
         * The id of the channel the message was sent in.
         */
        Snowflake channelId; // channel_id

        /**
         * The id of the guild the message was sent in.
         */
        std::optional<Snowflake> guildId; // guild_id

        // TODO: "(not guaranteed to be a valid user, see below)"
        /**
         * The author of the message.
         */
        UserInfo author; // author

        /**
         * Member properties for this message's author.
         */
        std::optional<GuildMember> member; // member

        /**
         * The contents of the message.
         */
        std::string content; // content

        /**
         * The timestamp at which the message was sent.
         */
        Timestamp timestamp; // timestamp

        /**
         * The timestamp at which the message was edited (null if it was not edited).
         */
        std::optional<Timestamp> editedTimestamp; // edited_timestamp

        /**
         * Specifies whether the message was sent as TTS (Text-To-Speech).
         */
        bool isTts; // tts

        /**
         * Specifies whether the message mentions everyone.
         */
        bool isEveryoneMentioned; // mention_everyone

        // TODO: "array of user objects, with an additional partial member field"
        /**
         * Users specifically mentioned in this message.
         */
        std::vector<UserInfo> mentions; // mentions

        /**
         * Array of mentioned roles
         */
        std::vector<Role> mentionedRoles;

        // TODO: continue this
    };
}
