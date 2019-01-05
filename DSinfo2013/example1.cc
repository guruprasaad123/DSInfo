 #include<iostream>
 using namespace std;
 int main()
 {

 
 int a,b,c,d,e; 
 a = 7; 
 b = 9; 
 c = 4; 
 d = 29;
 e=  3; 
  if ( (a+c*d%e)>4 && b/c>1 || (a>b)?(c%a>3):(b%a<2) )
  {
       cout << "out0 : "<< "true" << endl; 
  }

 else
 {
   cout << "out0 : "<< "false" << endl; 
   cout << "out1 : "<< ++a << endl; 
   cout << "out2 : "<< b++ << endl;
   cout << "out3 : "<< a++ + ++b << endl;
   cout << "out4 : "<< a << endl;
   cout << "out5 : "<< b << endl;
   cout << "out6 : "<< (c+=e) << endl;
 }

 }