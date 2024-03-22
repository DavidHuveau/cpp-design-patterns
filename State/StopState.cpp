#include "StopState.hpp"
#include "MediaPlayer.hpp"

#include "PlayState.hpp"

#include <iostream>

using namespace std;

void StopState::pressPlay(MediaPlayer* player) {
  cout << "Playing" << endl;
  player->setState(new PlayState());
};

void StopState::pressPause(MediaPlayer* player) {
  cout << "Already stopped" << endl;
};

void StopState::pressStop(MediaPlayer* player) {
  cout << "Already stopped" << endl;
};
