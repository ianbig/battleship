#ifndef __BATTLESHIPBOARD_HPP
#define __BATTLESHIPBOARD_HPP

class BattleShipBoard {
  private:
  const int width;
  const int height;
  public:
  BattleShipBoard(int _width, int _height);
  int getWidth() const;
  int getHeight() const;
};

#endif