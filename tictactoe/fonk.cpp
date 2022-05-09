#include <iostream>
#include "tictac.h"
 
using namespace std;

TicTacToe::TicTacToe(float a,float b)
{
	satir=a;
	sutun=b;
}
void Analiz(int a,int b,int c )
{
	cout <<a<<b<<c;
float s_analiz,su_analiz,kosegen;
s_analiz=float(a)/16*100;
su_analiz=(float(b)/16)*100;
kosegen=float(c)/8*100;
TicTacToe s1(s_analiz,0);
TicTacToe s2(0,su_analiz);
TicTacToe s4(0,0);
s4=s1+s2;
cout<<" analiz yapilior "<<endl;
cout<<"  SATIR      SUTUN       KOSEGEN  "<<endl;

cout<<" X     %"<<s4.satir<<"     % " << s4.sutun<<"      % "<<kosegen<<endl;
}

void Analiz2(int a,int b,int c)
{
float s_analiz,su_analiz,kosegen;
s_analiz=(float(a)/16)*100;
su_analiz=(float(b)/16)*100;
kosegen=(float(c)/8)*100;
TicTacToe s1(s_analiz,0);
TicTacToe s2(0,su_analiz);
TicTacToe s4(0,0);
s4=s1+s2;

cout<<"Y      %"<<s4.satir<<"     %" << s4.sutun<<"       "<<"  %"<<kosegen<<endl;
}
TicTacToe operator + (TicTacToe s1,TicTacToe s2)
{
	TicTacToe YM(0,0);
	YM.satir=s1.satir+s2.satir;
	YM.sutun=s2.sutun+s1.sutun;

	return  YM;
}
void TicTacToe::menu ()
{
cout<<"1.oyuncu X i kullanir;"<<endl;
cout<<"2.oyuncu O karakterii kullanýr"<<endl;	
cout<<"3.oyuncu x karakterii kullanýr"<<endl;
cout<<"4.oyuncu o karakterii kullanýr"<<endl;

}



TicTacToe::TicTacToe()
{
board[0][0]=' ';board[0][1]=' ';board[0][2]=' ';board[0][3]=' ';
board[1][0]=' ';board[1][1]=' ';board[1][2]=' ';board[1][3]=' ';	
board[2][0]=' ';board[2][1]=' ';board[2][2]=' ';board[2][3]=' ';
board[3][0]=' ';board[3][1]=' ';board[3][2]=' ';board[3][3]=' ';

cout<<"\t\t\t   0   1   2   3 "<<endl; 	
cout<<"\t\t\t0| "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<" | "<<board[0][3]<<" |"<<endl;
cout<<"\t\t\t  ---------------"<<endl;
cout<<"\t\t\t1| "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<" | "<<board[1][3]<<" |"<<endl;
cout<<"\t\t\t  ---------------"<<endl;
cout<<"\t\t\t2| "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<" | "<<board[2][3]<<" |"<<endl;
cout<<"\t\t\t  ---------------"<<endl;
cout<<"\t\t\t3| "<<board[3][0]<<" | "<<board[3][1]<<" | "<<board[3][2]<<" | "<<board[3][3]<<" |"<<endl;
cout<<"\t\t\t  ---------------"<<endl;	
}
void TicTacToe::basla(int a,int b,char c)

{
board[a][b]=c;
cout<<"\t\t\t   0   1   2   3 "<<endl; 	
cout<<"\t\t\t0| "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<" | "<<board[0][3]<<" |"<<endl;
cout<<"\t\t\t  ---------------"<<endl;
cout<<"\t\t\t1| "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<" | "<<board[1][3]<<" |"<<endl;
cout<<"\t\t\t  ---------------"<<endl;
cout<<"\t\t\t2| "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<" | "<<board[2][3]<<" |"<<endl;
cout<<"\t\t\t  ---------------"<<endl;
cout<<"\t\t\t3| "<<board[3][0]<<" | "<<board[3][1]<<" | "<<board[3][2]<<" | "<<board[3][3]<<" |"<<endl;
cout<<"\t\t\t  ---------------"<<endl;
	
	
	
}


