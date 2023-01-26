#ifndef __BOARD_HPP
#define __BOARD_HPP

#include <iostream>

class BoardInterface {
  public:
  virtual int getWidth() const = 0;
  virtual int getHeight() const = 0;
};

#endif