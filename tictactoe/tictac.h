#ifndef TICTAC_H_INCLUDED
#define TICTAC_H_INCLUDED
#include <iostream>


class TicTacToe{

public:
char board[4][4];	
float satir;//bu analiz k�sm�nda satir yuzdesidir
float sutun;//bu analiz kisminda sutun yuzdesidir
float kosegen;
TicTacToe();//default constructor
TicTacToe(float,float);
void menu();
int kazanan(int,int,char);//kazanan belirlenir
void basla(int,int,char);//her seferinde  tekrar tablo gelir ona g�re doldurulur	

	


};

TicTacToe  operator +(TicTacToe s1,TicTacToe s2) ;//sat�r analizi ve sutun analizini tutan farkl� nesneler toplanarak tek bir nesneye atan�r

void Analiz(int,int,int);//x takiminin analizini yapar
void Analiz2(int,int,int);//O takiminin analizini yapar


#endif
