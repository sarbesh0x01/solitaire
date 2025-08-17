#include "game.hpp"

int windowWidth = 1280;
int windowHeight = 700;

GameSolitaire::GameSolitaire() {
    InitGame();
}

void GameSolitaire::InitGame() {
  InitWindow(windowWidth, windowHeight, "Solitaire");
}

void GameSolitaire::RunGame() {
  while (!WindowShouldClose()) {
    DrawGame();
  }
}

void GameSolitaire::DrawGame() {
  BeginDrawing();
  ClearBackground(WHITE);
  EndDrawing();
}
