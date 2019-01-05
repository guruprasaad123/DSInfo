 #include <iostream>
  using namespace std;
   int main()
    { 
int a[] = {1,3,5,7,11}; 
int *p=a; 
int *q=&a[2]; 
cout <<  *(p++) << " " << ++*q << endl;
cout <<  *++p << " " << *(q++) << endl; 
cout << p[1] << " " << q[1] << endl; 
cout << q-p <<endl; 
cout <<a[0]<<" "<<a[1]<<" "<<a[2]<<" "<<a[3]<<" "<<a[4]<<endl;
return 0; 
   }