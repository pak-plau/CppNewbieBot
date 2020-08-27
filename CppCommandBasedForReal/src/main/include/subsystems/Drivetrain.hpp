#ifndef _DRIVETRAIN_SUBSYSTEM_HPP_
#define _DRIVETRAIN_SUBSYSTEM_HPP_

#include <frc2/command/SubsystemBase.h>
#include <rev/CANSparkMax.h>

#include "../Constants.hpp"

namespace stuy {

class Drivetrain : public frc2::SubsystemBase
{
    private:
        rev::CANSparkMax leftTop {Constants::Drivetrain::LEFT_TOP_PORT, rev::CANSparkMax::MotorType::kBrushless}; //7
        rev::CANSparkMax leftBot {Constants::Drivetrain::LEFT_BOT_PORT, rev::CANSparkMax::MotorType::kBrushless}; //6
        rev::CANSparkMax rightTop {Constants::Drivetrain::RIGHT_TOP_PORT, rev::CANSparkMax::MotorType::kBrushless}; //4
        rev::CANSparkMax rightBot {Constants::Drivetrain::RIGHT_BOT_PORT, rev::CANSparkMax::MotorType::kBrushless}; //3

        frc::SpeedControllerGroup lMotors {leftTop, leftBot};
        frc::SpeedControllerGroup rMotors {rightTop, rightBot};
        
        frc::DifferentialDrive motors {lMotors, rMotors};
    
    public:
        Drivetrain();
        ~Drivetrain();

        void Stop();
        void TankDrive(double lSpeed, double rSpeed);
        void ArcadeDrive(double xSpeed, double zRot);
};

}

#endif