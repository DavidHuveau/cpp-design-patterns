#include "Display.hpp"

#include <iostream>

using namespace std;

void Display::update(float temperature, float humidity, float pressure) {
  cout << "Display: Temperature = " << temperature
       << "°C, Humidity = " << humidity
       << "%, Pressure = " << pressure << " hPa"
       << endl;
};
