#include "ExternalCommandDataCallback.h"

#include "Statusengine.h"
#include "NagiosObjects/NagiosExternalCommandData.h"


namespace statusengine {
	ExternalCommandDataCallback::ExternalCommandDataCallback(Statusengine *se) : NebmoduleCallback(NEBCALLBACK_EXTERNAL_COMMAND_DATA, se) {
	}

	void ExternalCommandDataCallback::Callback(int event_type, nebstruct_external_command_data *data) {
		auto myData = NagiosExternalCommandData(data);
		se->Gearman().SendMessage("statusngin_externalcommands", myData.GetData().dump());
	}
}