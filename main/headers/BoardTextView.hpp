#ifndef __BOARD_TEXT_VIEW_HPP
#define __BOARD_TEXT_VIEW_HPP

#include "../headers/Board.hpp"
#include <iostream>
#include <memory>

using BoardInterfacePtr = std::unique_ptr<BoardInterface>;

class BoardTextView {
  private:
  std::unique_ptr<BoardInterface> display;
  std::string makeHeader();
  public:
  BoardTextView(BoardInterfacePtr && toDisplay);
  std::string displayMyOwnBoard();
};

#endif