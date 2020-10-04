#include <discord-cxx/client_events.h>
#include <discord-cxx/client.h>

namespace discord {
    void Client::setIsConnected(bool isConnected) {
        this->isConnected = isConnected;

        this->eventRouter.trigger($ClientConnectionStateChanged{
            .isConnected = this->isConnected
        });
    }

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

    std::future<bool> Client::connect(std::string token) {
        if (this->isConnected) {
            return false;
        }

        this->tokenBuffer = token;
        this->setIsConnected(true);

        // TODO
    }

    std::future<bool> Client::disconnect() {
        if (!this->isConnected) {
            return false;
        }

        // TODO

        this->setIsConnected(false);

        return true;
    }
}
