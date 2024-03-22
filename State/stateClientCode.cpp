#include "stateClientCode.hpp"
#include "MediaPlayer.hpp"

void testMediaPlayer() {
  MediaPlayer player;

  player.pressPlay(); // Output: Playing
  player.pressPause(); // Output: Paused
  player.pressPlay(); // Output: Resumed playing
  player.pressPause(); // Output: Paused
  player.pressStop(); // Output: Stopped
  player.pressStop(); // Output: Already stopped
};
