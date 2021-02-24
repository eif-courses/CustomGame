//
// Created by Marius on 2/23/2021.
//

#ifndef CUSTOMGAME_ITEM_H
#define CUSTOMGAME_ITEM_H
#include <iostream>
#include <vector>
#include "Stat.h"
using namespace std;

class Item {

public:

  Item(const string &name, double price, const string &type);

  const string &GetName() const;
  double GetPrice() const;
  double GetId() const;
  const string &GetType() const;
  const vector<Stat> &GetStats() const;
  void AddPower(const Stat &stat);

  void SetPrice(double price);


private:
  double id;
  string name;
  double price;
  string type;
  vector<Stat> stats; // statsu
};


#endif //CUSTOMGAME_ITEM_H
