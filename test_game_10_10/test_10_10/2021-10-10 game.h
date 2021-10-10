#include<stdio.h>
#define ROW 3
#define COL 3

#include<stdlib.h>
#include<time.h>
#include <stdlib.h>

void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row,int col);
void ComputerMove(char board[ROW][COL], int row, int col);


//玩家赢 '*'
//电脑赢 '#'
//平局   'Q'
//继续   'C'
char IsWin(char board[ROW][COL], int row, int col);