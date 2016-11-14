struct ele        //structure for element info
{
char atno[5],sym[4],nm[15],state[8],type[15],yesno,atwt[5],gr[4];
}el;


void tabl()       //the periodic table
 {
   cleardevice();
   setlinestyle(0,0,1);
   setcolor(13);
   line(40,120,40,365);
   line(40,365,580,365);
   line(580,365,580,120);
   line(580,120,550,120);
   line(550,120,550,155);
   line(550,155,400,155);
   line(400,155,400,225);
   line(400,225,100,225);
   line(100,225,100,155);
   line(100,155,70,155);
   line(70,155,70,120);
   line(70,120,40,120);      //main outline done

   line(40,330,580,330);
   line(40,295,580,295);
   line(40,260,580,260);
   line(40,225,580,225);
   line(40,190,100,190);
   line(400,190,580,190);
   line(40,155,70,155);
   line(550,155,580,155);     //horizontal lines done

   line(70,120,70,365);
   line(100,190,100,365);
   line(130,225,130,365);
   line(160,225,160,365);
   line(190,225,190,365);
   line(220,225,220,365);
   line(250,225,250,365);
   line(280,225,280,365);
   line(310,225,310,365);
   line(340,225,340,365);
   line(370,225,370,365);
   line(400,225,400,365);
   line(430,155,430,365);
   line(460,155,460,365);
   line(490,155,490,365);
   line(520,155,520,365);
   line(550,155,550,365);     //vertical lines done...full grid done

   line(130,380,550,380);
   line(550,380,550,450);
   line(550,450,130,450);
   line(130,450,130,380);
   line(130,415,550,415);
   line(160,380,160,450);
   line(190,380,190,450);
   line(220,380,220,450);
   line(250,380,250,450);
   line(280,380,280,450);
   line(310,380,310,450);
   line(340,380,340,450);
   line(370,380,370,450);
   line(400,380,400,450);
   line(430,380,430,450);
   line(460,380,460,450);
   line(490,380,490,450);
   line(520,380,520,450);         //lanthnoids actinoids

   setcolor(6);
   outtextxy(53,128,"1");
   outtextxy(52,142,"H");
   setcolor(2);
   outtextxy(53,163,"3");
   outtextxy(50,177,"Li");
   outtextxy(50,198,"11");
   outtextxy(50,212,"Na");
   outtextxy(50,233,"19");
   outtextxy(52,247,"K");
   outtextxy(50,268,"37");
   outtextxy(50,282,"Rb");
   outtextxy(50,303,"55");
   outtextxy(50,317,"Cs");
   outtextxy(50,338,"87");
   outtextxy(50,352,"Fr");
   outtextxy(80,163,"4");
   outtextxy(79,177,"Be");
   outtextxy(80,198,"12");
   outtextxy(79,212,"Mg");
   outtextxy(80,233,"20");
   outtextxy(79,247,"Ca");
   outtextxy(80,268,"38");
   outtextxy(79,282,"Sr");
   outtextxy(80,303,"56");
   outtextxy(79,317,"Ba");
   outtextxy(80,338,"88");
   outtextxy(79,352,"Ra");
   outtextxy(110,233,"21");
   outtextxy(109,247,"Sc");
   outtextxy(110,268,"39");
   outtextxy(109,282,"Y");
   outtextxy(110,303,"57");
   outtextxy(105,317,"La*");
   outtextxy(110,338,"89");
   outtextxy(100,352,"Ac**");
   outtextxy(140,233,"22");
   outtextxy(139,247,"Ti");
   outtextxy(140,268,"40");
   outtextxy(139,282,"Zr");
   outtextxy(140,303,"72");
   outtextxy(139,317,"Hf");
   outtextxy(135,338,"104");
   outtextxy(139,352,"Rf");
   outtextxy(170,233,"23");
   outtextxy(169,247,"V");
   outtextxy(170,268,"41");
   outtextxy(169,282,"Nb");
   outtextxy(170,303,"73");
   outtextxy(169,317,"Ta");
   outtextxy(165,338,"105");
   outtextxy(169,352,"Db");
   outtextxy(200,233,"24");
   outtextxy(199,247,"Cr");
   outtextxy(200,268,"42");
   outtextxy(199,282,"Mo");
   outtextxy(200,303,"74");
   outtextxy(199,317,"W");
   outtextxy(195,338,"106");
   outtextxy(199,352,"Sg");
   outtextxy(230,233,"25");
   outtextxy(229,247,"Mn");
   outtextxy(230,268,"43");
   outtextxy(229,282,"Tc");
   outtextxy(230,303,"75");
   outtextxy(229,317,"Re");
   outtextxy(225,338,"107");
   outtextxy(229,352,"Bh");
   outtextxy(260,233,"26");
   outtextxy(259,247,"Fe");
   outtextxy(260,268,"44");
   outtextxy(259,282,"Ru");
   outtextxy(260,303,"76");
   outtextxy(259,317,"Os");
   outtextxy(255,338,"108");
   outtextxy(259,352,"Hs");
   outtextxy(290,233,"27");
   outtextxy(289,247,"Co");
   outtextxy(290,268,"45");
   outtextxy(289,282,"Rh");
   outtextxy(290,303,"77");
   outtextxy(289,317,"Ir");
   outtextxy(285,338,"109");
   outtextxy(289,352,"Mt");
   outtextxy(320,233,"28");
   outtextxy(319,247,"Ni");
   outtextxy(320,268,"46");
   outtextxy(319,282,"Pd");
   outtextxy(320,303,"78");
   outtextxy(319,317,"Pt");
   outtextxy(315,338,"110");
   outtextxy(319,352,"Ds");
   outtextxy(350,233,"29");
   outtextxy(349,247,"Cu");
   outtextxy(350,268,"47");
   outtextxy(349,282,"Ag");
   outtextxy(350,303,"79");
   outtextxy(349,317,"Au");
   outtextxy(345,338,"111");
   outtextxy(349,352,"Rg");
   outtextxy(380,233,"30");
   outtextxy(379,247,"Zn");
   outtextxy(380,268,"48");
   outtextxy(379,282,"Cd");
   outtextxy(380,303,"80");
   outtextxy(379,317,"Hg");
   outtextxy(375,338,"112");
   outtextxy(375,352,"Uub");
   setcolor(6);
   outtextxy(560,128,"2");
   outtextxy(559,142,"He");
   setcolor(13);
   outtextxy(412,163,"5");
   outtextxy(412,177,"B");
   setcolor(6);
   outtextxy(442,163,"6");
   outtextxy(442,177,"C");
   outtextxy(472,163,"7");
   outtextxy(472,177,"N");
   outtextxy(502,163,"8");
   outtextxy(502,177,"O");
   outtextxy(532,163,"9");
   outtextxy(532,177,"F");
   outtextxy(560,163,"10");
   outtextxy(560,177,"Ne");
   setcolor(2);
   outtextxy(410,198,"13");
   outtextxy(410,212,"Al");
   setcolor(13);
   outtextxy(440,198,"14");
   outtextxy(440,212,"Si");
   setcolor(6);
   outtextxy(470,198,"15");
   outtextxy(472,212,"P");
   outtextxy(500,198,"16");
   outtextxy(502,212,"S");
   outtextxy(530,198,"17");
   outtextxy(530,212,"Cl");
   outtextxy(560,198,"18");
   outtextxy(560,212,"Ar");
   setcolor(2);
   outtextxy(410,233,"31");
   outtextxy(410,247,"Ga");
   setcolor(13);
   outtextxy(440,233,"32");
   outtextxy(440,247,"Ge");
   outtextxy(470,233,"33");
   outtextxy(470,247,"As");
   setcolor(6);
   outtextxy(500,233,"34");
   outtextxy(500,247,"Se");
   outtextxy(530,233,"35");
   outtextxy(530,247,"Br");
   outtextxy(560,233,"36");
   outtextxy(560,247,"Kr");
   setcolor(2);
   outtextxy(410,268,"49");
   outtextxy(410,282,"In");
   outtextxy(440,268,"50");
   outtextxy(440,282,"Sn");
   setcolor(13);
   outtextxy(470,268,"51");
   outtextxy(470,282,"Sb");
   outtextxy(500,268,"52");
   outtextxy(500,282,"Te");
   setcolor(6);
   outtextxy(530,268,"53");
   outtextxy(530,282,"I");
   outtextxy(560,268,"54");
   outtextxy(560,282,"Xe");
   setcolor(2);
   outtextxy(410,303,"81");
   outtextxy(410,317,"Tl");
   outtextxy(440,303,"82");
   outtextxy(440,317,"Pb");
   outtextxy(470,303,"83");
   outtextxy(470,317,"Bi");
   setcolor(13);
   outtextxy(500,303,"84");
   outtextxy(500,317,"Po");
   setcolor(6);
   outtextxy(530,303,"85");
   outtextxy(530,317,"At");
   outtextxy(560,303,"86");
   outtextxy(560,317,"Rn");
   setcolor(2);
   outtextxy(410,350,"-");
   outtextxy(435,338,"114");
   outtextxy(435,352,"Uuq");
   outtextxy(470,350,"-");
   outtextxy(495,350,"Uuh");
   setcolor(6);
   outtextxy(530,350,"-");
   outtextxy(560,350,"-");       //main elemnts done

   setcolor(2);
   outtextxy(138,388,"58");
   outtextxy(138,402,"Ce");
   outtextxy(138,423,"90");
   outtextxy(138,437,"Th");
   outtextxy(168,388,"59");
   outtextxy(168,402,"Pr");
   outtextxy(168,423,"91");
   outtextxy(168,437,"Pa");
   outtextxy(198,388,"60");
   outtextxy(198,402,"Nd");
   outtextxy(198,423,"92");
   outtextxy(200,437,"U");
   outtextxy(228,388,"61");
   outtextxy(228,402,"Pm");
   outtextxy(228,423,"93");
   outtextxy(228,437,"Np");
   outtextxy(258,388,"62");
   outtextxy(258,402,"Sm");
   outtextxy(258,423,"94");
   outtextxy(258,437,"Pu");
   outtextxy(288,388,"63");
   outtextxy(288,402,"Eu");
   outtextxy(288,423,"95");
   outtextxy(288,437,"Am");
   outtextxy(318,388,"64");
   outtextxy(318,402,"Gd");
   outtextxy(318,423,"96");
   outtextxy(318,437,"Cm");
   outtextxy(348,388,"65");
   outtextxy(348,402,"Tb");
   outtextxy(348,423,"97");
   outtextxy(348,437,"Bk");
   outtextxy(378,388,"66");
   outtextxy(378,402,"Dy");
   outtextxy(378,423,"98");
   outtextxy(378,437,"Cf");
   outtextxy(408,388,"67");
   outtextxy(408,402,"Ho");
   outtextxy(408,423,"99");
   outtextxy(408,437,"Es");
   outtextxy(438,388,"68");
   outtextxy(438,402,"Er");
   outtextxy(436,423,"100");
   outtextxy(438,437,"Fm");
   outtextxy(468,388,"69");
   outtextxy(468,402,"Tm");
   outtextxy(466,423,"101");
   outtextxy(468,437,"Md");
   outtextxy(498,388,"70");
   outtextxy(498,402,"Yb");
   outtextxy(496,423,"102");
   outtextxy(498,437,"No");
   outtextxy(528,388,"71");
   outtextxy(528,402,"Lu");
   outtextxy(526,423,"103");
   outtextxy(528,437,"Lr");
   outtextxy(10,395,"  * Lanthanoids");
   outtextxy(10,425,"   ** Actinoids");

   setcolor(2);
   outtextxy(30,20,"METALS");
   setcolor(13);
   outtextxy(30,40,"METALLOIDS");
   setcolor(6);
   outtextxy(30,60,"NON-METALS");

   setcolor(14);                            //menu
   outtextxy(420,20,"1. Add/Edit Data");
   outtextxy(420,40,"2. Activate mouse to view");
   outtextxy(420,60,"3. Exit");
   outtextxy(420,85,"Enter choice :");

}



