#include "PauseState.hpp"
#include "MediaPlayer.hpp"

#include "PlayState.hpp"
#include "StopState.hpp"

#include <iostream>

using namespace std;

void PauseState::pressPlay(MediaPlayer* player) {
  cout << "Resumed playing" << endl;
  player->setState(new PlayState());
};

void PauseState::pressPause(MediaPlayer* player) {
  std::cout << "Already paused" << endl;
};

void PauseState::pressStop(MediaPlayer* player) {
  cout << "Stopped" << endl;
  player->setState(new StopState());
};
