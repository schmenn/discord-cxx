#include <discord-cxx/events.h>
#include <discord-cxx/client.h>

namespace discord {
    Client::Client(ClientOptions options) noexcept :
        tokenBuffer(),
        isConnected(false),
        userCache(),
        guildMemberCache(),
        eventRouter(),
        options(options) {
        //
    }

    Client::Client() noexcept :
        Client(ClientOptions{}) {
        //
    }

    bool Client::getIsConnected() const noexcept {
        return this->isConnected;
    }

    const std::map<Snowflake, User> &Client::getUserCache() const noexcept {
        return this->userCache;
    }

    const std::map<Snowflake, GuildMember> &Client::getGuildMemberCache() const noexcept {
        return this->guildMemberCache;
    }

    const EventRouter &Client::getEventRouter() const noexcept {
        return this->eventRouter;
    }

    size_t Client::simulateEvent(Event event) {
        return this->eventRouter.trigger(event);
    }

    bool Client::connect(std::string token) {
        if (this->isConnected) {
            return false;
        }

        this->tokenBuffer = token;
        this->isConnected = true;

        // TODO

        return true;
    }

    bool Client::disconnect() {
        if (!this->isConnected) {
            return false;
        }

        // TODO

        this->isConnected = false;

        return true;
    }
}
