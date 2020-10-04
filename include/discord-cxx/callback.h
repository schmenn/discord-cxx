#pragma once

#include <functional>

namespace discord {
    template<typename TReturn = void>
    using Callback = std::function<TReturn()>;

    template<typename TArgs, typename TReturn = void>
    using ReceiverCallback = std::function<TReturn(TArgs)>;
}
