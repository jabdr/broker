#pragma once

#include "NagiosObject.h"
#include "nebmodule.h"

namespace statusengine {
    class NagiosSystemCommandData : public NagiosObject {
      public:
        explicit NagiosSystemCommandData(const nebstruct_system_command_data *systemCommandData);
    };
} // namespace statusengine
