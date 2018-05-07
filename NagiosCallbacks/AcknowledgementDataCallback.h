#pragma once

#include "nebmodule.h"

#include "NebmoduleCallback.h"

namespace statusengine {
    class AcknowledgementDataCallback : public NebmoduleCallback<nebstruct_acknowledgement_data> {
      public:
        explicit AcknowledgementDataCallback(Statusengine *se);

        virtual void Callback(int event_type, nebstruct_acknowledgement_data *data);
    };
} // namespace statusengine
