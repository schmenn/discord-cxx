#pragma once

#include <vector>
#include <optional>
#include <string>
#include "timestamp.h"

namespace discord {
    struct Embed {
        /**
         * title of the embed.
         */
        std::optional<std::string> title; // title

        /**
         * Type of the embed.
         * Always "rich" for webhook embeds
         */
        std::optional<std::string> type; // type

        /**
         * Description of the embed.
         */
        std::optional<std::string> description; // description

        /**
         * Url of the embed.
         */
        std::optional<std::string> url; // url

        /**
         * Timestamp of the embed content.
         */
        std::optional<Timestamp> timestamp; // timestamp

        /**
         * Color of the embed. (not hex)
         */
        std::optional<uint32_t> color; // color

        /**
         * The footer of the embed.
         */
        std::optional<EmbedFooter> footer; // footer

        /**
         * The image of the embed.
         */
        std::optional<EmbedImage> image; // image

        /**
         * The thumbnail of the embed.
         */
        std::optional<EmbedThumbnail> thumbnail; // thumbnail

        /**
         * The video of the embed.
         */
        std::optional<EmbedVideo> video; // video

        /**
         * The provider of the embed.
         */
        std::optional<EmbedProvider> provider; // provider

        /**
         * The author of the embed.
         */
        std::optional<EmbedAuthor> author; // author

        /**
         * Array of embed fields.
         */
        std::optional<std::vector<EmbedField>> fields; // fields+
    };

    struct EmbedFooter {
        /**
         * The footer text.
         */
        std::string text; // text

        /**
         * The url of the footer icon.
         */
        std::optional<std::string> iconUrl; // icon_url

        /**
         * The proxied url of the footer icon.
         */
        std::optional<std::string> proxyIconUrl; // proxy_icon_url
    };

    struct EmbedImage {
        /**
         * The image url.
         */
        std::optional<std::string> url; // url

        /**
         * The proxied image url.
         */
        std::optional<std::string> proxyUrl; // proxy_url

        /**
         * The height of the image.
         */
        std::optional<uint16_t> height; // height

        /**
         * The width of the image.
         */
        std::optional<uint16_t> width; // width
    };

    struct EmbedThumbnail {
        /**
         * The thumbnail image url.
         */
        std::optional<std::string> url; // url

        /**
         * The proxied thumbnail image url.
         */
        std::optional<std::string> proxyUrl; // proxy_url

        /**
         * The height of the thumbnail image.
         */
        std::optional<uint16_t> height; // height

        /**
         * The width of the thumbnail image.
         */
        std::optional<uint16_t> width; // width
    };

    struct EmbedVideo {
        /**
         * The url of the video.
         */
        std::optional<std::string> url; // url

        /**
         * The height of the video.
         */
        std::optional<uint16_t> height; // height

        /**
         * The width of the video.
         */
        std::optional<uint16_t> width; // width
    };

    struct EmbedProvider {
        /**
         * The name of the provider.
         */
        std::optional<std::string> name; // name

        /**
         * The url of the provider.
         */
        std::optional<std::string> url; // url
    };

    struct EmbedAuthor {
        /**
         * The name of the author.
         */
        std::optional<std::string> name; // name

        /**
         * The url of the author.
         */
        std::optional<std::string> url; // url

        /**
         * The icon url of the author.
         */
        std::optional<std::string> iconUrl; // icon_url

        /**
         * The proxied icon url of the author.
         */
        std::optional<std::string> proxyIconUrl; // proxy_icon_url
    };

    struct EmbedField {
        /**
         * The name of the field.
         */
        std::string name; // name

        /**
         * The value of the field.
         */
        std::string value; // value

        /**
         * Specifies whether the field should display inline
         */
        std::optional<bool> isInline; // inline
    };
}
