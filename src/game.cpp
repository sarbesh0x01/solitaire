#include "game.hpp"

Game::Game() : mousecheck() {
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(800, 800, "SOLITAIRE");
    mousecheck.GetCardFile();
    mousecheck.LoadAllTexture();
}

Game::~Game() {}

void Game::Run() {
    while (!WindowShouldClose()) {
      Draw();
    }
}

void Game::Draw() {
  BeginDrawing();
  ClearBackground(WHITE);
  mousecheck.DrawCard();
  EndDrawing();
}
