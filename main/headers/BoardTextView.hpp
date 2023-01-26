#ifndef __BOARD_TEXT_VIEW_HPP
#define __BOARD_TEXT_VIEW_HPP

#include "../headers/Board.hpp"
#include <iostream>
#include <memory>

using BoardInterfacePtr = std::unique_ptr<BoardInterface>;
std::string symbolStr[26] = 
            {
              "A", "B", "C", "D", 
              "E", "F", "G", "H", 
              "I", "J", "K", "L",
              "M", "N", "O", "P",
              "Q", "R", "S", "T",
              "U", "V", "W", "X",
              "Y", "Z"
            };

class BoardTextView {
  private:
  std::unique_ptr<BoardInterface> toDisplay;
  std::string makeHeader();
  std::string makeRow(size_t i);
  public:
  BoardTextView(BoardInterfacePtr && _toDisplay);
  std::string displayMyOwnBoard();
};

#endif