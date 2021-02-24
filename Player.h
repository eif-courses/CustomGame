//
// Created by Marius on 2/24/2021.
//

#ifndef CUSTOMGAME_PLAYER_H
#define CUSTOMGAME_PLAYER_H


class Player {
public:
  double GetGold() const;
  void SetGold(double gold);

private:
  double gold = 100;
  int id;

};


#endif //CUSTOMGAME_PLAYER_H
