//
// Created by Marius on 2/24/2021.
//

#include "Shop.h"



const vector<Item> &Shop::GetItems() const {
  return items;
}

void Shop::Sell(Item item, Player &player) {
  item.SetPrice(item.GetPrice() * 2);
  items.emplace_back(item);
  player.SetGold(player.GetGold() + item.GetPrice());
}
