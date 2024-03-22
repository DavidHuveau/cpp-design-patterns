#ifndef PLAY_STATE_HPP_INCLUDED
#define PLAY_STATE_HPP_INCLUDED

#include "StateInterface.hpp"

class PlayState : public StateInterface {
public:
  void pressPlay(MediaPlayer* player) override;
  void pressPause(MediaPlayer* player) override;
  void pressStop(MediaPlayer* player) override;
};

#endif  // PLAY_STATE_HPP_INCLUDED
