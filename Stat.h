//
// Created by Marius on 2/23/2021.
//

#ifndef CUSTOMGAME_STAT_H
#define CUSTOMGAME_STAT_H
#include <iostream>

using namespace std;

class Stat {
private:
  string name;
  double value;
public:
  Stat(const string &name, double value);
  const string &GetName() const;
  double GetValue() const;
};


#endif //CUSTOMGAME_STAT_H