void tablhead()                     //first display screen
 {
    cleardevice();
    setcolor(4) ;
    settextstyle(4,0,8);
    outtextxy(80, 100," MODERN");
    outtextxy(80, 200,"PERIODIC");
    outtextxy(80, 300,"  TABLE");
    settextstyle(0,0,0);
 }



void infobx()            //box displaying info of elements
 {
   setcolor(8);
   setlinestyle(0,0,3);
   rectangle(110,125,390,215);
   setfillstyle(SOLID_FILL,0);
   floodfill(115,130,8);
   setcolor(7);
   rectangle(110,125,390,215);
   outtextxy(120,135,"Element:");
   outtextxy(300,135,"Symbol:");
   outtextxy(120,155,"Atomic No:");
   outtextxy(253,155,"Atmomic Mass:");
   outtextxy(120,175,"Group No:");
   outtextxy(250,175,"Type:");
   outtextxy(120,195,"State at STP:");

 }

void  disinfo(char atmn[5])       //searching and displaying info
 {
   ifstream ifil("c:\\project\\pertbl.dat",ios::in|ios::binary);
   ifil.read((char*)&el,sizeof(el));
   while(ifil)                     //searching for info
    {
      if(strcmpi(el.atno,atmn)==0)
	{
       if(el.yesno=='y')
	 {
	   infobx();
	   outtextxy(190,135,el.nm);
	   outtextxy(360,135,el.sym);
	   outtextxy(200,155,el.atno);
	   outtextxy(360,155,el.atwt);
	   outtextxy(200,175,el.gr);
	   outtextxy(290,175,el.type);
	   outtextxy(225,195,el.state);
	   break;
	 }
       else
	 {
	    infobx();
	    outtextxy(190,135,"No Data");
	    outtextxy(200,155,el.atno);
	    break;
	 }
	}
      ifil.read((char*)&el,sizeof(el));
     }
  ifil.close();
 }


