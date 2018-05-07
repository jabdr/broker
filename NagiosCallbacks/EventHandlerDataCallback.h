#ifndef EVENTHANDLERDATA_CALLBACK_H
#define EVENTHANDLERDATA_CALLBACK_H

#include "nebmodule.h"

#include "NebmoduleCallback.h"

namespace statusengine {
    class EventHandlerDataCallback : public NebmoduleCallback<nebstruct_event_handler_data> {
      public:
        explicit EventHandlerDataCallback(Statusengine *se);

        virtual void Callback(int event_type, nebstruct_event_handler_data *data);
    };
} // namespace statusengine

#endif // !EVENTHANDLERDATA_CALLBACK_H
