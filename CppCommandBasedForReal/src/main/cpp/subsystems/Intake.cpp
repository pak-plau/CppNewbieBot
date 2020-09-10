#include "../../include/subsystems/Intake.hpp"
#include "../../include/Constants.hpp"

using namespace stuy;

Intake::Intake() {
    motor.SetInverted(true);
}

void Intake::Extend() {
    
    solenoid.Set(frc::DoubleSolenoid::Value::kReverse);
}

void Intake::Retract() {
    solenoid.Set(frc::DoubleSolenoid::Value::kForward);
}

void Intake::Deacquire() {
    SetMotor(-Constants::Intake::INTAKE_MOTOR_SPEED);
}

void Intake::Acquire() {
    SetMotor(Constants::Intake::INTAKE_MOTOR_SPEED);
}

void Intake::Stop() {
    motor.StopMotor();
}

void Intake::SetMotor(double speed) {
    motor.Set(speed);
}

bool Intake::IsBallDetected() {
    return !sensor.Get();
}



