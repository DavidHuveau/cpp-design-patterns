#ifndef WEATHER_STATION_HPP_INCLUDED
#define WEATHER_STATION_HPP_INCLUDED

#include <vector>

#include "ObserverInterface.hpp"

class WeatherStation {
private:
  float                           m_temperature;
  float                           m_humidity;
  float                           m_pressure;
  std::vector<ObserverInterface*> m_observers;

  void notifyObservers();

public:
  void registerObserver(ObserverInterface* observer);
  void removeObserver(ObserverInterface* observer);
  void setMeasurements(float temp, float hum, float press);
};

#endif  // WEATHER_STATION_HPP_INCLUDED
