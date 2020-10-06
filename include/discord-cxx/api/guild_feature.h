#pragma once

#include <string>

namespace discord {
    enum class GuildFeature {
        /**
         * Guild has access to set an invite splash background.
         */
        InviteSplash, // INVITE_SPLASH

        /**
         * Guild has access to set 384kbps bitrate in voice
         * (previously VIP voice servers).
         */
        VipRegions, // VIP_REGIONS

        /**
         * Guild has access to set a vanity URL.
         */
        VanityUrl, // VANITY_URL

        /**
         * Guild is verified.
         */
        Verified, // VERIFIED

        /**
         * Guild is partnered with Discord.
         */
        Partnered, // PARTNERED

        /**
         * Guild is public.
         */
        Public, // PUBLIC

        /**
         * Guild has access to use commerce features (i.e.
         * create store channels).
         */
        Commerce, // COMMERCE

        /**
         * Guild has access to create news channels.
         */
        News, // NEWS

        /**
         * Guild is able to be discovered in the directory.
         */
        Discoverable, // DISCOVERABLE

        /**
         * Guild is able to be featured in the directory.
         */
        Featurable, // FEATURABLE

        /**
         * Guild has access to set an animated guild icon.
         */
        AnimatedIcon, // ANIMATED_ICON

        /**
         * Guild has access to set a guild banner image.
         */
        Banner, // BANNER

        /**
         * Guild cannot be public.
         */
        PublicDisabled, // PUBLIC_DISABLED

        /**
         * Guild has enabled the welcome screen.
         */
        WelcomeScreenEnabled // WELCOME_SCREEN_ENABLED
    };
}
