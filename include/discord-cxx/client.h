#include <string>
#include <map>
#include <future>
#include "client_options.h"
#include "snowflake.h"
#include "user.h"
#include "guild_member.h"
#include "event_router.h"

namespace discord {
    class Client {
    private:
        std::string tokenBuffer;

        bool isConnected;

        std::map<Snowflake, User> userCache;

        std::map<Snowflake, GuildMember> guildMemberCache;

        EventRouter eventRouter;

        /**
         * Updates the connection status buffer, while at the same
         * time triggering the corresponding connection status changed
         * event on the event router.
         */
        void setIsConnected(bool isConnected);

    public:
        const ClientOptions options;

        explicit Client(ClientOptions options) noexcept;

        Client() noexcept;

        [[nodiscard]] bool getIsConnected() const noexcept;

        [[nodiscard]] const std::map<Snowflake, User> &getUserCache() const noexcept;

        [[nodiscard]] const std::map<Snowflake, GuildMember> &getGuildMemberCache() const noexcept;

        [[nodiscard]] const EventRouter &getEventRouter() const noexcept;

        size_t simulateEvent(Event event);

        /**
         * Attempt to connect the client. Immediately returns false
         * if the client is already connected.
         */
        std::future<bool> connect(std::string token);

        /**
         * Attempt to disconnect the client. Immediately returns false
         * if the client is already disconnected.
         */
        std::future<bool> disconnect();
    };
}
