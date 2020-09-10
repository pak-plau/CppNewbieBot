#ifndef _INTAKE_DEACQUIRE_COMMAND_HPP_
#define _INTAKE_DEACQUIRE_COMMAND_HPP_

#include <frc2/command/CommandHelper.h>
#include <frc2/command/CommandBase.h>
#include "../../include/subsystems/Intake.hpp"

namespace stuy
{

class IntakeDeacquireCommand : public frc2::CommandHelper<frc2::CommandBase, IntakeDeacquireCommand>
{
    public:
        IntakeDeacquireCommand(Intake* intake);
        ~IntakeDeacquireCommand();
        void execute() override;
        void end(bool interrupted) override;

    private:
        Intake* intake;

};
//link to deaquire command java
// https://github.com/StuyPulse/Edwin/blob/master/src/main/java/com/stuypulse/robot/commands/IntakeDeacquireCommand.java
}

#endif