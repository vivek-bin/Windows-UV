#include<iostream.h>

class A{
 int a;
 int b;
 public:
 void getdat(int x){
  a=x;
  b=x*2;
 }
 void show(){
  cout<<"A = "<<a<<"B = "<<b;
 }
 A(){a=123;cout<<"constructr a = "<<a;}
 A( int x, int y){a=x;b=y;}
};
void main(){
  A ob;
  ob.show();
  A obp(2,3);
  obp.show();

}
