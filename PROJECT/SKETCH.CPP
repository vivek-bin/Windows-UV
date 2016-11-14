int SaveBMP16(char []);
typedef unsigned char byte;
typedef unsigned int word;
typedef unsigned long dword;



struct BMP
{

// BitMap File Header
byte bfType[2]; /* 1 2 must always be set to 'BM' to declare that this is a .bmp file.*/
dword bfSize; /* 3 4 specifies the size of the file in bytes.*/
word bfReserved1;// 7 2 must always set to zero. */
word bfReserved2;// 9 2 must always be set to zero.
dword bfOffset; // 11 4 specifies the offset from the beginning of the file to bitmap data.

// BitMap Image Header
dword biSize; // 15 4 specifies the size of the BitMap Header structure, in bytes.
dword biWidth; // 19 4 specifies the width of image, in pixels.
dword biHeight; // 23 4 specifies the height of image, in pixels.
word biPlanes; // 27 2 specifies the number of planes of the target device,must be set to 0
word biBitCount; // 29 2 specifies the number of bits per pixel.
dword biCompression; //31 4 Specifies the type of compression, usually set to 0 - No Compres
dword biSizeImage; // 35 4 specifies the size of the image data, in bytes. If there is no compression, it is valid to set this member to zero.
dword biXPelsPerMeter; //39 4 specifies the the horizontal pixels per meter on the designated targer device, usually set to zero.
dword biYPelsPerMeter; // 43 4 specifies the the vertical pixels per meter on the designated targer device, usually set to zero
dword biClrUsed; // 47 4 specifies the number of colors used in bitmap, if set to 0 number of colors is calculated using the biBitCount member.
dword biClrImportant; // 51 4 specifies the number of color that are 'important' for the bitmap, if set to zero, all colors are important.
};


int SaveBMP16(char file[])
{
int i=0, j=0, r, g, b;

FILE *fp;
BMP *bmp;

bmp=(BMP *)malloc(54);

bmp->bfType[0]='B';
bmp->bfType[1]='M';
bmp->bfSize=153718;
bmp->bfReserved1=0;
bmp->bfReserved2=0;
bmp->bfOffset=118;
bmp->biSize=40;
bmp->biWidth=640;
bmp->biHeight=405;
bmp->biPlanes=1;
bmp->biBitCount=4;
bmp->biCompression=0;
bmp->biSizeImage=153600; //Fixed Size ?
bmp->biXPelsPerMeter=0;
bmp->biYPelsPerMeter=0;
bmp->biClrUsed=0;
bmp->biClrImportant=0;

fp=fopen(file, "wb");
if(fp == NULL)
{
printf("File can't be open");
getch();
return 1;
}


fwrite(bmp, 54, 1, fp);
fseek(fp, 54L, SEEK_SET);

// Upto Here its OK.


// Question 1. What do next 16x4 Lines do ?

fputc(0x0, fp);
fputc(0x0, fp);
fputc(0x0, fp);
fputc(0x0, fp);

fputc(127, fp);
fputc(0x0, fp);
fputc(0x0, fp);
fputc(0x0, fp);

fputc(0x0, fp);
fputc(127, fp);
fputc(0x0, fp);
fputc(0x0, fp);

fputc(127, fp);
fputc(127, fp);
fputc(0x0, fp);
fputc(0x0, fp);

fputc(0x0, fp);
fputc(0x0, fp);
fputc(127, fp);
fputc(0x0, fp);

fputc(127, fp);
fputc(0x0, fp);
fputc(127, fp);
fputc(0x0, fp);

fputc(0x0, fp);
fputc(192, fp);
fputc(192, fp);
fputc(0x0, fp);

fputc(192, fp);
fputc(192, fp);
fputc(192, fp);
fputc(0x0, fp);

fputc(128, fp);
fputc(128, fp);
fputc(128, fp);
fputc(0x0, fp);

fputc(255, fp);
fputc(0x0, fp);
fputc(0x0, fp);
fputc(0x0, fp);

fputc(0x0, fp);
fputc(255, fp);
fputc(0x0, fp);
fputc(0x0, fp);

fputc(255, fp);
fputc(255, fp);
fputc(0x0, fp);
fputc(0x0, fp);

fputc(0x0, fp);
fputc(0x0, fp);
fputc(255, fp);
fputc(0x0, fp);

fputc(255, fp);
fputc(0x0, fp);
fputc(255, fp);
fputc(0x0, fp);

fputc(0x0, fp);
fputc(255, fp);
fputc(255, fp);
fputc(0x0, fp);

fputc(255, fp);
fputc(255, fp);
fputc(255, fp);
fputc(0x0, fp);

i=0;
j=429;

fseek(fp, 118, SEEK_SET);

while(j>=25)
{
i=0;
while(i<640)
{
fputc((getpixel(i, j)<<4) | getpixel(i+1, j), fp); //Que 2. What does this do ? Why Left Shift 4 times and why Bit wise ORing of two pixles.
i+=2;
}
j--;
}
free(bmp);
fclose(fp);
return 0;
}

