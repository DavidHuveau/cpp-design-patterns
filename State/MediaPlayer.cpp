#include "MediaPlayer.hpp"
#include "StateInterface.hpp"

#include "PauseState.hpp"
#include "PlayState.hpp"
#include "StopState.hpp"

MediaPlayer::MediaPlayer() {
  m_currentState = new StopState();  // Initial state
};

void MediaPlayer::setState(StateInterface* state) {
  m_currentState = state;
};

void MediaPlayer::pressPlay() {
  m_currentState->pressPlay(this);
};

void MediaPlayer::pressPause() {
  m_currentState->pressPause(this);
};

void MediaPlayer::pressStop() {
  m_currentState->pressStop(this);
};
