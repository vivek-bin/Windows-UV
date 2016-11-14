void guess();
void oxogrid();
void oxo();
void x(int r, int c);
void o(int r, int c);
int check(int g[3][3]);
void games()
{
closegraph();
int gameno;
do{clrscr();
cout<<"\n                          WELCOME TO THE GAME CENTRE\n";
cout<<"                     ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n\n\n\n";
cout<<" Which game would you like to play ?\n";
cout<<" 1. Knots and Crosses\n";
cout<<" 2. Guess the number\n";
cout<<" 3. Exit\n\n";
cout<<" Enter your choice (1,2,3) : ";
cin>>gameno;
switch(gameno)
{
case 1:oxo();
       break;
case 2:guess();
       break;
case 3:cout<<"\n\nBye..";
       break;
default:cout<<"\n\n\nWrong choice!! \n\nExiting!!";
	break;
} }while((gameno>0)&&(gameno<3));
getch();
}


void guess()
{
int a,n,i,guess;
char l[15],ag;
do{randomize();
clrscr();
cout<<"\n                          Welcome to Guess a Number!!!\n";
cout<<"        ******************************************************************\n\n\n\n";
cout<<"Choose a difficulty level (Easy,Medium,Hard) : ";
cin>>l;
l[0]=tolower(l[0]);
switch(l[0])
{
case 'e':a=4;
	 break;
case 'm':a=9;
	 break;
case 'h':a=24;
	 break;
default:break;
}
n=random(a)+1;
for(i=5;i>0;i--)
 {
  if(a==4)
    cout<<"\n\nDifficulty level : Easy (numbers 1-5) \n";
  else if(a==9)
    cout<<"\n\nDifficulty level : Medium (numbers 1-10)\n";
  else
    cout<<"\n\nDifficulty level : Hard (numbers 1-25)\n";
  cout<<"  Chances remaining : "<<i<<" \n  ------------------------\n\n\n";
  cout<<"               What is your guess???";
  cout<<"         Enter : ";
  cin>>guess;
  if(guess==n)
  {cout<<"\nCorrect!!! Well Done!!! ";break;}
  else
  {cout<<"\nIncorrect....";getch();}
  if(i==1)
    continue;
  clrscr();
  cout<<"\n                          Welcome to Guess a Number!!!\n";
  cout<<"        ******************************************************************\n\n\n\n";
  cout<<"Choose a difficulty level (Easy,Medium,Hard) : "<<l<<endl;
 }
if(i==0)
cout<<"\n\n Sorry! You are out of chances!  \n The number was "<<n;
cout<<"\n\nPlay again (y/n) ?  ";
cin>>ag;
}while((ag=='y')||(ag=='Y'));
}


void oxogrid()
{ gotoxy(6,14);
cout<<"      1     |2    |3    \n";   gotoxy(6,15);
cout<<"            |     |       \n"; gotoxy(6,16);
cout<<"            |     |       \n"; gotoxy(6,17);
cout<<"       -----|-----|-----  \n"; gotoxy(6,18);
cout<<"      4     |5    |6    \n";   gotoxy(6,19);
cout<<"            |     |       \n"; gotoxy(6,20);
cout<<"            |     |       \n"; gotoxy(6,21);
cout<<"       -----|-----|-----  \n"; gotoxy(6,22);
cout<<"            |     |    \n";    gotoxy(6,23);
cout<<"            |     |       \n"; gotoxy(6,24);
cout<<"      7     |8    |9      \n\n"; gotoxy(6,25);
}


