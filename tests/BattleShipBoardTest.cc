#include <stdexcept>
#include <gtest/gtest.h>

#include "../main/headers/BattleShipBoard.hpp"

TEST(BattleShipBoardTest, ConstructorTest) {
  BattleShipBoard board(10, 20);
  EXPECT_EQ(board.getWidth(), 10) << "widht should be 10";
  EXPECT_EQ(board.getHeight(), 20) << "height should be 20";

  EXPECT_THROW(
    {
      BattleShipBoard boad(-10, 20);
    }, std::invalid_argument
  );

  EXPECT_THROW(
    {
      BattleShipBoard boad(10, -20);
    }, std::invalid_argument
  );

  EXPECT_THROW(
    {
      BattleShipBoard boad(10, 0);
    }, std::invalid_argument
  );

  EXPECT_THROW(
    {
      BattleShipBoard boad( 0, 20);
    }, std::invalid_argument
  );
}