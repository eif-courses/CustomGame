//
// Created by Marius on 2/24/2021.
//

#include "Player.h"

double Player::GetGold() const {
  return gold;
}

void Player::SetGold(double g) {
  Player::gold = g;
}
