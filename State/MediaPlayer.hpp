#ifndef MEDIA_PLAYER_HPP_INCLUDED
#define MEDIA_PLAYER_HPP_INCLUDED

class StateInterface; // Advanced declaration to avoid circular dependency

class MediaPlayer {
private:
  StateInterface* m_currentState;

public:
  MediaPlayer();
  void setState(StateInterface* state);
  void pressPlay();
  void pressPause();
  void pressStop();
};

#endif  // MEDIA_PLAYER_HPP_INCLUDED
