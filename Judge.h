#ifndef _HOME_VSWNGJS_TERM_JUDGE_H_
#define _HOME_VSWNGJS_TERM_JUDGE_H_
#include <string>
#include "Player.h"
#include "Board.h"

class Judge {
 public:
    Judge();
    bool gameFinish();
    bool checkValid(int row, int col);
    bool checkCnt();
    void playerInput();
    void putStone(int row, int col);
    void modStoneStatus();
    void checkScore();
    std::string checkWinner();

 private:
    Board* board_;
    Player p1;
    Player p2;
};
#endif  // _HOME_VSWNGJS_TERM_JUDGE_H_"
