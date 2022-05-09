#ifndef TICTAC_H_INCLUDED
#define TICTAC_H_INCLUDED
#include <iostream>


class TicTacToe{

public:
char board[4][4];	
float satir;//bu analiz kýsmýnda satir yuzdesidir
float sutun;//bu analiz kisminda sutun yuzdesidir
float kosegen;
TicTacToe();//default constructor
TicTacToe(float,float);
void menu();
int kazanan(int,int,char);//kazanan belirlenir
void basla(int,int,char);//her seferinde  tekrar tablo gelir ona göre doldurulur	

	


};

TicTacToe  operator +(TicTacToe s1,TicTacToe s2) ;//satýr analizi ve sutun analizini tutan farklý nesneler toplanarak tek bir nesneye atanýr

void Analiz(int,int,int);//x takiminin analizini yapar
void Analiz2(int,int,int);//O takiminin analizini yapar


#endif
