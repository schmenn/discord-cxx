#include <discord-cxx/user_info.h>

namespace discord {
    std::string UserInfo::makeTag() const noexcept {
        return this->username
            + "#"
            + std::to_string(this->discriminator);
    }
}
