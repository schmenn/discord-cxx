#pragma once

#include "snowflake.h"

namespace discord {
    struct PermissionOverwrite {
        /**
         * Either the id of a role or a user
         */
        Snowflake id; // id

        /**
         * Either 0 (role) or 1 (member)
         */
        uint8_t type; // type

        /**
         * Permission bit set
         */
        std::string allow; // allow

        /**
         * Permission bit set
         */
        std::string deny; // deny
    };
} 
