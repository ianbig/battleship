#include "../headers/BoardTextView.hpp"

BoardTextView::BoardTextView(BoardInterfacePtr && _toDisplay) 
: toDisplay(std::move(_toDisplay)) {}

std::string BoardTextView::displayMyOwnBoard() {
  std::string boardView(this->makeHeader());
  for (auto i = 0; i < toDisplay->getHeight(); i++) {
    boardView += makeRow(i);
  }
  boardView += this->makeHeader();
  return boardView;
}

std::string BoardTextView::makeHeader() {
  std::string headers = " ";
  std::string sep = " ";
  for (auto i = 0; i < toDisplay->getWidth(); i++) {
    headers += sep;
    headers += std::to_string(i);
    sep = "|";
  }

  headers += "\n";

  return headers; // RVO for optimization
}

std::string BoardTextView::makeRow(size_t i) {
  std::string sep = "  ";
  std::string curRow = symbolStr[i];
  for (auto i = 0; i < toDisplay->getWidth(); i++) {
    curRow += sep;
    sep = "| ";
  }
  sep = "  ";
  curRow += sep + symbolStr[i] + "\n";
  return curRow;
}