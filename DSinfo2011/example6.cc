 #include <iostream> 
 void swap1(int a, int b)
 { 
     int tmp = a;
      a =b; 
      b=tmp; 
 };

void swap2(int &a, int & b)
{
 int tmp = a; 
 a =b; 
 b=tmp; 
};

  int main()
{ 
   int a =1; 
   int b= 2;
   std::cout<<a<<" "<<b<<std::endl; 
   swap1(a,b); 
   std::cout <<a<<" "<<b<<std::endl; 
   swap2(a,b);
   std::cout <<a<<" "<<b<<std::endl;       
 } 