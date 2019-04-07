#include<graphics.h>
#include<iostream.h>
#include<dos.h>
#include<process.h>
#include<conio.h>
int player1[3][3],player2[3][3];
int flag=0,flg=0,a,color,col;
int tag[9],red[5],blue[5];
int maxx,maxy;
int playercheck();
void p1win();
void p2win();
void iosound();
void bingosound();
void blockcheck();
void tagcheck();
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	maxx=getmaxx();
	maxy=getmaxy();
	/*setfillstyle(SOLID_FILL,WHITE);
	floodfill(100,200,WHITE);
	rectangle(0,0,maxx,maxy); */
	//setcolor(BLACK);
	rectangle(0,0,maxx,maxy);
	line(213,0,213,maxy);
	line(426,0,426,maxy);
	line(0,160,maxx,160);
	line(0,320,maxx,320);
	//setcolor(BLACK);
	outtextxy(200,145,"1");
	outtextxy(415,145,"2");
	outtextxy(630,145,"3");
	outtextxy(200,300,"4");
	outtextxy(415,300,"5");
	outtextxy(630,300,"6");
	outtextxy(200,445,"7");
	outtextxy(415,445,"8");
	outtextxy(630,445,"9");
	for(int i=0;i<7;i++)
	{
		color=playercheck();
		cin>>a;
		iosound();
		tag[i]=a;
		blockcheck();
		tagcheck();
	}
	//getch();
}
int playercheck()
{
	if(flag%2==0)
	{
		setcolor(RED);
		col=4;
		flag++;
		return col;

	}
	else
	{
		setcolor(BLUE);
		col=1;
		flag++;
		return col;

	}
}
void blockcheck()
{
		if(a==1)
		{
			circle(106,80,50);
			setfillstyle(SOLID_FILL,color);
			floodfill(106,80,color);
		}
		if(a==2)
		{
			circle(106*3,80,50);
			setfillstyle(SOLID_FILL,color);
			floodfill(106*3,80,color);
		}
		if(a==3)
		{
			circle(106*5,80,50);
			setfillstyle(SOLID_FILL,color);
			floodfill(106*5,80,color);
		}
		if(a==4)
		{
			circle(106,80*3,50);
			setfillstyle(SOLID_FILL,color);
			floodfill(106,80*3,color);
		}
		if(a==5)
		{
			circle(106*3,80*3,50);
			setfillstyle(SOLID_FILL,color);
			floodfill(106*3,80*3,color);
		}
		if(a==6)
		{
			circle(106*5,80*3,50);
			setfillstyle(SOLID_FILL,color);
			floodfill(106*5,80*3,color);
		}
		 if(a==7)
		{
			circle(106,80*5,50);
			setfillstyle(SOLID_FILL,color);
			floodfill(106,80*5,color);
		}
		if(a==8)
		{
			circle(106*3,80*5,50);
			setfillstyle(SOLID_FILL,color);
			floodfill(106*3,80*5,color);
		}
		if(a==9)
		{
			circle(106*5,80*5,50);
			setfillstyle(SOLID_FILL,color);
			floodfill(106*5,80*5,color);
		}

}
void tagcheck()
{
	int i;
	if(flg%2==0)
	{
	       switch(a)
	       {
			case 1: player1[0][0]=1;
			break;

			case 2: player1[0][1]=1;
			break;

			case 3: player1[0][2]=1;
			break;

			case 4: player1[1][0]=1;
			break;

			case 5: player1[1][1]=1;
			break;

			case 6: player1[1][2]=1;
			break;

			case 7: player1[2][0]=1;
			break;

			case 8: player1[2][1]=1;
			break;

			case 9: player1[2][2]=1;
			break;
	       }
	       flg++;
	       if(player1[0][0]&&player1[0][1]&&player1[0][2]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				//bingosound();
				setcolor(ik);
				delay(300);
				rectangle(0,0,maxx,160);
			}
			p1win();
	       }
	       else if(player1[1][0]&&player1[1][1]&&player1[1][2]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(0,160,maxx,320);
			}
			p1win();
	       }
		 else if(player1[2][0]&&player1[2][1]&&player1[2][2]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(0,320,maxx,640);
			}
			p1win();
	       }
		 else if(player1[0][0]&&player1[1][0]&&player1[2][0]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(0,0,213,maxy);
			}
			p1win();
	       }
	       else if(player1[0][1]&&player1[1][1]&&player1[2][1]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(213,0,426,maxy);
			}
			p1win();
	       }
	       else if(player1[0][2]&&player1[1][2]&&player1[2][2]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(426,0,maxx,maxy);
			}
			p1win();
	       }
	       else if(player1[0][0]&&player1[1][1]&&player1[2][2]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(0,0,213,160);
				rectangle(213,160,426,320);
				rectangle(426,320,852,640);
			}
			p1win();
	       }
	       else if(player1[0][2]&&player1[1][1]&&player1[2][0]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(426,0,maxx,160);
				rectangle(213,160,426,320);
				rectangle(0,320,213,640);
			}
			p1win();
	       }

	}
	else
	{
		switch(a)
		{
		case 1: player2[0][0]=1;
			break;

			case 2: player2[0][1]=1;
			break;

			case 3: player2[0][2]=1;
			break;

			case 4: player2[1][0]=1;
			break;

			case 5: player2[1][1]=1;
			break;

			case 6: player2[1][2]=1;
			break;

			case 7: player2[2][0]=1;
			break;

			case 8: player2[2][1]=1;
			break;

			case 9: player2[2][2]=1;
			break;
		      }
		      flg++;
		if(player2[0][0]&&player2[0][1]&&player2[0][2]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(0,0,maxx,160);
			}
			p2win();
	       }
	       else if(player2[1][0]&&player2[1][1]&&player2[1][2]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(0,160,maxx,320);
			}
			p2win();
	       }
		 else if(player2[2][0]&&player2[2][1]&&player2[2][2]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(0,320,maxx,maxy);
			}
			p2win();
	       }
		 else if(player2[0][0]&&player2[1][0]&&player2[2][0]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(0,0,213,maxy);
			}
			p2win();
	       }
	       else if(player2[0][1]&&player2[1][1]&&player2[2][1]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(213,0,426,maxy);
			}
			p2win();
	       }
	       else if(player2[0][2]&&player2[1][2]&&player2[2][2]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(426,0,maxx,maxy);
			}
			p2win();
	       }
	       else if(player2[0][0]&&player2[1][1]&&player2[2][2]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(0,0,213,160);
				rectangle(213,160,426,320);
				rectangle(426,320,852,640);
			}
			p2win();
	       }
	       else if(player2[0][2]&&player2[1][1]&&player2[2][0]==1)
	       {
			bingosound();
			for(int ik=1;ik<16;ik++)
			{
				setcolor(ik);
				delay(300);
				rectangle(426,0,maxx,160);
				rectangle(213,160,426,320);
				rectangle(0,320,213,640);
			}
			p2win();
	       }
	}
}
void p1win()
{
	for(int ik=0;ik<16;ik++)
	{
	setcolor(ik);
	delay(300);
	cleardevice();
	rectangle(150,200,470,310);
	settextstyle(4,HORIZ_DIR,5);
	outtextxy(180,230,"Player 1 Wins");
	}
	getch();
	exit(0);
}
void p2win()
{
	for(int ik=0;ik<16;ik++)
	{
	setcolor(ik);
	delay(300);
	cleardevice();
	rectangle(150,200,470,310);
	settextstyle(4,HORIZ_DIR,5);
	outtextxy(180,230,"Player 2 Wins");
	}
	getch();
	exit(0);
}
void iosound()
{
	sound(1000);
	delay(100);
	nosound();
}
void bingosound()
{

		for(int i=0;i<10;i++)
		{
		sound(i*200);
		delay(100);
		sound(i*180);
		delay(100);
		nosound();
		}


}
