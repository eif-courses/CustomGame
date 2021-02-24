//
// Created by Marius on 2/24/2021.
//

#include "Inventory.h"

void Inventory::Display() {
  for (int i = 0; i < items.size(); ++i) {
    cout << "============================\n";
    cout << (i+1) <<". "<< items[i].GetName() <<"[ " <<items[i].GetType() <<" ]"<< endl;
    cout << "============================\n";
    for (const Stat& s: items[i].GetStats()){
      cout << s.GetName() << " " << s.GetValue() << endl;
    }
    cout << "============================\n";
    cout <<"Sell price:" <<items[i].GetPrice() <<" gold" << endl;

  }

}

void Inventory::Add(Item item) {
  items.emplace_back(item);
}
// ARMOR SHIELD WEAPON
void Inventory::Equip(Item item) {
  characterEquippedItems.insert(pair<string, Item>(item.GetType(), item));
  characterEquippedItems.at(item.GetType()) = item; // Atnaujinti reiksme pagal KEY -> raktini zodi
}

int Inventory::ItemCount() {
  return items.size();
}

const vector<Item> &Inventory::GetItems() const {
  return items;
}

const map<string, Item> &Inventory::GetCharacterEquippedItems() const {
  return characterEquippedItems;
}

void Inventory::DisplayEquippedItems() {
  for (const auto& it: characterEquippedItems) {
    cout << "============================\n";
    cout << it.first <<" " << it.second.GetName()<< endl;
    cout << "============================\n";
    for (const Stat& s: it.second.GetStats()){
      cout << s.GetName() << " " << s.GetValue() << endl;
    }
    cout << "============================\n";
    cout <<"Sell price:" <<it.second.GetPrice() <<" gold" << endl;
  }
}

