#include "observerClientCode.hpp"

#include "Display.hpp"
#include "WeatherStation.hpp"

void weatherStation() {
  WeatherStation weatherStation;

  Display display1;
  Display display2;

  weatherStation.registerObserver(&display1);
  weatherStation.registerObserver(&display2);

  // Simulate weather data updates
  weatherStation.setMeasurements(25.5, 60, 1013.2);
  weatherStation.setMeasurements(24.8, 58, 1014.5);
};
