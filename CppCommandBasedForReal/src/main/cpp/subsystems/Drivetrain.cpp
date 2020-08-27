#include "../../include/subsystems/Drivetrain.hpp"

using namespace stuy;

Drivetrain::Drivetrain() {
    leftTop.SetInverted(true);
    rightTop.SetInverted(true);
    leftBot.SetInverted(true);
    rightBot.SetInverted(true);

    leftTop.SetIdleMode(IdleMode::kBrake);
    rightTop.SetIdleMode(IdleMode::kBrake);
    leftBot.SetIdleMode(IdleMode::kBrake);
    rightBot.SetIdleMode(IdleMode::kBrake); 
}

Drivetrain::Stop(){
    TankDrive(0,0);    
}

Drivetrain::TankDrive(double lSpeed, double rSpeed){
    motors.TankDrive(lSpeed, rSpeed, false);
}

Drivetrain::ArcadeDrive(double xSpeed, double zRot) {
    motors.ArcadeDrive(xSpeed, zRot, false);
     
}
