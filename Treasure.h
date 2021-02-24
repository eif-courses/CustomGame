//
// Created by Marius on 2/24/2021.
//

#ifndef CUSTOMGAME_TREASURE_H
#define CUSTOMGAME_TREASURE_H

#include <fstream>
#include "Item.h"
#include <windows.h>
class Treasure {
public:
  void Generate();
  explicit Treasure(const string &imageUrl);
  void Add(Item item);
  const string &GetImageUrl() const;
  const vector<Item> &GetItems() const;
  void DisplayInBrowser();
private:
  string imageURL;
  vector<Item> items;

};


#endif //CUSTOMGAME_TREASURE_H
