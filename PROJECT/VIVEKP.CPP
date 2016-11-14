void guess();
void oxogrid();
void oxo();
void x(int r, int c);
void o(int r, int c);
int check(int g[3][3]);
int compctr(int g[3][3],int i);

void games()             //main function to display choices
 {                       // and call proper function
   char gameno;
   do
    {
      clrscr();
      cout<<"\n                          WELCOME TO THE GAME CENTRE\n";
      cout<<"                     ¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯¯\n\n\n\n";
      cout<<" Which game would you like to play ?\n";
      cout<<" 1. Knots and Crosses\n";
      cout<<" 2. Guess the number\n";
      cout<<" 3. Exit\n\n";
      cout<<" Enter your choice (1,2,3) : ";
      do
       {
	 gotoxy(30,12);
	 cout<<"           ";
	 gotoxy(30,12);
	 cin>>gameno;
       }while((gameno!='1')&&(gameno!='2')&&(gameno!='3'));
      switch(gameno)
       {
	 case '1':oxo();
		  break;
	 case '2':guess();
		  break;
	 case '3':cout<<"\n\nBye..";
		  break;
	 default:cout<<"\n\n\nWrong choice!! \n\nExiting!!";
		  break;
       }
    }while((gameno=='1')||(gameno=='2'));
  getch();
 }


