#ifndef PAUSE_STATE_HPP_INCLUDED
#define PAUSE_STATE_HPP_INCLUDED

#include "StateInterface.hpp"

class PauseState : public StateInterface {
public:
  void pressPlay(MediaPlayer* player) override;
  void pressPause(MediaPlayer* player) override;
  void pressStop(MediaPlayer* player) override;
};

#endif  // PAUSE_STATE_HPP_INCLUDED
