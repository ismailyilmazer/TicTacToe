#include <iostream>
#include "tictac.h"


using namespace std;


int main()
{
int a,b,i;
char c;
int sayac;
TicTacToe player;
int sutun,sutun_O,satir,satir_O,kosegen,kosegen_O;
sutun=sutun_O=satir=satir_O=kosegen_O=kosegen=0;
for(i=0;i<4;i++)
{


cout<<"sira player1 de satir ve sutun sec karakterin X"<<endl;
cin>>a;
cin>>b;
cout<<"karakterini gir"<<endl;
cin>>c;
player.basla(a,b,c);
player.kazanan(a,b,c);
sayac=player.kazanan(a,b,c);
sutun++;
satir++;

if((a==0 && b==0) || (a==1 && b==1) || (a==2 && b==2) || (a==3 && b==3) || (a=0 && b==3 ) || (a==1 && b==2) || (a==2 && b==1) || (a==3) && (b==0))
kosegen++;
if(sayac==1)
{  
cout<<"tebrikler X takimi kazandi"<<endl;	
Analiz(satir,sutun,kosegen);
Analiz2(satir_O,sutun_O,kosegen_O);
return 0;
}
if(sayac==2)
{  
cout<<"tebrikler O takimi kazandi"<<endl;
Analiz(satir,sutun,kosegen);
Analiz2(satir_O,sutun_O,kosegen_O);
	return 0;
}
cout<<"sira player2 de satir ve sutun sec karakterin O"<<endl;
cin>>a;
cin>>b;
cout<<"karakterini gir"<<endl;
cin>>c;
sutun_O++;
satir_O++;
player.basla(a,b,c);
player.kazanan(a,b,c);
sayac=player.kazanan(a,b,c);
if((a==0 && b==0) || (a==1 && b==1) || (a==2 && b==2) || (a==3 && b==3) || (a=0 && b==3 ) || (a==1 && b==2) || (a==2 && b==1) || (a==3) && (b==0))
kosegen_O++;

if(sayac==1)
{  
cout<<"tebrikler X takimi kazandi"<<endl;
Analiz(satir,sutun,kosegen);
Analiz2(satir_O,sutun_O,kosegen_O);
	return 0;
}
if(sayac==2)
{  cout<<"tebrikler O takimi kazandi"<<endl;
Analiz(satir,sutun,kosegen);
Analiz2(satir_O,sutun_O,kosegen_O);
	return 0;
}
cout<<"sira player3 de satir ve sutun sec karakterin x"<<endl;
cin>>a;
cin>>b;
cout<<"karakterini gir"<<endl;
cin>>c;

sutun++;
satir++;
player.basla(a,b,c);
player.kazanan(a,b,c);
sayac=player.kazanan(a,b,c);
if((a==0 && b==0) || (a==1 && b==1) || (a==2 && b==2) || (a==3 && b==3) || (a=0 && b==3 ) || (a==1 && b==2) || (a==2 && b==1) || (a==3) && (b==0))
kosegen++;
if(sayac==1)
{  
cout<<"tebrikler X takimi kazandi"<<endl;
Analiz(satir,sutun,kosegen);
Analiz2(satir_O,sutun_O,kosegen_O);
	return 0;
}
if(sayac==2)
{  
cout<<"tebrikler O takimi kazandi"<<endl;
Analiz(satir,sutun,kosegen);
Analiz2(satir_O,sutun_O,kosegen_O);
	return 0;
}
cout<<"sira player4 de satir ve sutun sec karakterin o"<<endl;
cin>>a;
cin>>b;
cout<<"karakterini gir"<<endl;
cin>>c;
sutun_O++;
satir_O++;
player.basla(a,b,c);
player.kazanan(a,b,c);
sayac=player.kazanan(a,b,c);
if((a==0 && b==0) || (a==1 && b==1) || (a==2 && b==2) || (a==3 && b==3) || (a=0 && b==3 ) || (a==1 && b==2) || (a==2 && b==1) || (a==3) && (b==0))
kosegen_O++;

if(sayac==1)
{  
cout<<"tebrikler X takimi kazandi"<<endl;
Analiz(satir,sutun,kosegen);
Analiz2(satir_O,sutun_O,kosegen_O);	
return 0;
}
if(sayac==2)
{  
cout<<"tebrikler O takimi kazandi"<<endl;	
Analiz(satir,sutun,kosegen);
Analiz2(satir_O,sutun_O,kosegen_O);
return 0;
}

}
cout<<"berabere :("<<endl;
return 0;
}
