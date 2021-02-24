//
// Created by Marius on 2/24/2021.
//

#ifndef CUSTOMGAME_INVENTORY_H
#define CUSTOMGAME_INVENTORY_H

#include <map>
#include "Item.h"
#include "Player.h"
#include <set>
class Inventory {

public:
  void Display();
  void DisplayEquippedItems();
  void Add(Item item);
  void Equip(Item item);
  int ItemCount();
  const vector<Item> &GetItems() const;
  const map<string, Item> &GetCharacterEquippedItems() const;

private:

  vector<Item> items;
  // SHIELD, Item(name, price, type);
  map<string, Item> characterEquippedItems;

  // items = ITem, Item, Item
  // characterEquippedItems = ("SHIELD", Item), ("W", Item), ("G", Item)


};


#endif //CUSTOMGAME_INVENTORY_H
