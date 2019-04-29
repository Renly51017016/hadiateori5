#include <stdio.h>
#include <conio.h>
#include <iostream.h>

 main()
 {
 float pendapatan,jasa,komisi,total;
 clrscr();
 cout<<"pendapatan Rp.";cin>>pendapatan;
 if(pendapatan>=0&&pendapatan<=20000000)
 {
 jasa=500000;
 komisi=0.1*pendapatan;
 }
 else if(pendapatan<=5000000)
 {
 jasa=500000;
 komisi=0.1*pendapatan;
 }
 else
 {
 jasa=1000000;
 komisi=0.2*pendapatan;
 }
 total=komisi+jasa;

 cout<<"uang jasa    Rp."<<jasa<<endl;
 cout<<"uang komisi  Rp."<<komisi<<endl;
 cout<<"total        Rp."<<total<<endl;

 getch();
 return 0;
 }