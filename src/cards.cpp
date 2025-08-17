#include "cards.hpp"

Cards::Cards(CardInformation Info) : Info_m(Info) {}
Cards::Cards() {}

void Cards::LoadFileAndName() {
  // Printout all the file name in the file path
  int count = 0;
  CardInformation getCardInfo;
  for (const std::filesystem::directory_entry &entry :
       std::filesystem::directory_iterator(filepath)) {
    std::string filepath = entry.path().filename();
    size_t lastindex = filepath.find_last_of('.');
	 std::string rawname = filepath.substr(0, lastindex);
         ParseFileName(rawname);
	 SetTexture(entry.path().string());
	 break;
    // Modify the string that i get from the file name,
    //
    // read that string and then i will add metadata for card as
    // Create all 52 cards object with each of their own rank, their suit , and
    // their position, and // other things
    // how do i check only the first file it gets
  }
}

CardInformation Cards::ParseFileName(std::string cardfile) {
  // example file name : 9_0f_clubs.png
  // Have it as a delimiter so i can take different parts of the string
  size_t pos = 0;

  std::string delimiter = "_";
  std::vector<std::string> tokens;
  std::string token;
  CardInformation card_info;
  // pos takes the string from the file and tries to find the delimiter in it.

  while ((pos = cardfile.find(delimiter)) != std::string::npos) {
    token = cardfile.substr(0, pos);
    tokens.push_back(token);
    cardfile.erase(0, pos + delimiter.length());
  }

  tokens.push_back(cardfile);

  for (auto i : tokens) {
       std::cout << i ;
  }

  // std::cout << tokens.at(1) << std::endl;

  

  card_info.is_faceup = false;
  // if (token.at(2) == "")
  card_info.position = {0, 0};
  card_info.rank = 0;

  return card_info;

  // 9_of_clubs.png as
  // 9
  // of
  // clubs
  // Need to take 9 as a rank
  // clubs as a suit
  // Will be face_down || !face_up initally
  // Will Not have any position initally

  // I will be back in a some time
}


void Cards::SetTexture(std::string texture) {
     
     
     
  }

int main() {
  Cards card;
  card.LoadFileAndName();
  return 0;
}
