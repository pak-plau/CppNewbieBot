#ifndef _INTAKE_SUBSYSTEM_HPP_
#define _INTAKE_SUBSYSTEM_HPP_

#include <frc2/command/SubsystemBase.h>
#include <rev/CANSparkMax.h>
#include <frc/DoubleSolenoid.h>
#include <frc/DigitalInput.h>

namespace stuy {

class Intake : public frc2::SubsystemBase
{
    private:
        rev::CANSparkMax motor {Constants::Intake::MOTOR_PORT, rev::CANSparkMax::MotorType::kBrushless};
        frc::DoubleSolenoid solenoid {Constants::Intake::SOLENOID_PORT_A, Constants::Intake::SOLENOID_PORT_B};
        frc::DigitalInput sensor {Constants::Intake::SENSOR_PORT};
        
    public:

        Intake();
        ~Intake();
        void Extend();
        void Retract();
        void Acquire();
        void Deacquire();
        void Stop();
        void SetMotor(double speed);
        bool IsBallDetected();

};

}

#endif