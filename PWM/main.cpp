#include "mbed.h"

PwmOut PWM1(D6);

int main() {
    float i;

   

    while(1) {

        for (i = 0; i < 1;) {
            PWM1.period(0.001); 
            PWM1 = i;
            wait(0.1);
            i = i + 0.1;
        }
        for (i = 1; i > 0;) {
            PWM1.period(0.001); 
            PWM1 = i;
            wait(0.1);
            i = i - 0.1;
        }
    }
}