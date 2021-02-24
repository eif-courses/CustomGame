//
// Created by Marius on 2/23/2021.
//

#include "Stat.h"

const string &Stat::GetName() const {
  return name;
}

double Stat::GetValue() const {
  return value;
}

Stat::Stat(const string &name, double value) : name(name), value(value) {}
