#ifndef BOARD_H
#define BOARD_H

class Board
{
    public:
    Board();
    void init(self);
    int getSize(self);
    string getWinner(self);
    void set(self, cell ,sign);
    void isEmpty(self,cell);
    void isDone(self);
    string show(self);



}
