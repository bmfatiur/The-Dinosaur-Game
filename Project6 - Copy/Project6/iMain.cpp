# include "iGraphics.h"
# include <stdio.h>
# include <math.h>
# include <iostream>

using namespace std;

int display_height=780,display_width=1460;
int menux=185,menuy=480,menuX[2]={menux,menux+955},menuY[2]={menuy,menuy-120};
int n=0,num=1;
int K = 0;
int up_x=20,up_y=50,down_a=0;
int speed=5,stone_x1=1300,stone_x2=2110,c=0; 

///about
double rec_x=500,rec_y=520,rec_height=200,rec_width=350;
int cp=0;
double text_x=100,text_y=570,text_z=900;
int l = 1,le=0;
double pic_x=0,pic_y=390,pic=0;
int k=0;
int group_x=440;
int abs_x=100,abs_y=420;
int score=0;
char ch='m';
bool musicOn=true;
/*
function iDraw() is called again and again by the system.
*/
void iDraw()
{
	iClear();

    if(K==0){
	
	iShowBMP2(0,0,"Pictures\\Game\\HomeBg.bmp",0);
	//play
	iShowBMP2(menuX[0],menuY[0],"Pictures\\Game\\Play.bmp",0);
	//high score
	iShowBMP2(menuX[0],menuY[1],"Pictures\\Game\\HighScore.bmp",0);
	//information
	iShowBMP2(menuX[1],menuY[0],"Pictures\\Game\\Info.bmp",0);
	//exit
	iShowBMP2(menuX[1],menuY[1],"Pictures\\Game\\Exit.bmp",0);
	//musicON
	if(musicOn==1)
		iShowBMP2(10,5,"Pictures\\Game\\musicOn.bmp",0);
	else
		iShowBMP2(10,5,"Pictures\\Game\\musicOff.bmp",0);

	}
		

	
	
	if(K==1){
	//Background
	if(num <= 3) iShowBMP(0, 0, "Pictures\\Bg\\1.bmp");
    else if(num <= 6) iShowBMP(0, 0, "Pictures\\Bg\\2.bmp");
    else if(num <= 9) iShowBMP(0, 0, "Pictures\\Bg\\3.bmp");
    else if(num <= 12) iShowBMP(0, 0, "Pictures\\Bg\\4.bmp");
    else if(num <= 15) iShowBMP(0, 0, "Pictures\\Bg\\5.bmp");
    else if(num <= 18) iShowBMP(0, 0, "Pictures\\Bg\\6.bmp");
    else if(num <= 21) iShowBMP(0, 0, "Pictures\\Bg\\7.bmp");
    else if(num <= 24) iShowBMP(0, 0, "Pictures\\Bg\\8.bmp");
    else if(num <= 27) iShowBMP(0, 0, "Pictures\\Bg\\9.bmp");
    else if(num <= 30) iShowBMP(0, 0, "Pictures\\Bg\\10.bmp");
    else if(num <= 33) iShowBMP(0, 0, "Pictures\\Bg\\11.bmp");
    else if(num <= 36) iShowBMP(0, 0, "Pictures\\Bg\\12.bmp");
    else if(num <= 39) iShowBMP(0, 0, "Pictures\\Bg\\13.bmp");
    else if(num <= 42) iShowBMP(0, 0, "Pictures\\Bg\\14.bmp");
    else if(num <= 45) iShowBMP(0, 0, "Pictures\\Bg\\15.bmp");
    else if(num <= 48) iShowBMP(0, 0, "Pictures\\Bg\\16.bmp");
    else if(num <= 51) iShowBMP(0, 0, "Pictures\\Bg\\17.bmp");
    else if(num <= 54) iShowBMP(0, 0, "Pictures\\Bg\\18.bmp");
    else if(num <= 57) iShowBMP(0, 0, "Pictures\\Bg\\19.bmp");
    else if(num <= 60) iShowBMP(0, 0, "Pictures\\Bg\\20.bmp");
    else if(num <= 63) iShowBMP(0, 0, "Pictures\\Bg\\21.bmp");
    else if(num <= 66) iShowBMP(0, 0, "Pictures\\Bg\\22.bmp");
    else if(num <= 69) iShowBMP(0, 0, "Pictures\\Bg\\23.bmp");
    else if(num <= 72) iShowBMP(0, 0, "Pictures\\Bg\\24.bmp");
    else if(num <= 75) iShowBMP(0, 0, "Pictures\\Bg\\25.bmp");
    else if(num <= 78) iShowBMP(0, 0, "Pictures\\Bg\\26.bmp");
    else if(num <= 81) iShowBMP(0, 0, "Pictures\\Bg\\27.bmp");
    else if(num <= 84) iShowBMP(0, 0, "Pictures\\Bg\\28.bmp");
    else if(num <= 87) iShowBMP(0, 0, "Pictures\\Bg\\29.bmp");
    else if(num <= 90) iShowBMP(0, 0, "Pictures\\Bg\\30.bmp");
    else if(num <= 93) iShowBMP(0, 0, "Pictures\\Bg\\31.bmp");
    else if(num <= 96) iShowBMP(0, 0, "Pictures\\Bg\\32.bmp");
    else if(num <= 99) iShowBMP(0, 0, "Pictures\\Bg\\33.bmp");
    else if(num <= 102) iShowBMP(0, 0, "Pictures\\Bg\\34.bmp");
    else if(num <= 105) iShowBMP(0, 0, "Pictures\\Bg\\35.bmp");
    else if(num <= 108) iShowBMP(0, 0, "Pictures\\Bg\\36.bmp");
    else if(num <= 111) iShowBMP(0, 0, "Pictures\\Bg\\37.bmp");
    else if(num <= 114) iShowBMP(0, 0, "Pictures\\Bg\\38.bmp");
    else if(num <= 117) iShowBMP(0, 0, "Pictures\\Bg\\39.bmp");
    else if(num <= 120) iShowBMP(0, 0, "Pictures\\Bg\\40.bmp");
    else if(num <= 123) iShowBMP(0, 0, "Pictures\\Bg\\41.bmp");
    else if(num <= 126) iShowBMP(0, 0, "Pictures\\Bg\\42.bmp");
    else if(num <= 129) iShowBMP(0, 0, "Pictures\\Bg\\43.bmp");
    else if(num <= 132) iShowBMP(0, 0, "Pictures\\Bg\\44.bmp");
    else if(num <= 135) iShowBMP(0, 0, "Pictures\\Bg\\45.bmp");
    else if(num <= 138) iShowBMP(0, 0, "Pictures\\Bg\\46.bmp");
    else if(num <= 141) iShowBMP(0, 0, "Pictures\\Bg\\47.bmp");
    else if(num <= 144) iShowBMP(0, 0, "Pictures\\Bg\\48.bmp");
    else if(num <= 147) iShowBMP(0, 0, "Pictures\\Bg\\49.bmp");
    else if(num <= 150) iShowBMP(0, 0, "Pictures\\Bg\\50.bmp");
    else if(num <= 153) iShowBMP(0, 0, "Pictures\\Bg\\51.bmp");
    else if(num <= 156) iShowBMP(0, 0, "Pictures\\Bg\\52.bmp");
    else if(num <= 159) iShowBMP(0, 0, "Pictures\\Bg\\53.bmp");
    else if(num <= 162) iShowBMP(0, 0, "Pictures\\Bg\\54.bmp");
    else if(num <= 165) iShowBMP(0, 0, "Pictures\\Bg\\55.bmp");
    else if(num <= 168) iShowBMP(0, 0, "Pictures\\Bg\\56.bmp");
    else if(num <= 171) iShowBMP(0, 0, "Pictures\\Bg\\57.bmp");
    else if(num <= 174) iShowBMP(0, 0, "Pictures\\Bg\\58.bmp");
    else if(num <= 177) iShowBMP(0, 0, "Pictures\\Bg\\59.bmp");
    else if(num <= 180) iShowBMP(0, 0, "Pictures\\Bg\\60.bmp");
    else if(num <= 183) iShowBMP(0, 0, "Pictures\\Bg\\61.bmp");
    else if(num <= 186) iShowBMP(0, 0, "Pictures\\Bg\\62.bmp");
    else if(num <= 189) iShowBMP(0, 0, "Pictures\\Bg\\63.bmp");
    else if(num <= 192) iShowBMP(0, 0, "Pictures\\Bg\\64.bmp");
    else if(num <= 195) iShowBMP(0, 0, "Pictures\\Bg\\65.bmp");
	else if(num <= 198){iShowBMP(0, 0, "Pictures\\Bg\\66.bmp");num=0;}
	num+=2;

	if(k!=13 && k!=99){
	//Dino
	if (num % 9 == 0) iShowBMP2(20, 50, "Pictures\\Dino\\0.bmp",0);
	else if (num % 9 == 1) iShowBMP2(20, 50, "Pictures\\Dino\\1.bmp",0);
	else if (num % 9 == 2) iShowBMP2(20, 50, "Pictures\\Dino\\2.bmp",0);
	else if (num % 9 == 3) iShowBMP2(20, 50, "Pictures\\Dino\\3.bmp",0);
	else if (num % 9 == 4) iShowBMP2(20, 50, "Pictures\\Dino\\4.bmp",0);
	else if (num % 9 == 5) iShowBMP2(20, 50, "Pictures\\Dino\\5.bmp",0);
	else if (num % 9 == 6) iShowBMP2(20, 50, "Pictures\\Dino\\6.bmp",0);
	else if (num % 9 == 7) iShowBMP2(20, 50, "Pictures\\Dino\\7.bmp",0);
	else if (num % 9 == 8){iShowBMP2(20, 50, "Pictures\\Dino\\8.bmp",0); n=0;}
	n++;}

	if(k!=99){
	//Stone
	iShowBMP2(stone_x1,50,"Pictures\\Stone\\1.bmp",0);
	iShowBMP2(stone_x2,40,"Pictures\\Stone\\2.bmp",0);
	stone_x1-=speed;stone_x2-=speed;
	if(stone_x1==0){stone_x1=1600;c++;}
	if(stone_x2==0) stone_x2=2120;
	if(c>7){c=0;speed+=2;}
	}

	//Stone & Dino break point
	 if(up_y>=47 && up_y<102){
		if(stone_x1<=240 && stone_x1>100) k=99;
	}
	if(up_y>=49 && up_y<126){
		if(stone_x2<=224 && stone_x2>20) k=99;
	}

	if(k == 13){
//		iShowBMP2(up_x,up_y,"Pictures\\Dino\\3.bmp",0);
		if(up_y<211 && down_a==0){
			up_y+=2;
			if(up_y>=207){down_a=1;}
		}
		if(down_a==1 && up_y>50){
			up_y-=2;
			if(up_y<=50){k=0;down_a=0;}
		}
	}

	if(stone_x1<=200 || stone_x2<=200) score++;

	//result
	if(k==99){

		iShowBMP2(500,350,"Pictures\\Game\\result.bmp",0);
		iText(585,457,"40",GLUT_BITMAP_HELVETICA_18);
		iText(585,395,"240",GLUT_BITMAP_HELVETICA_18);

	}

	if(musicOn==1)
		iShowBMP2(120,710,"Pictures\\Game\\musicOn.bmp",0);
	else
		iShowBMP2(120,710,"Pictures\\Game\\musicOff.bmp",0);
	iShowBMP2(10,700,"Pictures\\Game\\backButton.bmp",0);

  }

  else if(K == 3){
  
	iShowBMP(0,0,"Pictures\\Pictures\\back_1.bmp");
	iSetColor(255,0,0);
	iText(100,600,"H I G H  S C O R E",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(255,255,255);
	iText(130,500,"01.  400",GLUT_BITMAP_HELVETICA_18);
	iText(130,460,"02.  370",GLUT_BITMAP_HELVETICA_18);
	iText(130,420,"03.  350",GLUT_BITMAP_HELVETICA_18);
	iShowBMP2(10,700,"Pictures\\Game\\backButton.bmp",0);
  
  }

  if(K == 4){
	iShowBMP(0,0,"Pictures\\Pictures\\back_1.bmp");

	if(ch=='m'){
	
		iText(text_x,text_y,"S",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(text_x+22,text_y,"A",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(text_x+44,text_y,"V",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(text_x+66,text_y,"E",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(text_x+100,text_y,"D",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(text_x+124,text_y,"I",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(text_x+138,text_y,"N",GLUT_BITMAP_TIMES_ROMAN_24);
		iText(text_x+160,text_y,"O",GLUT_BITMAP_TIMES_ROMAN_24);
		iSetColor(0,0,255);

	
		iSetColor(255,255,255);

		if(cp<150){

	
			iText(group_x, group_x-260,"PROJECT", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(group_x, group_x-312,"MEMBERS", GLUT_BITMAP_TIMES_ROMAN_24);
			iShowBMP(620, 50, "Pictures\\Pictures\\faim.bmp");
			iText(text_z, 259,"Bm Fatiur Rahman", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(text_z, 218,"Roll: 190104", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(text_z, 177,"Reg: 180120", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(text_z, 136,"Department of Computer Science & Engineering", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(text_z, 95,"Pabna University Of Science & Technology", GLUT_BITMAP_TIMES_ROMAN_24);

		}

		else if(cp>=150 && cp<300){

	
			iText(group_x, group_x-260,"PROJECT", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(group_x, group_x-312,"MEMBERS", GLUT_BITMAP_TIMES_ROMAN_24);		
			iShowBMP2(620,50, "Pictures\\Pictures\\jui_1.bmp",255);
			iText(text_z, 259,"Miss Jannatul Ferdos", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(text_z, 218,"Roll: 190105", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(text_z, 177,"Reg: 180121", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(text_z, 136,"Department of Computer Science & Engineering", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(text_z, 95,"Pabna University Of Science & Technology", GLUT_BITMAP_TIMES_ROMAN_24);

		}

		else if(cp>=300 && cp<450){

	
			iText(group_x, group_x-260,"PROJECT", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(group_x, group_x-312,"MEMBERS", GLUT_BITMAP_TIMES_ROMAN_24);
			iShowBMP(620,50, "Pictures\\Pictures\\saadi.bmp");
			iText(text_z, 259,"Shahnewaz Md. Saadi", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(text_z, 218,"Roll: 190106", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(text_z, 177,"Reg: 180122", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(text_z, 136,"Department of Computer Science & Engineering", GLUT_BITMAP_TIMES_ROMAN_24);
			iText(text_z, 95,"Pabna University Of Science & Technology", GLUT_BITMAP_TIMES_ROMAN_24);
			if(c>=449) c=0;

		}
				
		iSetColor(255, 255, 255);
		
		iText(25, 5, "Press [ i ] = More Information ", GLUT_BITMAP_HELVETICA_12);
		
		cp+=1;

	

	
	
	if(l==0){

		iShowBMP2(pic_x,pic_y,"Pictures\\Pictures\\dino_1.bmp",0);
		if(pic_x>350) l=1;
		pic_x+=01;
	

	}
	
	else if(l==1){

		iShowBMP2(pic_x,pic_y,"Pictures\\Pictures\\dino.bmp",0);
		if(pic_x<0) l=0;
		pic_x-=0.91;
	

	}
	
	}
	
	else if(ch == 'i'){
		iShowBMP(0,0,"Pictures\\Pictures\\inf.bmp");
		iSetColor(255, 255, 255);
		iText(25, 5, "Press [ m ] = Previous Page ", GLUT_BITMAP_HELVETICA_12);
	}
	iShowBMP2(10,700,"Pictures\\Game\\backButton.bmp",0);

  }
  if(K==100) exit(0);
}


void music()
{
	
	//PlaySound("music\\gun.wav", NULL, SND_LOOP | SND_ASYNC);
}

/*
function iMouseMove() is called when the user presses and drags the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{

}

/*
function iMouse() is called when the user presses/releases the mouse.
(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(K == 0 && mx>=menuX[0] && mx<=menuX[0]+70 && my>=menuY[0] && my<=menuY[0]+70){
		K = 1;
	}
	else if(K == 0 && mx>=menuX[0] && mx<=menuX[0]+70 && my>=menuY[1] && my<=menuY[1]+70){
		K = 3;
	}
	else if(K == 0 && mx>=menuX[1] && mx<=menuX[1]+70 && my>=menuY[0] && my<=menuY[0]+70){
		K = 4;
	}
	else if(K == 0 && mx>=menuX[1] && mx<=menuX[1]+70 && my>=menuY[1] && my<=menuY[1]+70){
		exit(0);
	}
	else if(K == 3 && mx>=10 && mx<=10+70 && my>=700 && my<=700+70){
		K = 0;
	}
	else if(K == 1 && mx>=10 && mx<=10+70 && my>=700 && my<=700+70){
		K = 0;
	}
	else if(K == 4 && mx>=10 && mx<=10+70 && my>=700 && my<=700+70){
		K = 0;
	}
	else if(K == 0 && mx>=100 && mx<=300 && my>=162 && my<=237){
		K = 100;
	}
	else if(K == 1 && mx>=820 && mx<=855 && my>=423 && my<=458){
		K = 0;
		k=0;stone_x1=1300;stone_x2=2110;
	}
	else if(K == 1 && mx>=820 && mx<=855 && my>=471 && my<=506){
		K = 1;k=0;stone_x1=1300;stone_x2=2110;
	}
	
}
/*iPassiveMouseMove is called to detect and use
the mouse point without pressing any button */

void iPassiveMouseMove(int mx, int my)
{
	//place your code here

	/*mposx = mx;
	mposy = my;
	if(mx== 2){}        /*Something to do with mx*/
	//else if(my== 2){}   /*Something to do with my*/

}

/*
function iKeyboard() is called whenever the user hits a key in keyboard.
key- holds the ASCII value of the key pressed.
*/


void iKeyboard(unsigned char key)
{
    
	if(key == 'n') K=1;
	
	if(key == 'a') K=4;

	if(key == 'm') ch='m';

	if(key == 'i') ch='i';

	if(key == 'e') K=100;
	
	if(key == 'w') {
	//DO something
    }
}



/*
function iSpecialKeyboard() is called whenver user hits special keys like-
function keys, home, end, pg up, pg down, arraows etc. you have to use
appropriate constants to detect them. A list is:
GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_UP) k=13;

	else if(key==GLUT_KEY_F1){
		if(musicOn){
		musicOn=false;
		PlaySound(0,0,0);}
		else
		{
			musicOn=true;
			PlaySound("Music\\Move.wav",NULL,SND_LOOP | SND_ASYNC);
		}
	}
	
	if (key == GLUT_KEY_DOWN) {
	    //place your codes for other keys here
  	}
}
//Main Function

int main()
{
	if(musicOn)
	{
		PlaySound("Music\\Move.wav",NULL,SND_LOOP | SND_ASYNC);
	}
	iInitialize(display_width, display_height, "Save Dino");

	return 0;
}
