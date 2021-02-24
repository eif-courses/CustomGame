//
// Created by Marius on 2/24/2021.
//

#ifndef CUSTOMGAME_SHOP_H
#define CUSTOMGAME_SHOP_H


#include "Item.h"
#include "Player.h"

class Shop {

public:
  void Sell(Item item, Player &player);
  void Buy();

  const vector<Item> &GetItems() const;

private:
  vector<Item> items;

};


#endif //CUSTOMGAME_SHOP_H