void guess()               //guess the number
 {
   int a,n,i,guess;
   char l[15],ag;
   do
    {
      randomize();
      clrscr();
      cout<<"\n                          Welcome to Guess a Number!!!\n";
      cout<<"        ******************************************************************\n\n\n\n";
      cout<<"Choose a difficulty level (Easy,Medium,Hard) : ";

      do                             //accept difficulty level
       {
	 gotoxy(48,7);
	 cout<<"       ";
	 gotoxy(48,7);
	 cin>>l;
	 l[0]=tolower(l[0]);
       }while((l[0]!='e')&&(l[0]!='m')&&(l[0]!='h'));

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
	 {
	   cout<<"\nCorrect!!! Well Done!!! ";
	   break;
	 }
	else
	 {
	   cout<<"\nIncorrect....";
	   getch();
	 }
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


void oxogrid()                 //grid for knots and crosses
 {
   gotoxy(6,14);
   cout<<"      1     |2    |3    \n";
   gotoxy(6,15);
   cout<<"            |     |       \n";
   gotoxy(6,16);
   cout<<"            |     |       \n";
   gotoxy(6,17);
   cout<<"       -----|-----|-----  \n";
   gotoxy(6,18);
   cout<<"      4     |5    |6    \n";
   gotoxy(6,19);
   cout<<"            |     |       \n";
   gotoxy(6,20);
   cout<<"            |     |       \n";
   gotoxy(6,21);
   cout<<"       -----|-----|-----  \n";
   gotoxy(6,22);
   cout<<"            |     |    \n";
   gotoxy(6,23);
   cout<<"            |     |       \n";
   gotoxy(6,24);
   cout<<"      7     |8    |9      \n\n";
   gotoxy(6,25);
 }


void oxo()                   //knots and crosses
 {
   char ag,locnoch,prsnorcomp=0;
   do
    {
      clrscr();
      cout<<"\n                Welcome to Knotts and Crosses!!\n";
      cout<<"            *******************************************\n\n\n";
      cout<<"\n\n\n\n 1. Against player\n\n 2. Against computer";
      cout<<"\n\n\n  Enter choice : ";
      cin>>prsnorcomp;
      if((prsnorcomp!='1')&&(prsnorcomp!='2'))
	{
	cout<<"\n\n\n\n\n      Invalid choice. Enter again";
	getch();
	}
    }while((prsnorcomp!='1')&&(prsnorcomp!='2'));
   do
    {
      int g[3][3]={3,4,5,6,7,8,9,10,11},flag=0;
      int ch,j,z=0,locno,r,c,i=0,sp[9]={11,11,11,11,11,11,11,11,11};
      clrscr();
      cout<<"\n                Welcome to Knotts and Crosses!!\n";
      cout<<"            *******************************************\n\n\n";
      cout<<" Player 1 will use X.  ";
      if(prsnorcomp=='2')
      cout<<"Computer will use O.\n\n";
      else
      cout<<"Player 2 will use O.\n\n";
      oxogrid();
      do
       {
	 do
	  {
	    gotoxy(2,40);
	    cout<<"Player 1 :   Enter location number : ";
	    do
	     {
	       gotoxy(38,40);
	       cout<<"               ";
	       gotoxy(39,40);
	       cin>>locnoch;
	      }while((locnoch!='1')&&(locnoch!='2')&&(locnoch!='3')&&(locnoch!='4')&&(locnoch!='5')&&(locnoch!='6')&&(locnoch!='7')&&(locnoch!='8')&&(locnoch!='9'));
	    locno=locnoch-48;
	    for(j=0;j<9;j++)
	      if(locno==sp[j])
		{
		  j=20;
		  break;
		}
	  }while((locno>9)||(locno<1)||(j==20));
	 sp[z++]=locno;

	 switch(locno)         //assigning position to put mark at
	  {
	    case 1:r=0;
		   c=0;
		   break;
	    case 2:r=0;
		   c=1;
		   break;
	    case 3:r=0;
		   c=2;
		   break;
	    case 4:r=1;
		   c=0;
		   break;
	    case 5:r=1;
		   c=1;
		   break;
	    case 6:r=1;
		   c=2;
		   break;
	    case 7:r=2;
		   c=0;
		   break;
	    case 8:r=2;
		   c=1;
		   break;
	    case 9:r=2;
		   c=2;
		   break;
	    default:break;
	 }

	x((4*r)+15,(c*6)+15);
	g[r][c]=1;
	ch=check(g);                 //checking if a player has won
	i++;
	if(ch==1)
	 {
	   gotoxy(30,48);
	   cout<<"Player 1 wins ";
	   flag=1;
	   break;
	 }
	else if(ch==2)
	  {
	    gotoxy(30,48);
	    if(prsnorcomp=='2')
	    cout<<"Computer wins";
	    else
	    cout<<"Player 2 wins " ;
	    flag=1;
	    break;
	  }
	if(i==9)
	  break;
	do
	 { if(prsnorcomp=='1')
	   {
	     gotoxy(2,44);
	     cout<<"Player 2 :   Enter location number : ";
	     do
	      {
		gotoxy(38,44);
		cout<<"                  ";
		gotoxy(39,44);
		cin>>locnoch;
	      }while((locnoch!='1')&&(locnoch!='2')&&(locnoch!='3')&&(locnoch!='4')&&(locnoch!='5')&&(locnoch!='6')&&(locnoch!='7')&&(locnoch!='8')&&(locnoch!='9'));
	     locno=locnoch-48;
	   }
	   else
	     locno=compctr(g,i);
	   for(j=0;j<9;j++)
	     if(locno==sp[j])
	      {
		j=20;
		break;
	      }
	 }while((locno>9)||(locno<1)||(j==20));
	 sp[z++]=locno;
	switch(locno)             //assigning position to put mark at
	 {
	   case 1:r=0;
		  c=0;
		  break;
	   case 2:r=0;
		  c=1;
		  break;
	   case 3:r=0;
		  c=2;
		  break;
	   case 4:r=1;
		  c=0;
		  break;
	   case 5:r=1;
		  c=1;
		  break;
	   case 6:r=1;
		  c=2;
		  break;
	   case 7:r=2;
		  c=0;
		  break;
	   case 8:r=2;
		  c=1;
		  break;
	   case 9:r=2;
		  c=2;
		  break;
	   default:break;
	 }
       i++;
       o((r*4)+15,(c*6)+15);
       g[r][c]=0;
       ch=check(g);             //checking if a player has won
       if(ch==1)
	{
	  gotoxy(30,48);
	  cout<<"Player 1 wins ";
	  flag=1;
	  break;
	}
       else if(ch==2)
	 {
	   gotoxy(30,48);
	   if(prsnorcomp=='2')
	   cout<<"Computer wins ";
	   else
	   cout<<"Player 2 wins " ;
	   flag=1;
	   break;
	 }
     }while(i<9);
     if(!flag)
      {
	 gotoxy(30,48);
	 cout<<"The match is a draw ";
      }
     gotoxy(27,50);
     cout<<"Play again (y/n) ? ";
     cin>>ag;
   }while((ag=='y')||(ag=='Y'));
}


void x(int r, int c)            //mark for player 1
 {
   gotoxy(c,r);
   cout<<"\\/";
   gotoxy(c,r+1);
   cout<<"/\\";
 }


void o(int r, int c)           //mark for player 2
 {
   gotoxy(c,r);
   cout<<"ÜÜÜ";
   gotoxy(c,r+1);
   cout<<"ÛÜÛ";
 }


int check(int g[3][3])               //function to check
 {                                   //if a player has won
   int x=0;
   if((g[0][0]==g[0][1])&&(g[0][0]==g[0][2]))
    {
      if(g[0][0]==1)
	x=1;
      else
	x=2;
    }
    else if((g[1][0]==g[1][1])&&(g[1][0]==g[1][2]))
       {
	 if(g[1][0]==1)
	   x=1;
	 else
	   x=2;
       }
     else if((g[2][0]==g[2][1])&&(g[2][0]==g[2][2]))
	   {
	    if(g[2][0]==1)
	      x=1;
	    else
	      x=2;
	   }
      else if((g[0][0]==g[1][0])&&(g[0][0]==g[2][0]))
	    {
	      if(g[0][0]==1)
		x=1;
	      else
		x=2;
	    }
	else if((g[0][1]==g[1][1])&&(g[0][1]==g[2][1]))
	       {
		 if(g[0][1]==1)
		   x=1;
		 else
		   x=2;
	       }
	  else if((g[0][2]==g[1][2])&&(g[0][2]==g[2][2]))
		    {
		      if(g[0][2]==1)
			x=1;
		      else
			x=2;
		    }
		else if((g[0][0]==g[1][1])&&(g[0][0]==g[2][2]))
		       {
			 if(g[0][0]==1)
			   x=1;
			 else
			   x=2;
		       }
		    else if((g[0][2]==g[1][1])&&(g[0][2]==g[2][0]))
			   {
			     if(g[1][1]==1)
			       x=1;
			     else
			       x=2;
			   }

return x;
}


int compctr(int g[3][3],int moveno)
{
  short int no;
  randomize();
  if((g[0][0]==0)&&(g[0][1]==0)&&(g[0][2]>1))
    return 3;
  if((g[0][0]==0)&&(g[1][1]==0)&&(g[2][2]>1))
    return 9;
  if((g[0][0]==0)&&(g[1][0]==0)&&(g[2][0]>1))
    return  7;
  if((g[0][0]==0)&&(g[2][2]==0)&&(g[1][1]>1))
    return  5;
  if((g[0][0]==0)&&(g[0][2]==0)&&(g[0][1]>1))
    return  2;
  if((g[0][0]==0)&&(g[2][0]==0)&&(g[1][0]>1))
    return  4;
  if((g[1][1]==0)&&(g[2][2]==0)&&(g[0][0]>1))
    return  1;
  if((g[1][0]==0)&&(g[2][0]==0)&&(g[0][0]>1))
    return  1;
  if((g[0][1]==0)&&(g[0][2]==0)&&(g[0][0]>1))
    return  1;
  //one part done
  if((g[1][0]==0)&&(g[1][1]==0)&&(g[1][2]>1))
    return  6;
  if((g[1][0]==0)&&(g[1][2]==0)&&(g[1][1]>1))
    return  5;
  if((g[1][1]==0)&&(g[1][2]==0)&&(g[1][0]>1))
    return  4;
  //some  more dn
  if((g[2][0]==0)&&(g[2][1]==0)&&(g[2][2]>1))
    return  9;
  if((g[2][0]==0)&&(g[2][2]==0)&&(g[2][1]>1))
    return  8;
  if((g[2][1]==0)&&(g[2][2]==0)&&(g[2][0]>1))
    return  7;
  //some more

  if((g[0][1]==0)&&(g[1][1]==0)&&(g[2][1]>1))
    return  8;
  if((g[0][1]==0)&&(g[2][1]==0)&&(g[1][1]>1))
    return  5;
  if((g[1][1]==0)&&(g[2][1]==0)&&(g[0][1]>1))
    return  2;

  if((g[0][2]==0)&&(g[1][2]==0)&&(g[2][2]>1))
    return  9;
  if((g[0][2]==0)&&(g[2][2]==0)&&(g[1][2]>1))
    return  6;
  if((g[1][2]==0)&&(g[2][2]==0)&&(g[0][2]>1))
    return  3;
  //more dn
  //now, other diagonal
  if((g[0][2]==0)&&(g[1][1]==0)&&(g[2][0]>1))
    return  7;
  if((g[0][2]==0)&&(g[2][0]==0)&&(g[1][1]>1))
    return  5;
  if((g[1][1]==0)&&(g[2][0]==0)&&(g[0][2]>1))
    return  3;
  //putting to win done

  if((g[0][0]==1)&&(g[0][1]==1)&&(g[0][2]>1))
    return  3;
  if((g[0][0]==1)&&(g[1][1]==1)&&(g[2][2]>1))
    return  9;
  if((g[0][0]==1)&&(g[1][0]==1)&&(g[2][0]>1))
    return  7;
  if((g[0][0]==1)&&(g[2][2]==1)&&(g[1][1]>1))
    return  5;
  if((g[0][0]==1)&&(g[0][2]==1)&&(g[0][1]>1))
    return  2;
  if((g[0][0]==1)&&(g[2][0]==1)&&(g[1][0]>1))
    return  4;
  if((g[1][1]==1)&&(g[2][2]==1)&&(g[0][0]>1))
    return  1;
  if((g[1][0]==1)&&(g[2][0]==1)&&(g[0][0]>1))
    return  1;
  if((g[0][1]==1)&&(g[0][2]==1)&&(g[0][0]>1))
    return  1;
  //one part blocking done
  if((g[1][0]==1)&&(g[1][1]==1)&&(g[1][2]>1))
    return  6;
  if((g[1][0]==1)&&(g[1][2]==1)&&(g[1][1]>1))
    return  5;
  if((g[1][1]==1)&&(g[1][2]==1)&&(g[1][0]>1))
    return  4;
  //some  more dn
  if((g[2][0]==1)&&(g[2][1]==1)&&(g[2][2]>1))
    return  9;
  if((g[2][0]==1)&&(g[2][2]==1)&&(g[2][1]>1))
    return  8;
  if((g[2][1]==1)&&(g[2][2]==1)&&(g[2][0]>1))
    return  7;
  //some more block

  if((g[0][1]==1)&&(g[1][1]==1)&&(g[2][1]>1))
    return  8;
  if((g[0][1]==1)&&(g[2][1]==1)&&(g[1][1]>1))
    return  5;
  if((g[1][1]==1)&&(g[2][1]==1)&&(g[0][1]>1))
    return  2;

  if((g[0][2]==1)&&(g[1][2]==1)&&(g[2][2]>1))
    return  9;
  if((g[0][2]==1)&&(g[2][2]==1)&&(g[1][2]>1))
    return  6;
  if((g[1][2]==1)&&(g[2][2]==1)&&(g[0][2]>1))
    return  3;
  //more block dn
  //now, other diagonal
  if((g[0][2]==1)&&(g[1][1]==1)&&(g[2][0]>1))
    return  7;
  if((g[0][2]==1)&&(g[2][0]==1)&&(g[1][1]>1))
    return  5;
  if((g[1][1]==1)&&(g[2][0]==1)&&(g[0][2]>1))
    return  3;
  //putting to block done
  //now to block doublers
  if(((g[0][0]==1)||(g[0][2]==1)||(g[2][0]==1)||(g[2][2]==1))&&(g[1][1]>1)&&(moveno==1))
    return  5;
  /*if((moveno==1)&&(g[1][1]==1))
    return 8;    */
  if(((g[0][0]==g[2][2])&&(g[0][0]==1))||((g[0][2]==g[2][0])&&(g[0][2]==1)))
    {
     if((g[0][1]>1)||(g[1][0]>1)||(g[1][2]>1)||(g[2][1]>1))
      {
	do
	 {
	   no=random(4)+1;
	   no*=2;
	   no--;
	 }while(!(g[no/3][no%3]>1));
	no++;
	return no;
      }
    }

   if((g[1][1]==1)&&(moveno==3))
    {
     int pp[4]={1,3,7,9},rnno;
     do
      {
       rnno=pp[random(4)]-1;
       if(g[rnno/3][rnno%3]>1)
	{
	 rnno++;
	 return rnno;
	}
       }while(1);
    }


   if(g[1][1]>1)
    return 5;

   if((g[1][1]==1)&&(moveno==1))
     {
      int pp[4]={1,3,7,9};
      return pp[random(4)];
     }

   if(((g[1][2]==1)&&((g[0][0]==1)||(g[2][0]==1)))&&(moveno==3))
       if(g[2][0]==1)
	 return 2;
       else
	 return 8;


   if(((g[1][0]==1)&&((g[0][2]==1)||(g[2][2]==1)))&&(moveno==3))
       if(g[2][2]==1)
	 return 2;
       else
	 return 8;

   if((g[0][0]==1)&&(g[2][1]==1)&&(moveno==3))
       return 7;

   //
   //   master blocking
   //

   short int r=0,c=0,flag=-1;
   short int unmrkrows[4]={-1,-1,-1,-1},unmrkcols[4]={-1,-1,-1,-1},i=0,j=0;
    //getting unmarked rows
    do
    {
    flag=-1;
      for(c=0;c<3;c++)
       {
	if(g[r][c]==0)
	 flag=1;
       }
       if(flag==-1)
	 unmrkrows[i++]=r;
    r++;
    }while(r<3);
    i=0;r=0;c=0;

    //getting unmarked columns
    do
    {
    flag=-1;
      for(r=0;r<3;r++)
       {
	if(g[r][c]==0)
	 flag=1;
       }
       if(flag==-1)
	 unmrkcols[i++]=c;
    c++;
    }while(c<3);
   flag=0;i=0;j=0;
/*   gotoxy(40,20);
   cout<<unmrkrows[0]<<"  "<<unmrkrows[1]<<"  "<<unmrkrows[2]<<"  "<<unmrkrows[3];
   gotoxy(40,21);
   cout<<unmrkcols[0]<<"  "<<unmrkcols[1]<<"  "<<unmrkcols[2]<<"  "<<unmrkcols[3];
 */
  for(i=0;unmrkrows[i]!=-1;i++)
  {
   for(j=0;unmrkcols[j]!=-1;j++)
    {
     if(g[unmrkrows[i]][unmrkcols[j]]>1)
       {
	 no=(unmrkrows[i]*3)+unmrkcols[j]+1;
	 return no;
       }
    }
  }

  i=0;j=0;
  if((unmrkrows[0]==-1)&&(unmrkcols[0]!=-1))
    {
     for(i=0;unmrkcols[i]!=-1;i++)
       for(j=0;j<3;j++)
	 if(g[j][unmrkcols[i]]>1)
	  {
	    no=(j*3)+unmrkcols[i]+1;
	    return no;
	  }
    }

    i=0;j=0;
  if((unmrkcols[0]==-1)&&(unmrkrows[0]!=-1))
    {
     for(i=0;unmrkrows[i]!=-1;i++)
       for(j=0;j<3;j++)
	 if(g[unmrkrows[i]][j]>1)
	  {
	    no=(unmrkrows[i]*3)+j+1;
	    return no;
	  }
    }
   //
   //    master blocking end
   //


  do
  {
    no=random(9);
  }while(!(g[no/3][no%3]>1));
  no++;
 return no;
}
