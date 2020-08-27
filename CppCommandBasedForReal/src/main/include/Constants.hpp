/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */

namespace stuy::Constants {
    namespace Drivetrain {
        constexpr int LEFT_TOP_PORT = 7;
        constexpr int LEFT_BOT_PORT = 6;
        constexpr int RIGHT_TOP_PORT = 4;
        constexpr int RIGHT_BOT_PORT = 3;
    }
}