#pragma once
#include <raylib.h>
// #include "solitaire.hpp"
#include "gametouch.hpp"

class Game {
public:
    Game();
  ~Game();
  void Run();
  void Draw();

private:
  // Solitaire filesyscheck;
    GameTouch mousecheck;
    
};

