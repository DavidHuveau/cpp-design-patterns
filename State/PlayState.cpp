#include "PlayState.hpp"
#include "MediaPlayer.hpp"

#include "PauseState.hpp"
#include "StopState.hpp"

#include <iostream>

using namespace std;

void PlayState::pressPlay(MediaPlayer* player) {
  cout << "Already playing" << endl;
};

void PlayState::pressPause(MediaPlayer* player) {
  cout << "Paused" << endl;
  player->setState(new PauseState());
};

void PlayState::pressStop(MediaPlayer* player) {
  cout << "Stopped" << endl;
  player->setState(new StopState());
};
