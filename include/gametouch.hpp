#include <raylib.h>
#include <filesystem>
#include <string>
#include <vector>
class GameTouch {

public:
  GameTouch();

  void DrawCard();
  void GetCardFile();
    void LoadAllTexture()  ;


    std::vector<std::string> filename;
    std::vector<Texture2D>   cardtexture;
    int current_card_index = 0;  
    

private:
  std::string card_filepath;


  

    

};