int TicTacToe::kazanan(int a,int b,char c)
{

 
        if(board[0][0] == 'X'  && board[0][1] == 'x'  && board[0][2] == 'x'   &&board[0][3] == 'X' )
          return 1;
           if(board[0][0] == 'x'  && board[0][1] == 'X'  && board[0][2] == 'X'   &&board[0][3] == 'x' )
          return 1;
           if(board[0][0] == 'X'  && board[0][1] == 'X'  && board[0][2] == 'x'   &&board[0][3] == 'x' )
          return 1;
           if(board[0][0] == 'x'  && board[0][1] == 'x'  && board[0][2] == 'X'   &&board[0][3] == 'X' )
          return 1;
          
        //if((board[1][0] == 'X' || board[1][0] == 'x' ) && (board[1][1] == 'X' || board[1][1] == 'x' ) && (board[1][2] == 'X' || board[1][2] == 'x' ) &&(board[1][3] == 'X' || board[1][3] == 'x' ))
          //return 1;   
	    
	     if(board[1][0] == 'X'  && board[1][1] == 'x'  && board[2][2] == 'x'   &&board[3][3] == 'X' )
          return 1;
           if(board[1][0] == 'x'  && board[1][1] == 'X'  && board[2][2] == 'X'   &&board[3][3] == 'x' )
          return 1;
           if(board[1][0] == 'X'  && board[1][1] == 'X'  && board[2][2] == 'x'   &&board[3][3] == 'x' )
          return 1;
           if(board[1][0] == 'x'  && board[1][1] == 'x'  && board[2][2] == 'X'   &&board[3][3] == 'X' )
          return 1;
	
	     
	    if( board[2][0] == 'X'  && board[2][1] == 'x'  && board[2][2] == 'x'   && board[3][3] == 'X' )
          return 1;
           if( board[2][0] == 'x'  && board[2][1] == 'X'  && board[2][2] == 'X'   && board[3][3] == 'x' )
          return 1;
           if(board[2][0] == 'X'  && board[2][1] == 'X'  && board[2][2] == 'x'   && board[3][3] == 'x' )
          return 1;
           if(board[2][0] == 'x'  && board[2][1] == 'x'  && board[2][2] == 'X'   && board[3][3] == 'X' )
          return 1;  
  
          if(board[3][0] == 'X'  && board[3][1] == 'x'  && board[3][2] == 'x'   &&board[3][3] == 'X' )
          return 1;
           if(board[3][0] == 'x'  && board[3][1] == 'X'  && board[3][2] == 'X'   &&board[3][3] == 'x' )
          return 1;
           if(board[3][0] == 'X'  && board[3][1] == 'X'  && board[3][2] == 'x'   &&board[3][3] == 'x' )
          return 1;
           if(board[3][0] == 'x'  && board[3][1] == 'x'  && board[3][2] == 'X'   &&board[3][3] == 'X' )
          return 1;
          
          if(board[0][0] == 'X'  && board[1][0] == 'x'  && board[2][0] == 'x'   &&board[3][0] == 'X' )
          return 1;
           if(board[0][0] == 'x'  && board[1][0] == 'X'  && board[2][0] == 'X'   &&board[3][0] == 'x' )
          return 1;
           if(board[0][0] == 'X'  && board[1][0] == 'X'  && board[2][0] == 'x'   &&board[3][0] == 'x' )
          return 1;
           if(board[0][0] == 'x'  && board[1][0] == 'x'  && board[2][0] == 'X'   &&board[3][0] == 'X' )
          return 1;

         
           if(board[0][1] == 'X'  && board[1][1] == 'x'  && board[2][1] == 'x'   &&board[3][1] == 'X' )
          return 1;
           if(board[0][1] == 'x'  && board[1][1] == 'X'  && board[2][1] == 'X'   &&board[3][1] == 'x' )
          return 1;
           if(board[0][1] == 'X'  && board[1][1] == 'X'  && board[2][1] == 'x'   &&board[3][1] == 'x' )
          return 1;
           if(board[0][1] == 'x'  && board[1][1] == 'x'  && board[2][1] == 'X'   &&board[3][1] == 'X' )
          return 1;
          
 
	    if(board[0][2] == 'X'  && board[1][2] == 'x'  && board[2][2] == 'x'   &&board[3][2] == 'X' )
          return 1;
           if(board[0][2] == 'x'  && board[1][2] == 'X'  && board[2][2] == 'X'   &&board[3][2] == 'x' )
          return 1;
           if(board[0][2] == 'X'  && board[1][2] == 'X'  && board[2][2] == 'x'   &&board[3][2] == 'x' )
          return 1;
           if(board[0][2] == 'x'  && board[1][2] == 'x'  && board[2][2] == 'X'   &&board[3][2] == 'X' )
          return 1; 
	     
         if(board[0][3] == 'X'  && board[1][3] == 'x'  && board[2][3] == 'x'   &&board[3][3] == 'X' )
          return 1;
           if(board[0][3] == 'x'  && board[1][3] == 'X'  && board[2][3] == 'X'   &&board[3][3] == 'x' )
          return 1;
           if(board[0][3] == 'X'  && board[1][3] == 'X'  && board[2][3] == 'x'   &&board[3][3] == 'x' )
          return 1;
           if(board[0][3] == 'x'  && board[1][3] == 'x'  && board[2][3] == 'X'   &&board[3][3] == 'X' )
          return 1;
          
          if(board[0][0] == 'X'  && board[1][1] == 'x'  && board[2][2] == 'x'   &&board[3][3] == 'X' )
          return 1;
           if(board[0][0] == 'x'  && board[1][1] == 'X'  && board[2][2] == 'X'   &&board[3][3] == 'x' )
          return 1;
           if(board[0][0] == 'X'  && board[1][1] == 'X'  && board[2][2] == 'x'   &&board[3][3] == 'x' )
          return 1;
           if(board[0][0] == 'x'  && board[1][1] == 'x'  && board[2][2] == 'X'   &&board[3][3] == 'X' )
          return 1;
          
           if(board[3][3] == 'X'  && board[1][2] == 'x'  && board[2][1] == 'x'   &&board[0][0] == 'X' )
          return 1;
           if(board[3][3] == 'x'  && board[1][2] == 'X'  && board[2][1] == 'X'   &&board[0][0] == 'x' )
          return 1;
           if(board[3][3] == 'X'  && board[1][2] == 'X'  && board[2][1] == 'x'   && board[0][0] == 'x' )
          return 1;
           if(board[3][3] == 'x'  && board[1][2] == 'x'  && board[2][1] == 'X'   &&board[0][0] == 'X' )
          return 1;
//O takýmý için kazanmakontrol

        if(board[0][0] == 'O'  && board[0][1] == 'o'  && board[0][2] == 'o'   &&board[0][3] == 'O' )
          return 2;
           if(board[0][0] == 'o'  && board[0][1] == 'O'  && board[0][2] == 'O'   &&board[0][3] == 'o' )
          return 2;
           if(board[0][0] == 'O'  && board[0][1] == 'O'  && board[0][2] == 'o'   &&board[0][3] == 'o' )
          return 2;
           if(board[0][0] == 'o'  && board[0][1] == 'o'  && board[0][2] == 'O'   &&board[0][3] == 'O' )
          return 2;
          
        //if((board[1][0] == 'X' || board[1][0] == 'x' ) && (board[1][1] == 'X' || board[1][1] == 'x' ) && (board[1][2] == 'X' || board[1][2] == 'x' ) &&(board[1][3] == 'X' || board[1][3] == 'x' ))
          //return 1;   
	    
	     if(board[1][0] == 'O'  && board[1][1] == 'o'  && board[2][2] == 'o'   &&board[3][3] == 'O' )
          return 2;
           if(board[1][0] == 'o'  && board[1][1] == 'O'  && board[2][2] == 'O'   &&board[3][3] == 'o' )
          return 2;
           if(board[1][0] == 'O'  && board[1][1] == 'O'  && board[2][2] == 'o'   &&board[3][3] == 'o' )
          return 2;
           if(board[1][0] == 'o'  && board[1][1] == 'o'  && board[2][2] == 'O'   &&board[3][3] == 'O' )
          return 2;
	    
	        
	    if(board[2][0] == 'O'  && board[2][1] == 'o'  && board[2][2] == 'o'   &&board[3][3] == 'O' )
          return 2;
           if(board[2][0] == 'o'  && board[2][1] == 'O'  && board[2][2] == 'O'   &&board[3][3] == 'o' )
          return 2;
           if(board[2][0] == 'O'  && board[2][1] == 'O'  && board[2][2] == 'o'   &&board[3][3] == 'o' )
          return 2;
           if(board[2][0] == 'o'  && board[2][1] == 'o'  && board[2][2] == 'O'   &&board[3][3] == 'O' )
          return 2;  
 
          if(board[3][0] == 'O'  && board[3][1] == 'o'  && board[3][2] == 'o'   &&board[3][3] == 'O' )
          return 2;
           if(board[3][0] == 'o'  && board[3][1] == 'O'  && board[3][2] == 'O'   &&board[3][3] == 'o' )
          return 2;
           if(board[3][0] == 'O'  && board[3][1] == 'O'  && board[3][2] == 'o'   &&board[3][3] == 'o' )
          return 2;
           if(board[3][0] == 'o'  && board[3][1] == 'o'  && board[3][2] == 'O'   &&board[3][3] == 'O' )
          return 2;
	          
          if(board[0][0] == 'O'  && board[1][0] == 'o'  && board[2][0] == 'o'   &&board[3][0] == 'O' )
          return 2;
           if(board[0][0] == 'o'  && board[1][0] == 'O'  && board[2][0] == 'O'   &&board[3][0] == 'o' )
          return 2;
           if(board[0][0] == 'O'  && board[1][0] == 'O'  && board[2][0] == 'o'   &&board[3][0] == 'o' )
          return 2;
           if(board[0][0] == 'o'  && board[1][0] == 'o'  && board[2][0] == 'O'   &&board[3][0] == 'O' )
          return 2;
	    	               
           if(board[0][1] == 'O'  && board[1][1] == 'o'  && board[2][1] == 'o'   &&board[3][1] == 'O' )
          return 2;
           if(board[0][1] == 'o'  && board[1][1] == 'O'  && board[2][1] == 'O'   &&board[3][1] == 'o' )
          return 2;
           if(board[0][1] == 'O'  && board[1][1] == 'O'  && board[2][1] == 'o'   &&board[3][1] == 'o' )
          return 2;
           if(board[0][1] == 'o'  && board[1][1] == 'o'  && board[2][1] == 'O'   &&board[3][1] == 'O' )
          return 2;
	      
	    if(board[0][2] == 'O'  && board[1][2] == 'o'  && board[2][2] == 'o'   &&board[3][2] == 'O' )
          return 2;
           if(board[0][2] == 'o'  && board[1][2] == 'O'  && board[2][2] == 'O'   &&board[3][2] == 'o' )
          return 2;
           if(board[0][2] == 'O'  && board[1][2] == 'O'  && board[2][2] == 'o'   &&board[3][2] == 'o' )
          return 2;
           if(board[0][2] == 'o'  && board[1][2] == 'o'  && board[2][2] == 'O'   &&board[3][2] == 'O' )
          return 2; 
 
         if(board[0][3] == 'O'  && board[1][3] == 'o'  && board[2][3] == 'o'   &&board[3][3] == 'O' )
          return 2;
           if(board[0][3] == 'o'  && board[1][3] == 'O'  && board[2][3] == 'O'   &&board[3][3] == 'o' )
          return 2;
           if(board[0][3] == 'O'  && board[1][3] == 'O'  && board[2][3] == 'o'   &&board[3][3] == 'o' )
          return 2;
           if(board[0][3] == 'o'  && board[1][3] == 'o'  && board[2][3] == 'O'   &&board[3][3] == 'O' )
          return 2;
          
          if(board[0][0] == 'O'  && board[1][1] == 'o'  && board[2][2] == 'o'   &&board[3][3] == 'O' )
          return 2;
           if(board[0][0] == 'o'  && board[1][1] == 'O'  && board[2][2] == 'O'   &&board[3][3] == 'o' )
          return 2;
           if(board[0][0] == 'O'  && board[1][1] == 'O'  && board[2][2] == 'o'   &&board[3][3] == 'o' )
          return 2;
           if(board[0][0] == 'o'  && board[1][1] == 'o'  && board[2][2] == 'O'   &&board[3][3] == 'O' )
          return 2;
  
           if(board[3][3] == 'O'  && board[1][2] == 'o'  && board[2][1] == 'o'   &&board[0][0] == 'O' )
          return 2;
           if(board[3][3] == 'o'  && board[1][2] == 'O'  && board[2][1] == 'O'   &&board[0][0] == 'o' )
          return 2;
           if(board[3][3] == 'O'  && board[1][2] == 'O'  && board[2][1] == 'o'   && board[0][0] == 'o' )
          return 2;
           if(board[3][3] == 'o'  && board[1][2] == 'o'  && board[2][1] == 'O'   &&board[0][0] == 'O' )
          return 2;
          
        return 3;
}
