 #include <iostream>
  using namespace std;
  void sort_bi_0(int a, int b)
   {
   if(a>b) {
        int tmp=b; b=a; a=tmp; 
        } 
   } 
  void sort_bi_1(int & a, int & b)
   {
    if(a>b) {
         int tmp=b; b=a; a=tmp; 
         }
  }
  void sort_bi_2(int * a, int * b) 
   { 
    if(*a>*b) {
         int tmp=*b; *b=*a; *a=tmp;
 } 
  } 
  void sort_bi_3(int ** a, int ** b)
   {
    if(**a>**b) {
         int *tmp=*b; *b=*a; *a=tmp; 
         } 
     }
 int main(){
  int c =4,d=2;
  int *pc=&c;
  int *pd=&d;
  cout << c << " "<< d << " " <<*pc<< " " <<*pd<< endl;
  sort_bi_0( c,d);
  cout << c << " "<< d << " " <<*pc<< " " <<*pd<< endl;
  c =4;
  d=2; 
  sort_bi_1( c,d); 
  cout << c << " "<< d << " " <<*pc<< " " <<*pd<< endl;
  c =4;
  d=2;
  sort_bi_2( &c,&d);
  cout << c << " "<< d << " " <<*pc<< " " <<*pd<< endl;
  c =4;d=2;
  sort_bi_3( &pc,&pd);
  cout << c << " "<< d << " " <<*pc<< " " <<*pd<< endl;
  return 0;
  }  