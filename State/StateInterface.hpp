#ifndef STATE_INTERFACE_HPP_INCLUDED
#define STATE_INTERFACE_HPP_INCLUDED

class MediaPlayer; // Advanced declaration to avoid circular dependency

class StateInterface {
public:
  virtual void pressPlay(MediaPlayer* player)  = 0;
  virtual void pressPause(MediaPlayer* player) = 0;
  virtual void pressStop(MediaPlayer* player)  = 0;
};

#endif  // STATE_INTERFACE_HPP_INCLUDED
