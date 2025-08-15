#pragma once
#include <string>
#include <iostream>
#include <filesystem>
#include <raylib.h>

class Solitaire {
    public:
      Solitaire();
    ~Solitaire()      ;

    std::string LoadCardFile();
  void DrawCardScreen();
    void Draw();


  Texture2D cardTexture_m;

private:
  std::string file_path;
  Rectangle imagerec;
};
