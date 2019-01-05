#include<iostream>
using namespace std;

int main()
{
int n; 
int k = 7; 
int l = 9 ;
n = ((k%l)==3)?l/k:l*k; 
cout << "n = " << n << "    k = " << k << endl;
}