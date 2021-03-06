/**
 * @file
 * Declares the BSD uptime fact resolver.
 */
#pragma once

#include "../posix/uptime_resolver.hpp"

namespace facter { namespace facts { namespace bsd {

    /**
     * Responsible for resolving uptime facts.
     */
    struct uptime_resolver : posix::uptime_resolver
    {
     protected:
        /**
         * Gets the system uptime in seconds.
         * @return Returns the system uptime in seconds.
         */
        virtual int64_t get_uptime() override;
    };

}}}  // namespace facter::facts::bsd
