#include "commandClientCode.hpp"
#include "ElectronicDevice.hpp"
#include "TurnOnCommand.hpp"
#include "TurnOffCommand.hpp"
#include "RemoteControl.hpp"
#include "CommandInterface.hpp"

void controlAnElectronicDevice() {
  ElectronicDevice* tv = new ElectronicDevice("TV");
  ElectronicDevice* lights = new ElectronicDevice("lights");

  // Create commands for turning devices on and off
  TurnOnCommand* turnOnTV = new TurnOnCommand(tv);
  TurnOffCommand* turnOffTV = new TurnOffCommand(tv);
  TurnOnCommand* turnOnLights = new TurnOnCommand(lights);
  TurnOffCommand* turnOffLights = new TurnOffCommand(lights);

  RemoteControl remote;
  remote.addCommand(turnOnTV); // Button 0: Turn on TV
  remote.addCommand(turnOffTV); // Button 1: Turn off TV
  remote.addCommand(turnOnLights); // Button 2: Turn on Lights
  remote.addCommand(turnOffLights); // Button 3: Turn off Lights

  remote.pressButton(0); // Turn on TV
  remote.pressButton(3); // Turn off Lights
};
