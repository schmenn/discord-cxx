#pragma once

#include <string>

namespace discord {
    struct UserInfo {
        std::string username;

        uint32_t discriminator;

        [[nodiscard]] std::string makeTag() const noexcept;
    };
}
