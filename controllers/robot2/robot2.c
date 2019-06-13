#include <webots/robot.h>
#include <webots/motor.h>

#define TIME_STEP 64
#define PI 3.14159

int main(int argc, char **argv)
{
  wb_robot_init();

   WbDeviceTag servo = wb_robot_get_device("servo_motor");
   WbDeviceTag servo2 = wb_robot_get_device("servo_motor2");
   WbDeviceTag servo3 = wb_robot_get_device("servo_motor3");

  while (wb_robot_step(TIME_STEP) != -1) {

     wb_motor_set_position(servo,PI/4);
     wb_motor_set_position(servo2,PI/4);
     wb_motor_set_position(servo3,PI/4);
  };

  wb_robot_cleanup();

  return 0;
}
