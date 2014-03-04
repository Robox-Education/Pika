#ifndef Robox_h
#define Robox_h

#include "Arduino.h"
#include <Servo.h>

class Robox
{
  public:
    Robox(int left_wheel_pin, int right_wheel_pin);
    void attach();
    void forward();
    void backward();
    void right();
    void left();
    void right(int target, int heading);
    void left(int target, int heading);
    void home(int target, int heading);
    void stop();

    int _target;
    int _heading;

  private:
    int _lwp;
    int _rwp;
    Servo _lw;
    Servo _rw;
};

#endif
