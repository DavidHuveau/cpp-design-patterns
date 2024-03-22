#ifndef STAOP_STATE_HPP_INCLUDED
#define STAOP_STATE_HPP_INCLUDED

#include "StateInterface.hpp"

class StopState : public StateInterface {
public:
  void pressPlay(MediaPlayer* player) override;
  void pressPause(MediaPlayer* player) override;
  void pressStop(MediaPlayer* player) override;
};

#endif  // STAOP_STATE_HPP_INCLUDED
