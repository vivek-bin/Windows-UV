union REGS in, out;
int callmouse()      //call mouse pointer
 {
   in.x.ax=1;
   int86(51,&in,&out);
   return 1;
 }

void mouseposi(int &xpos, int &ypos, int &click)  //return current
 {                                                //position of mouse
   in.x.ax=3;
   int86(51,&in,&out);
   click=out.x.bx;
   xpos=out.x.cx;
   ypos=out.x.dx;
 }

int mousehide()       //disable mouse
 {
   in.x.ax=2;
   int86(51,&in,&out);
   return 1;
 }

void setposi(int &xpos, int &ypos)    //set default position
 {                                    //of mouse
   in.x.ax=4;
   in.x.cx=xpos;
   in.x.dx=ypos;
   int86(51,&in,&out);
 }

void restrictmouseptr()       //restrict mouse to specific area
 {
   in.x.ax=7;
   in.x.cx=0;
   in.x.dx=630;
   int86(51,&in,&out);
   in.x.ax=8;
   in.x.cx=0;
   in.x.dx=470;
   int86(51,&in,&out);
 }
