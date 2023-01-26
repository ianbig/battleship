cc_library(
  name = "BoardInterface",
  hdrs = ["headers/Board.hpp"],
)

cc_library(
  name = "BattleShipBoard",
  srcs = ["src/BattleShipBoard.cc"],
  hdrs = ["headers/BattleShipBoard.hpp"],
  deps = ["BoardInterface"],
  visibility = ["//tests:__pkg__"],
)

cc_library(
  name = "BoardTextView",
  srcs = ["src/BoardTextView.cc"],
  hdrs = ["headers/BoardTextView.hpp"],
  deps = ["BoardInterface"],
  visibility = ["//tests:__pkg__"],
)