void oxo()
{
char ag;
do{ int g[3][3]={3,4,5,6,7,8,9,10,11},flag=0,ch,j,z=0,locno,r,c,i=0,sp[9]={11,11,11,11,11,11,11,11,11};
clrscr();
cout<<"\n                Welcome to Knotts and Crosses!!\n";
cout<<"            *******************************************\n\n\n";
cout<<" Player 1 will use X.  Player 2 will use O.\n\n";
oxogrid();
do{
do{gotoxy(2,40);
cout<<"Player 1 :   Enter location number : ";gotoxy(38,40);cout<<"       ";gotoxy(39,40);
cin>>locno;
for(j=0;j<9;j++)
if(locno==sp[j])
{j=20;break;}
}while((locno>9)||(locno<1)||(j==20)); sp[z++]=locno;
switch(locno){
case 1:r=0;c=0;
       break;
case 2:r=0;c=1;
       break;
case 3:r=0;c=2;
       break;
case 4:r=1;c=0;
       break;
case 5:r=1;c=1;
       break;
case 6:r=1;c=2;
       break;
case 7:r=2;c=0;
       break;
case 8:r=2;c=1;
       break;
case 9:r=2;c=2;
       break;
default:break;}
x((4*r)+15,(c*6)+15);
g[r][c]=1;
ch=check(g); i++;
if(ch==1)
{gotoxy(30,48);
cout<<"Player 1 wins ";flag=1;break;}
else if(ch==2)
{gotoxy(30,48);cout<<"Player 2 wins " ;flag=1;break;}
if(i==9)break;
do{gotoxy(2,44);
cout<<"Player 2 :   Enter location number : ";gotoxy(38,44);cout<<"       ";gotoxy(39,44);
cin>>locno;
for(j=0;j<9;j++)
if(locno==sp[j])
{j=20;break;} }while((locno>9)||(locno<1)||(j==20)); sp[z++]=locno;
switch(locno){
case 1:r=0;c=0;
       break;
case 2:r=0;c=1;
       break;
case 3:r=0;c=2;
       break;
case 4:r=1;c=0;
       break;
case 5:r=1;c=1;
       break;
case 6:r=1;c=2;
       break;
case 7:r=2;c=0;
       break;
case 8:r=2;c=1;
       break;
case 9:r=2;c=2;
       break;
default:break;}  i++;
o((r*4)+15,(c*6)+15);
g[r][c]=0;
ch=check(g);
if(ch==1)
{gotoxy(30,48);
cout<<"Player 1 wins ";flag=1;break;}
else if(ch==2)
{gotoxy(30,48);cout<<"Player 2 wins " ;flag=1;break;}
}while(i<9);
if(!flag)     {
gotoxy(30,48);cout<<"The match is a draw ";}
gotoxy(27,50);cout<<"Play again (y/n) ? ";
cin>>ag;
 }while((ag=='y')||(ag=='Y'));
}


void x(int r, int c)
{gotoxy(c,r);
cout<<"\\/";gotoxy(c,r+1);
cout<<"/\\";
}


void o(int r, int c)
{gotoxy(c,r);
cout<<"ÜÜÜ";gotoxy(c,r+1);
cout<<"ÛÜÛ";
}


int check(int g[3][3])
{int x=0;
if((g[0][0]==g[0][1])&&(g[0][0]==g[0][2]))
{if(g[0][0]==1)x=1;
else x=2;}
else if((g[1][0]==g[1][1])&&(g[1][0]==g[1][2]))
{if(g[1][0]==1)x=1;
else x=2;}
else if((g[2][0]==g[2][1])&&(g[2][0]==g[2][2]))
{if(g[2][0]==1)x=1;
else x=2;}
else if((g[0][0]==g[1][0])&&(g[0][0]==g[2][0]))
{if(g[0][0]==1)x=1;
else x=2;}
else if((g[0][1]==g[1][1])&&(g[0][1]==g[2][1]))
{if(g[0][1]==1)x=1;
else x=2;}
else if((g[0][2]==g[1][2])&&(g[0][2]==g[2][2]))
{if(g[0][2]==1)x=1;
else x=2;}
else if((g[0][0]==g[1][1])&&(g[0][0]==g[2][2]))
{if(g[0][0]==1)x=1;
else x=2;}
else if((g[0][2]==g[1][1])&&(g[0][2]==g[2][0]))
{if(g[1][1]==1)x=1;
else x=2;}
return x;
}


/*
Output:

			  WELCOME TO THE GAME CENTRE
		               ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯



 Which game would you like to play ?
 1. Knots and Crosses
 2. Guess the number
 3. Exit

 Enter your choice (1,2,3) : 1



                                         Welcome to Knotts and Crosses!!
	    *******************************************


 Player 1 will use X.  Player 2 will use O.




	   1     |2    |3
	      \/ |  ÜÜÜ|  \/
	      /\ |  ÛÜÛ|  /\
	    -----|-----|-----
	   4     |5    |6
	      ÜÜÜ|  \/ |
	      ÛÜÛ|  /\ |
	    -----|-----|-----
		 |     |
	      \/ |     |  ÜÜÜ
	   7  /\ |8    |9 ÛÜÛ





 Player 1 :   Enter location number : 3



 Player 2 :   Enter location number : 4



			     Player 1 wins

			  Play again (y/n) ? n






			  Welcome to Guess a Number!!!
	******************************************************************



Choose a difficulty level (Easy,Medium,Hard) : medium


Difficulty level : Medium (numbers 1-10)
  Chances remaining : 1
  ------------------------


	       What is your guess???         Enter : 5

Incorrect....

 Sorry! You are out of chances!
 The number was 2

Play again (y/n) ?  n
*/

