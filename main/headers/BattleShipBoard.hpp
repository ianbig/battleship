#ifndef __BATTLESHIPBOARD_HPP
#define __BATTLESHIPBOARD_HPP

#include "../headers/Board.hpp"

class BattleShipBoard : public BoardInterface {
  private:
  const int width;
  const int height;
  public:
  BattleShipBoard(int _width, int _height);
  int getWidth() const override;
  int getHeight() const override;
};

#endif