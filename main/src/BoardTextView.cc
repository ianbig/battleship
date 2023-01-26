#include "../headers/BoardTextView.hpp"

BoardTextView::BoardTextView(BoardInterfacePtr && toDisplay) 
: display(std::move(toDisplay)) {}

std::string BoardTextView::displayMyOwnBoard() {
  std::string boardView;
  return "";
}

std::string BoardTextView::makeHeader() {
  std::string headers = " ";
  std::string sep = " ";
  for (size_t i = 0; i < display->getWidth(); i++) {
    headers += sep;
    headers += std::to_string(i);
    sep = "|";
  }

  headers += "\n";

  return headers; // RVO for optimization
}