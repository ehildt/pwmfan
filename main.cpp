#include <unistd.h>
#include <iostream>
#include "gpio/gpio.hpp"

using namespace std;

int main(void)
{
    while (true)
    {
        cout << "boom" << endl;
        sleep(1);
    }

    string fruit = "apple";
    string fruit2 = "banana";
    int pin2 = 2;
    int pin_mode = 0;
    setGPIO(pin2, pin_mode);
    cout << endl << fruit << " " << fruit2 << endl;
}