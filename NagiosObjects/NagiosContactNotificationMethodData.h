#pragma once

#include "NagiosObject.h"
#include "nebmodule.h"

namespace statusengine {
    class NagiosContactNotificationMethodData : public NagiosObject {
      public:
        explicit NagiosContactNotificationMethodData(
            const nebstruct_contact_notification_method_data *contactNotificationMethodData);
    };
} // namespace statusengine