void addedt()           //add/edit data
 {
   cleardevice();
   ele temp;
   outtextxy(20,37,"Enter Atomic No. of the element :");
   gotoxy(38,3);
   gets(temp.atno);
   outtextxy(20,85,"Enter Name:");
   gotoxy(15,6);
   gets(temp.nm);
   outtextxy(20,115,"Enter Symbol:");
   gotoxy(17,8);
   gets(temp.sym);
   outtextxy(20,148,"Enter Atomic Wt.:");
   gotoxy(21,10);
   gets(temp.atwt);
   outtextxy(20,180,"Enter Type:");
   gotoxy(15,12);
   gets(temp.type);
   outtextxy(20,212,"Enter Group No.:");
   gotoxy(20,14);
   gets(temp.gr);
   outtextxy(20,245,"Enter State at Room Temperature:");
   gotoxy(36,16);
   gets(temp.state);
   temp.yesno='y';

   ifstream ifile("c:\\project\\pertbl.dat",ios::in|ios::binary);
   ofstream ofil("c:\\project\\temp.dat",ios::out|ios::binary);
   ifile.read((char*)&el,sizeof(el));

   while(ifile)                    //writing new data
    {
      if(strcmpi(temp.atno,el.atno)==0)
	ofil.write((char*)&temp,sizeof(temp));
      else
	ofil.write((char*)&el,sizeof(temp));

      ifile.read((char*)&el,sizeof(el));
    }

   ifile.close();
   ofil.close();

   remove("c:\\project\\pertbl.dat");
   rename("c:\\project\\temp.dat","c:\\project\\pertbl.dat");
}