void toolbox()
{
rectangle(0,430,638,479);
line(0,431,640,431);
rectangle(1,432,190,478);
line(0,455,190,455);
line(27,430,27,480);
line(54,430,54,480);
line(81,430,81,480);
line(108,430,108,480);
line(135,430,135,480);
line(162,430,162,480);
line(189,430,189,480);
setfillstyle(SOLID_FILL,1);
floodfill(20,440,15);
setfillstyle(SOLID_FILL,2);
floodfill(50,440,15);
setfillstyle(SOLID_FILL,3);
floodfill(70,440,15);
setfillstyle(SOLID_FILL,4);
floodfill(100,440,15);
setfillstyle(SOLID_FILL,5);
floodfill(130,440,15);
setfillstyle(SOLID_FILL,6);
floodfill(160,440,15);
setfillstyle(SOLID_FILL,7);
floodfill(180,440,15);
setfillstyle(SOLID_FILL,8);
floodfill(20,460,15);
setfillstyle(SOLID_FILL,9);
floodfill(50,460,15);
setfillstyle(SOLID_FILL,15);
floodfill(70,460,15);
setfillstyle(SOLID_FILL,11);
floodfill(100,460,15);
setfillstyle(SOLID_FILL,12);
floodfill(130,460,15);
setfillstyle(SOLID_FILL,13);
floodfill(160,460,15);
setfillstyle(SOLID_FILL,14);
floodfill(180,460,15);

circle(610,450,10);
outtextxy(588,463,"ERASER");

rectangle(250,450,255,455);
rectangle(337,449,344,456);
rectangle(425,448,434,457);
rectangle(507,447,518,458);
outtextxy(235,463,"SMALL       MED       LARGE       XL");
setfillstyle(SOLID_FILL,15);
floodfill(253,452,15);
floodfill(339,452,15);
floodfill(428,452,15);
floodfill(510,452,15);

rectangle(0,1,638,20);
rectangle(165,6,175,16);
setfillstyle(SOLID_FILL,15);
floodfill(170,10,15);
outtextxy(30,8,"CURRENT COLOUR:         CURRENT SIZE:                   CLEAR           EXIT");
outtextxy(540,8,"SAVE");
}

void ptdrw(int xp,int yp,int sz,int colour)
{
  int i=-(sz*2),j;
  for(;i<=0;++i)
    for(j=-(sz*2);j<0;++j)
      putpixel(xp+i,yp+j,colour);

}

