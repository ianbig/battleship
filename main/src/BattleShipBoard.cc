#include <stdexcept>

#include "../headers/BattleShipBoard.hpp"

BattleShipBoard::BattleShipBoard(int _width, int _height) : width(_width), height(_height) {
  if (_width <= 0) {
    throw std::invalid_argument("width should be larger than zero");
  }

  if (_height <= 0) {
    throw std::invalid_argument("height should be larger than zero");
  }
}

int BattleShipBoard::getWidth() const {
  return width;
}

int BattleShipBoard::getHeight() const {
  return height;
}
