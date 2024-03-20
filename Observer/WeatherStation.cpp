#include "WeatherStation.hpp"

void WeatherStation::notifyObservers() {
  for (ObserverInterface* observer : m_observers) {
    observer->update(m_temperature, m_humidity, m_pressure);
  }
};

void WeatherStation::registerObserver(ObserverInterface* observer) {
  m_observers.push_back(observer);
};

void WeatherStation::removeObserver(ObserverInterface* observer) {
  // You can implement the removal logic if needed.
};

void WeatherStation::setMeasurements(float temp, float hum, float press) {
  m_temperature = temp;
  m_humidity = hum;
  m_pressure = press;
  notifyObservers();
};
