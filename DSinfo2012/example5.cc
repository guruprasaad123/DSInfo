 #include <iostream> 
using namespace std;

void add1(int a){ // passed value is the copy 
      a+=+1; 
cout << a <<std::endl; 
        }; 
void add2(int &a){ // passed value is the reference
      a+=1;
cout << a << endl; 
 }; 
 
 void add3(int *a){  // passed value is the address
      (*a) +=1; 
       cout << *a << endl; 
        }; 
        
int main(){
     int a =1; 
     std::cout << a << std::endl; 
     add1 ( a);
     std::cout << a << std::endl;
     add2 (a);
     std::cout << a << std::endl;
     add3(&a);
     std::cout << a << std::endl;
     } 