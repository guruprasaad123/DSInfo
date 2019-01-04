#include<iostream>
using namespace std;
int main()
{

    int n, k = 3;
     n = ( 21 % k ? k+1 : k-1 );
    cout<< "n = "<<n<< "k = "<<k<<endl;
}