void display()                  //determining position of mouse
 {                              //and element at position
   int x,y,cl,a,b;
   char ano[4],ano2[4];
   a=100;
   b=400;
   setposi(a,b);
   callmouse();
   restrictmouseptr();
   do
    {
      mouseposi(x,y,cl);
      gotoxy(10,9);
      strcpy(ano2,ano);

      if(x>=40 && x<=70 && y>=120 && y<=155)
	 strcpy(ano,"1");
      if(x>=550 && x<=580 && y>=120 && y<=155)
	 strcpy(ano,"2");
      if(x>=40 && x<=70 && y>=155 && y<=190)
	 strcpy(ano,"3");
      if(x>=70 && x<=100 && y>=155 && y<=190)
	 strcpy(ano,"4");
      if(x>=400 && x<=430 && y>=155 && y<=190)
	 strcpy(ano,"5");
      if(x>=430 && x<=460 && y>=155 && y<=190)
	 strcpy(ano,"6");
      if(x>=460 && x<=490 && y>=155 && y<=190)
	 strcpy(ano,"7");
      if(x>=490 && x<=520 && y>=155 && y<=190)
	 strcpy(ano,"8");
      if(x>=520 && x<=550 && y>=155 && y<=190)
	 strcpy(ano,"9");
      if(x>=550 && x<=580 && y>=155 && y<=190)
	 strcpy(ano,"10");
      if(x>=40 && x<=70 && y>=190 && y<=225)
	 strcpy(ano,"11");
      if(x>=70 && x<=100 && y>=190 && y<=225)
	 strcpy(ano,"12");
      if(x>=400 && x<=430 && y>=190 && y<=225)
	 strcpy(ano,"13");
      if(x>=430 && x<=460 && y>=190 && y<=225)
	 strcpy(ano,"14");
      if(x>=460 && x<=490 && y>=190 && y<=225)
	 strcpy(ano,"15");
      if(x>=490 && x<=520 && y>=190 && y<=225)
	 strcpy(ano,"16");
      if(x>=520 && x<=550 && y>=190 && y<=225)
	 strcpy(ano,"17");
      if(x>=550 && x<=580 && y>=190 && y<=225)
	 strcpy(ano,"18");
      if(x>=40 && x<=70 && y>=225 && y<=260)
	 strcpy(ano,"19");
      if(x>=70 && x<=100 && y>=225 && y<=260)
	 strcpy(ano,"20");
      if(x>=100 && x<=130 && y>=225 && y<=260)
	 strcpy(ano,"21");
      if(x>=130 && x<=160 && y>=225 && y<=260)
	 strcpy(ano,"22");
      if(x>=160 && x<=190 && y>=225 && y<=260)
	 strcpy(ano,"23");
      if(x>=190 && x<=220 && y>=225 && y<=260)
	 strcpy(ano,"24");
      if(x>=220 && x<=250 && y>=225 && y<=260)
	 strcpy(ano,"25");
      if(x>=250 && x<=280 && y>=225 && y<=260)
	 strcpy(ano,"26");
      if(x>=280 && x<=310 && y>=225 && y<=260)
	 strcpy(ano,"27");
      if(x>=310 && x<=340 && y>=225 && y<=260)
	 strcpy(ano,"28");
      if(x>=340 && x<=370 && y>=225 && y<=260)
	 strcpy(ano,"29");
      if(x>=370 && x<=400 && y>=225 && y<=260)
	 strcpy(ano,"30");
      if(x>=400 && x<=430 && y>=225 && y<=260)
	 strcpy(ano,"31");
      if(x>=430 && x<=460 && y>=225 && y<=260)
	 strcpy(ano,"32");
      if(x>=460 && x<=490 && y>=225 && y<=260)
	 strcpy(ano,"33");
      if(x>=490 && x<=520 && y>=225 && y<=260)
	 strcpy(ano,"34");
      if(x>=520 && x<=550 && y>=225 && y<=260)
	 strcpy(ano,"35");
      if(x>=550 && x<=580 && y>=225 && y<=260)
	 strcpy(ano,"36");
      if(x>=40 && x<=70 && y>=260 && y<=295)
	 strcpy(ano,"37");
      if(x>=70 && x<=100 && y>=260 && y<=295)
	 strcpy(ano,"38");
      if(x>=100 && x<=130 && y>=260 && y<=295)
	 strcpy(ano,"39");
      if(x>=130 && x<=160 && y>=260 && y<=295)
	 strcpy(ano,"40");
      if(x>=160 && x<=190 && y>=260 && y<=295)
	 strcpy(ano,"41");
      if(x>=190 && x<=220 && y>=260 && y<=295)
	 strcpy(ano,"42");
      if(x>=220 && x<=250 && y>=260 && y<=295)
	 strcpy(ano,"43");
      if(x>=250 && x<=280 && y>=260 && y<=295)
	 strcpy(ano,"44");
      if(x>=280 && x<=310 && y>=260 && y<=295)
	 strcpy(ano,"45");
      if(x>=310 && x<=340 && y>=260 && y<=295)
	 strcpy(ano,"46");
      if(x>=340 && x<=370 && y>=260 && y<=295)
	 strcpy(ano,"47");
      if(x>=370 && x<=400 && y>=260 && y<=295)
	 strcpy(ano,"48");
      if(x>=400 && x<=430 && y>=260 && y<=295)
	 strcpy(ano,"49");
      if(x>=430 && x<=460 && y>=260 && y<=295)
	 strcpy(ano,"50");
      if(x>=460 && x<=490 && y>=260 && y<=295)
	 strcpy(ano,"51");
      if(x>=490 && x<=520 && y>=260 && y<=295)
	 strcpy(ano,"52");
      if(x>=520 && x<=550 && y>=260 && y<=295)
	 strcpy(ano,"53");
      if(x>=550 && x<=580 && y>=260 && y<=295)
	 strcpy(ano,"54");
      if(x>=40 && x<=70 && y>=295 && y<=330)
	 strcpy(ano,"55");
      if(x>=70 && x<=100 && y>=295 && y<=330)
	 strcpy(ano,"56");
      if(x>=100 && x<=130 && y>=295 && y<=330)
	 strcpy(ano,"57");
      if(x>=130 && x<=160 && y>=380 && y<=415)
	 strcpy(ano,"58");
      if(x>=160 && x<=190 && y>=380 && y<=415)
	 strcpy(ano,"59");
      if(x>=190 && x<=220 && y>=380 && y<=415)
	 strcpy(ano,"60");
      if(x>=220 && x<=250 && y>=380 && y<=415)
	 strcpy(ano,"61");
      if(x>=250 && x<=280 && y>=380 && y<=415)
	 strcpy(ano,"62");
      if(x>=280 && x<=310 && y>=380 && y<=415)
	 strcpy(ano,"63");
      if(x>=310 && x<=340 && y>=380 && y<=415)
	 strcpy(ano,"64");
      if(x>=340 && x<=370 && y>=380 && y<=415)
	 strcpy(ano,"65");
      if(x>=370 && x<=400 && y>=380 && y<=415)
	 strcpy(ano,"66");
      if(x>=400 && x<=430 && y>=380 && y<=415)
	 strcpy(ano,"67");
      if(x>=430 && x<=460 && y>=380 && y<=415)
	 strcpy(ano,"68");
      if(x>=460 && x<=490 && y>=380 && y<=415)
	 strcpy(ano,"69");
      if(x>=490 && x<=520 && y>=380 && y<=415)
	 strcpy(ano,"70");
      if(x>=520 && x<=550 && y>=380 && y<=415)
	 strcpy(ano,"71");
      if(x>=130 && x<=160 && y>=295 && y<=330)
	 strcpy(ano,"72");
      if(x>=160 && x<=190 && y>=295 && y<=330)
	 strcpy(ano,"73");
      if(x>=190 && x<=220 && y>=295 && y<=330)
	 strcpy(ano,"74");
      if(x>=220 && x<=250 && y>=295 && y<=330)
	 strcpy(ano,"75");
      if(x>=250 && x<=280 && y>=295 && y<=330)
	 strcpy(ano,"76");
      if(x>=280 && x<=310 && y>=295 && y<=330)
	 strcpy(ano,"77");
      if(x>=310 && x<=340 && y>=295 && y<=330)
	 strcpy(ano,"78");
      if(x>=340 && x<=370 && y>=295 && y<=330)
	 strcpy(ano,"79");
      if(x>=370 && x<=400 && y>=295 && y<=330)
	 strcpy(ano,"80");
      if(x>=400 && x<=430 && y>=295 && y<=330)
	 strcpy(ano,"81");
      if(x>=430 && x<=460 && y>=295 && y<=330)
	 strcpy(ano,"82");
      if(x>=460 && x<=490 && y>=295 && y<=330)
	 strcpy(ano,"83");
      if(x>=490 && x<=520 && y>=295 && y<=330)
	 strcpy(ano,"84");
      if(x>=520 && x<=550 && y>=295 && y<=330)
	 strcpy(ano,"85");
      if(x>=550 && x<=580 && y>=295 && y<=330)
	 strcpy(ano,"86");
      if(x>=40 && x<=70 && y>=330 && y<=365)
	 strcpy(ano,"87");
      if(x>=70 && x<=100 && y>=330 && y<=365)
	 strcpy(ano,"88");
      if(x>=100 && x<=130 && y>=330 && y<=365)
	 strcpy(ano,"89");
      if(x>=130 && x<=160 && y>=415 && y<=450)
	 strcpy(ano,"90");
      if(x>=160 && x<=190 && y>=415 && y<=450)
	 strcpy(ano,"91");
      if(x>=190 && x<=220 && y>=415 && y<=450)
	 strcpy(ano,"92");
      if(x>=220 && x<=250 && y>=415 && y<=450)
	 strcpy(ano,"93");
      if(x>=250 && x<=280 && y>=415 && y<=450)
	 strcpy(ano,"94");
      if(x>=280 && x<=310 && y>=415 && y<=450)
	 strcpy(ano,"95");
      if(x>=310 && x<=340 && y>=415 && y<=450)
	 strcpy(ano,"96");
      if(x>=340 && x<=370 && y>=415 && y<=450)
	 strcpy(ano,"97");
      if(x>=370 && x<=400 && y>=415 && y<=450)
	 strcpy(ano,"98");
      if(x>=400 && x<=430 && y>=415 && y<=450)
	 strcpy(ano,"99");
      if(x>=430 && x<=460 && y>=415 && y<=450)
	 strcpy(ano,"100");
      if(x>=460 && x<=490 && y>=415 && y<=450)
	 strcpy(ano,"101");
      if(x>=490 && x<=520 && y>=415 && y<=450)
	 strcpy(ano,"102");
      if(x>=520 && x<=550 && y>=415 && y<=450)
	 strcpy(ano,"103");
      if(x>=130 && x<=160 && y>=330 && y<=365)
	 strcpy(ano,"104");
      if(x>=160 && x<=190 && y>=330 && y<=365)
	 strcpy(ano,"105");
      if(x>=190 && x<=220 && y>=330 && y<=365)
	 strcpy(ano,"106");
      if(x>=220 && x<=250 && y>=330 && y<=365)
	 strcpy(ano,"107");
      if(x>=250 && x<=280 && y>=330 && y<=365)
	 strcpy(ano,"108");
      if(x>=280 && x<=310 && y>=330 && y<=365)
	 strcpy(ano,"109");
      if(x>=310 && x<=340 && y>=330 && y<=365)
	 strcpy(ano,"110");
      if(x>=340 && x<=370 && y>=330 && y<=365)
	 strcpy(ano,"111");
      if(x>=370 && x<=400 && y>=330 && y<=365)
	 strcpy(ano,"112");

      if(strcmpi(ano2,ano)==0)
	 continue;
      disinfo(ano);

    }while(!kbhit());             // do ends
   mousehide();
   getch();
 }

void pertbl()              //main function containing function calls
 {
   char ch;
   int flag=1;
   cleardevice();
   tablhead();
   getch();
   do
    {
      tabl();
      infobx();
      do
       {
	 gotoxy(68,6);
	 cout<<"     ";
	 gotoxy(68,6);
	 cin>>ch;
       }while((ch!='1')&&(ch!='2')&&(ch!='3'));
       switch(ch)
	{
	  case '1':addedt();
		   break;
	  case '2':outtextxy(80,465,"Press any key to exit view and disable mouse");
		   display();
		   break;
	  case '3':flag=0;
		   break;
	  default:break;
	}
    }while(flag);
   setlinestyle(0,0,0);
   cleardevice();
 }
