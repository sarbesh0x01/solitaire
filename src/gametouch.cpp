#include "gametouch.hpp"

GameTouch::GameTouch() {
  }

  void GameTouch::GetCardFile() {

   card_filepath = "../cards/png";
  for (const auto &entry :
       std::filesystem::recursive_directory_iterator(card_filepath)) {
    std::string filepath = entry.path().string();
    filename.push_back(filepath);
  }
}

void GameTouch::LoadAllTexture() {
  for (const std::string &file : filename) {
      Texture2D texture = LoadTexture(file.c_str());
      cardtexture.push_back(texture);
      }
}

void GameTouch::DrawCard() {
  DrawTexture(cardtexture[current_card_index], 100, 100, WHITE);
  if (IsMouseButtonPressed(MOUSE_BUTTON_LEFT)) {
      current_card_index += 1;
  } else if (IsMouseButtonPressed(MOUSE_BUTTON_RIGHT)) {
      current_card_index -= 1;
  }
  else {
      current_card_index += 0;
	  }
  }

    
