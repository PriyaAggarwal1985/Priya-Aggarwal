#include<math.h>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <dos.h>
void main()
{    void intro(void);
   int gdriver = DETECT, gmode, errorcode,i;


   int x[12]={250,259,275,300,325,345,350,345,325,300,275,259};
   int y[12]={300,275,259,250,259,275,300,325,345,350,345,325};
   int r1=0,s1=0,r2=4,s2=4,s3=8,r3=8,t=600,c1=1,c2=1,c3=1,c4=1,f=0,j,k=0;
   char ch;

   initgraph(&gdriver, &gmode, "..\\bgi");
   intro();
   setbkcolor(7);
   setcolor(RED);
   setfillstyle(SOLID_FILL,15);
   bar(30,30,600,430);
   rectangle(30,30,600,430);
   setcolor(3);
   setlinestyle(SOLID_LINE,0,THICK_WIDTH);
   settextstyle(1,0,3);
   setfillstyle(SOLID_FILL,14);
   fillellipse(145,115,30,20);
   fillellipse(245,115,30,20);
   fillellipse(345,115,30,20);
   fillellipse(445,115,30,20);

while(1)
    {
   setcolor(k++);
   rectangle(30,30,600,430);
   rectangle(20,20,610,440);
      setcolor(c1);
    outtextxy(140,100,"1");
	setcolor(c2);
    outtextxy(240,100,"2");
	setcolor(c3);
    outtextxy(340,100,"3");
	setcolor(c4);
    outtextxy(440,100,"O");

    setcolor(1);
   setfillstyle(1,1);
   fillellipse(300,300,7,7);
   line(300,300,x[r1],y[s1]);
   line(300,300,x[r2],y[s2]);
   line(300,300,x[r3],y[s3]);

   if(f==1)
   {
   r1++;
   s1++;
   r2++;
   s2++;
   r3++;
   s3++;
   }
   delay(t);

     if(kbhit())
   {
   ch=getch();

if(ch=='1')
{
   f=1;
 c1=4;
c2=c3=c4=1;
   t=100;
   }
else if(ch=='2')
   {    f=1;
     c2=4;
c1=c3=c4=1;
      t=50;
      }
else if(ch=='3')
   {   f=1;
    c3=4;
c2=c1=c4=1;
       t=10;
       }
else if(ch=='0')
{       setcolor(1);
    outtextxy(140,100,"1");
	setcolor(1);
    outtextxy(240,100,"2");
	setcolor(1);
    outtextxy(340,100,"3");
	outtextxy(240,180,"STOP");
	setcolor(4);
    outtextxy(440,100,"O");

	delay(3000);
    break;
    }
      }
      setcolor(15);
   line(300,300,x[r1-1],y[s1-1]);
      line(300,300,x[r2-1],y[s2-1]);
	 line(300,300,x[r3-1],y[s3-1]);
       if(r1==12)
   {
   r1=s1=0;
   }
      if(r2==12)
   {
   r2=s2=0;
   }
      if(r3==12)
   {
   r3=s3=0;
   }
   }
	getch();
   closegraph();
}

 void intro()
{
 int i;
 setbkcolor(3);
 setcolor(1);
 settextstyle(GOTHIC_FONT,0,7);
 outtextxy(100,100,"ANALOG FAN");
 outtextxy(170,200,"SYSTEM");
 setcolor(1);
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
 outtextxy(380,320,"Prepared By:");

 for(i=0;i<510;i++)
 {
   setcolor(15);
   rectangle(50,100,50+i,110);
   delay(1);
 }
 setcolor(1);
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
 outtextxy(380,340,"XYZ");

 for( i=0;i<510;i++)
 {
   setcolor(12);
   rectangle(50,100,50+i,110);
   delay(8);
 }
 setcolor(1);
 settextstyle(TRIPLEX_FONT, HORIZ_DIR, 1);
 outtextxy(380,360,"XYZ");

 for(i=0;i<510;i++)
 {
   setcolor(15);
   rectangle(50,200,50+i,210);
   delay(8);
 }
 }

