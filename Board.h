#ifndef _HOME_VSWNGJS_TERM_BOARD_H_
#define _HOME_VSWNGJS_TERM_BOARD_H_
#include <string>
#include <
class Board {
 public:
  Board(int size);                               //보드 만들기 
  void putStone(int x, int y);                       //입력 받은 좌표의 상태를 바꾸기
  std::string printBoard();

  vector<vector<char>> board;                   // board 변수
};

#endif  // _HOME_VSWNGJS_TERM_BOARD_H_"
