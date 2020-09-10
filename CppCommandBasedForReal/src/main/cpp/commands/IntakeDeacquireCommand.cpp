#include "../../include/commands/IntakeDeacquireCommand.hpp"
#include "../../include/subsystems/Intake.hpp"

using namespace stuy;

IntakeDeacquireCommand::IntakeDeacquireCommand(Intake* intake) { 
    this->intake = intake;
    AddRequirements(intake);
}
void IntakeDeacquireCommand::end(bool interrupted){
    intake->Stop();
}
void IntakeDeacquireCommand::execute() {
    intake->Deacquire();
}





