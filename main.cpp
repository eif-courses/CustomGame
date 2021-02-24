#include <iostream>
#include "Item.h"
#include "Inventory.h"
#include "Shop.h"
#include "Treasure.h"


int main() {

  Player player;
  Shop shop;
  Inventory inventory;


  vector<Player> p;


  p.emplace_back(player);
  p.emplace_back(player);
  p.emplace_back(player);






  Item shield("Sun shield", 257.04, "SHIELD");
  Item shield2("Moon shield", 222.04, "SHIELD");
  Item plate("Plate mail", 157.04, "PLATE");
  shield.AddPower(Stat("DEFENSE", 22.02));

  inventory.Add(shield2);
  inventory.Add(shield);
  inventory.Add(plate);

  shop.Sell(shield, player);
  shop.Sell(plate, player);


  cout << "----------SHOP ITEMS----------------"<< endl;
  for(const Item& it: shop.GetItems()){
    cout << it.GetName() << ", " << it.GetPrice() << endl;
  }

  cout << "TOTAL GOLD: " << player.GetGold() << endl;

  cout << "----------------------------------------"<< endl;


  Treasure treasure("https://i.pinimg.com/564x/82/44/2c/82442cf8525343e56e8d8e974bceac85.jpg");

  cout << treasure.GetImageUrl() << endl;
  for(Item it: treasure.GetItems())
  cout << it.GetName() << endl;


  treasure.DisplayInBrowser();
















  //inventory.Display();

  for(Item item: inventory.GetItems()){
    inventory.Equip(item);
  }

  inventory.DisplayEquippedItems();










  return 0;
}
