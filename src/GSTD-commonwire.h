#ifndef GSTD_COMMONWIRE
#define GSTD_COMMONWIRE

#include <Arduino.h>
#include <string>

using namespace std;

class commonFUNC

{
private:
public:
  commonFUNC(int gpio, int temp);
  void blink();
  void fade();
};

class motorPIN
{
private:
public:
  motorPIN(int gpioM1);
  void motorwrite(int mapwm);
  void printspeed();
};
class buzzerATCH
{
private:

public:
 buzzerATCH(int gpioBZ);
 void noteWRITE(String nota);
};

#endif