void mouseuse()
{
   int x,y,cl,a=100,b=400,size=1,color=15;
   setposi(a,b);
   callmouse();
   restrictmouseptr();
   setcolor(15);
   outtextxy(360,8,"SMALL");
   do
    {
      mouseposi(x,y,cl);
      if((cl==1)&&(x>600)&&(x<640)&&(y>3)&&(y<18))
       break;
      if((cl==1)&&(y>30)&&(y<425))
	{
	ptdrw(x,y,size,color);
	continue;
	}
      if((cl==1)&&(x>540)&&(x<580)&&(y>3)&&(y<18))// save+exit coordinates
	 {
	   struct inte
	   {
	   int fln;
	   };
	   int fln,rev=0,i;
	   inte a;
	   char nm[25],numprt[6];
	   strcpy(nm,"c:\\project\\IMAGES\\Image");
	   ifstream ifile;
	   ifile.open("c:\\project\\vpaint.dat",ios::binary|ios::in);
	   ifile.read((char*)&a,sizeof(inte));
	   ifile.close();
	   a.fln++; //a.fln=1;
	   ofstream ofile;
	   ofile.open("c:\\project\\vpaint.dat",ios::binary|ios::out);
	   ofile.write((char*)&a,sizeof(inte));
	   ofile.close();

	   for(;a.fln>0;a.fln/=10)
	     rev=rev*10+a.fln%10;

	   for(i=0;rev>0;rev/=10)
	     numprt[i++]=rev%10+48;
	     numprt[i]='\0';
	   strcat(nm,numprt);
	   strcat(nm,".bmp");
	   SaveBMP16(nm);
	   setcolor(10);
	   rectangle(110,180,560,270);
	   setfillstyle(SOLID_FILL,0);
	   floodfill(300,200,10);
	   setcolor(15);
	   rectangle(110,180,560,270);
	   outtextxy(180,220,"File Saved as ");
	   outtextxy(320,220,nm);
	   outtextxy(220,245,"PRESS ANY KEY TO CONTINUE");
	   getch();
	   setcolor(10);
	   rectangle(0,23,638,423);
	   setfillstyle(SOLID_FILL,0);
	   floodfill(200,200,10);
	   setcolor(0);
	   rectangle(0,23,638,423);
	   setcolor(color);
	 }
      if((cl==1)&&(x>477)&&(x<517)&&(y>7)&&(y<15))
       {
	setcolor(10);
	rectangle(0,23,638,423);
	setfillstyle(SOLID_FILL,0);
	floodfill(200,200,10);
	setcolor(0);
	rectangle(0,23,638,423);
	setcolor(color);
       }

      if((cl==1)&&(x>2)&&(x<26)&&(y>431)&&(y<455))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(1);
	color=1;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
       }
      else
      if((cl==1)&&(x>28)&&(x<53)&&(y>431)&&(y<455))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(2);
	color=2;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
       }
      else
      if((cl==1)&&(x>55)&&(x<80)&&(y>431)&&(y<455))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(3);
	color=3;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
      }
      else
      if((cl==1)&&(x>82)&&(x<107)&&(y>431)&&(y<455))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(4);
	color=4;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
      }
      else
      if((cl==1)&&(x>109)&&(x<134)&&(y>431)&&(y<455))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(5);
	color=5;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
      }
      else
      if((cl==1)&&(x>136)&&(x<161)&&(y>431)&&(y<455))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(6);
	color=6;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
      }
      else
      if((cl==1)&&(x>163)&&(x<188)&&(y>431)&&(y<455))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(7);
	color=7;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
      }
      else
      if((cl==1)&&(x>2)&&(x<26)&&(y>456)&&(y<480))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(8);
	color=8;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
      }
      else
      if((cl==1)&&(x>28)&&(x<53)&&(y>456)&&(y<480))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(9);
	color=9;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
      }
      else
      if((cl==1)&&(x>55)&&(x<80)&&(y>456)&&(y<480))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(15);
	color=15;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
      }
      else
      if((cl==1)&&(x>82)&&(x<107)&&(y>456)&&(y<480))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(11);
	color=11;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
      }
      else
      if((cl==1)&&(x>109)&&(x<134)&&(y>456)&&(y<480))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(12);
	color=12;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
      }
      else
      if((cl==1)&&(x>136)&&(x<161)&&(y>456)&&(y<480))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(13);
	color=13;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
      }
      else
      if((cl==1)&&(x>163)&&(x<188)&&(y>456)&&(y<480))
       {
	setcolor(0);
	rectangle(585,433,636,475);
	setcolor(14);
	color=14;
	setfillstyle(SOLID_FILL,color);
	floodfill(170,10,0);
      }
      else
      if((cl==1)&&(x>602)&&(x<617)&&(y>442)&&(y<456))
       {
	setcolor(15);
	rectangle(585,433,636,475);
	setcolor(0);
	color=0;
      }

      if((cl==1)&&(x>250)&&(x<255)&&(y>450)&&(y<455))
	{
	 size=1;
	 setcolor(0);
	 outtextxy(360,8,"лллллл");
	 setcolor(15);
	 outtextxy(360,8,"SMALL");
	}
      if((cl==1)&&(x>337)&&(x<344)&&(y>449)&&(y<456))
	{
	 size=2;
	 setcolor(0);
	 outtextxy(360,8,"лллллл");
	 setcolor(15);
	 outtextxy(360,8,"MED");
	}
      if((cl==1)&&(x>425)&&(x<434)&&(y>448)&&(y<457))
	{
	 size=3;
	 setcolor(0);
	 outtextxy(360,8,"лллллл");
	 setcolor(15);
	 outtextxy(360,8,"LARGE");
	}
      if((cl==1)&&(x>507)&&(x<518)&&(y>447)&&(y<458))
       {
	 size=4;
	 setcolor(0);
	 outtextxy(360,8,"лллллл");
	 setcolor(15);
	 outtextxy(360,8,"XL");
       }


    }while(1);
   mousehide();
}

void sketching()
{
cleardevice();
setcolor(15);
settextstyle(0,0,1);
toolbox();
mouseuse();
}
