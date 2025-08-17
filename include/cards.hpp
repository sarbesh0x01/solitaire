#pragma once

#include <filesystem>
#include <iostream>
#include <raylib.h>
#include <string>
#include <vector>

enum class SUITE {
  HEART,
  SPADE,
  DIAMOND,
  CLUBS,
  NOTHING
};

typedef struct {
  bool is_faceup;
  int rank;
  Vector2 position;
    SUITE card_suit;
} CardInformation;

class Cards {
public:
    Cards();
  Cards(CardInformation Info);
  void LoadFileAndName();
  void LoadMetaData();
    CardInformation ParseFileName(std::string);

private:
  std::string filepath = "../cards/png";
  CardInformation Info_m;
};


