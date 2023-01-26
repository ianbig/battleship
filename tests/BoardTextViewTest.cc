#include <iostream>
#include <memory>

#include <gtest/gtest.h>

#include "../main/headers/BoardTextView.hpp"
#include "../main/headers/BattleShipBoard.hpp"


TEST(BoardTextViewTest, Construct2By2Board) {
  std::unique_ptr<BoardInterface> board = std::make_unique<BattleShipBoard>(2, 2);
  BoardTextView view(std::move(board));
  std::string expectedHeader = "  0|1\n";

  std::string expected = 
  expectedHeader + 
  std::string("A  |   A\n") +
  std::string("B  |   B\n") +
  expectedHeader;
  EXPECT_EQ(
    view.displayMyOwnBoard(),
    expected
  );
}