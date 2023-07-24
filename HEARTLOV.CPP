//____________ WELCOE ALL OF YOU ON ROHIT TECH STUDY CHANNEL ______________//
/*-------------- C++ PROGRAM TO DRAW HEART ANIMATION ----------------------*/

#include <graphics.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <dos.h>

int main()
{
 int x,y,r;
 int midx,midy,color;
 float t;
 int gd=DETECT,gm;

 initgraph(&gd, &gm,"c:\\tc\\bgi");
 midx=getmaxx()/2;
 midy=getmaxy()/2;
 r=8;
 color=4;
 setcolor(4);
 setfillstyle(1,4);

 do
 {
   settextstyle(10,0,2);
   outtextxy(midx-105,25,"I LOVE YOU");
   outtextxy(midx-105,midy+120,"I MISS YOU");
   setcolor(4);
   settextstyle(3,0,2);
   outtextxy(midx-100,200,"ROHIT TECH STUDY");

   for(t=0;t<(2*M_PI);t+=0.01)
   {
    x=(r*16*sin(t)*sin(t)*sin(t))+midx;
    y=(r*(1-2)*(13*cos(t)-5*cos(2*t)-2*cos(3*t)-cos(4*t)))+(midy-30);
    pieslice(x,y,0,360,5);
   }

   delay(900);
   cleardevice();
   color=random(15);
   setcolor(color);
   setfillstyle(2,color+1);
 }
 while(!kbhit());
 getch();
 closegraph();
 return 0;
}


//_________________I HOPE YOU LIKE THIS PROGRAMMING________________________//
//____________ LIKE __________ SHARE _________ SUBSCRIBE___________________//
