#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

#include <time.h>

//符号的的定义
#define ROW 3
#define COL 3


//函数的声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);

//打印棋盘

void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//
//1.玩家赢了 - *
//2.电脑赢了 - #
//3.平局 - Q
//4.游戏继续 - C

char IsWin(char board[ROW][COL], int row, int col);