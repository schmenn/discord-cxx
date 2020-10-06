#pragma once

#include <string>
#include <optional>
#include <discord-cxx/api/snowflake.h>
#include <discord-cxx/api/nitro_kind.h>
#include <discord-cxx/api/user_flag.h>

namespace discord {
    struct UserInfo {
        /**
         * The user's id.
         */
        Snowflake id; // id

        /**
         * The user's username, not unique across the platform.
         */
        std::string username; // username

        /**
         * The user's 4-digit Discord-tag.
         */
        uint32_t discriminator; // discriminator

        /**
         * The user's avatar hash.
         */
        std::optional<std::string> avatarHash; // avatar

        /**
         * Whether the user belongs to an OAuth2 application.
         */
        std::optional<bool> isBotUser; // bot

        /**
         * Whether the user is an Official Discord System user
         * (part of the urgent message system).
         */
        std::optional<bool> isSystemUser; // system

        /**
         * Whether the user has two factor enabled on their account.
         */
        std::optional<bool> isTwoFactorAuthEnabled; // mfa_enabled

        /**
         * The user's chosen language option.
         */
        std::optional<std::string> locale; // locale

        /**
         * Whether the email on this account has been verified.
         */
        std::optional<bool> isEmailVerified; // verified

        /**
         * The user's email.
         */
        std::optional<std::optional<std::string>> emailAddress; // email

        /**
         * The flags on a user's account.
         */
        std::optional<UserFlagMix> flags; // flags;

        /**
         * The type of Nitro subscription on a user's account.
         */
        std::optional<NitroKind> nitroKind; // premium_type

        /**
         * The public flags on a user's account.
         */
        std::optional<UserFlagMix> publicFlags; // public_flags

        [[nodiscard]] std::string makeTag() const noexcept;
    };
}
