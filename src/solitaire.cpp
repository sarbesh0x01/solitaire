#include "solitaire.hpp"

Solitaire::Solitaire() { imagerec = {100, 100, 200, 200}; }

Solitaire::~Solitaire() { UnloadTexture(cardTexture_m); }

// std::string Solitaire::LoadCardFile() {
//   file_path = "../../Solitaire/cards/png";
//   std::string image_path;
//   Image image_data;
//   for (const auto &entry : std::filesystem::directory_iterator(file_path)) {
//     std::cout << entry.path() << std::endl;
//     image_path = entry.path().c_str();
//   }
//   // This will only return the last image file path
// return  image_path;
// }

void Solitaire::Draw() {

  file_path = "../../Solitaire/cards/png";
  std::string image_path;
  Image image_data;
  int position_increment = 100;
  Vector2 initialPosition = {100, 100};
  Vector2 position = {100, 100};
  for (const auto &entry : std::filesystem::directory_iterator(file_path)) {
    std::cout << entry.path() << std::endl;

    image_path = entry.path().c_str();
    do {

    if (position.x > 1000) {

      position.y += position_increment;
    } else {

      position.x += position_increment;
    }

    cardTexture_m = LoadTexture(image_path.c_str());
    DrawTexture(cardTexture_m, 50, 50, BLUE);

    DrawTextureV(cardTexture_m, position, WHITE);
    } while (IsMouseButtonPressed(MOUSE_LEFT_BUTTON));

    // cardTexture_m =
    //     LoadTexture(image_path.c_str());
    // DrawTexture(cardTexture_m, 100, 100, BLUE);
    // Vector2 position = {100,100}  ;
    //     DrawTextureV(cardTexture_m, position, WHITE)  ;
  }    
}
