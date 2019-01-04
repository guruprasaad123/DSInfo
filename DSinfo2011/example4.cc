#include<iostream>
using namespace std;

int sumeneto(int n)
{
  
    if(n==0)
    {
        return 0;
    }
    else if(n==1)
    {
       return 1; 
    }
    else
    {
       return ( n + sumeneto(n-1) );
    }
    
}

int main()
{
    int n=0;
    cin>>n;
    cout<< "sumeneto = " <<sumeneto(n)<<endl;
}

