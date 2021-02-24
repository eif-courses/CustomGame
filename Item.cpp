//
// Created by Marius on 2/23/2021.
//

#include "Item.h"

const string &Item::GetName() const {
  return name;
}

double Item::GetPrice() const {
  return price;
}

const vector<Stat> &Item::GetStats() const {
  return stats;
}

void Item::AddPower(const Stat &s) {
  stats.emplace_back(s);
}

Item::Item(const string &name, double price, const string &type) : name(name), price(price), type(type) {
  Stat health("HEALTH", price / 10);
  Stat attack("ATTACK", price / 20);
  Stat resistance("RESISTANCE", price / 50);
  AddPower(health);
  AddPower(attack);
  AddPower(resistance);
  id = 15.0 * price;



}

const string &Item::GetType() const {
  return type;
}

double Item::GetId() const {
  return id;
}

void Item::SetPrice(double price) {
  Item::price = price;
}



