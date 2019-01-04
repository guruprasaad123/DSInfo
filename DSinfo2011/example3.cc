#include<iostream>
using namespace std;
int main()
{
    int i=0,n=10,input=0,array[10],X=0;
    bool found = false;
    cout<<"Enter 10 inputs "<<endl;

    for(;i<n;i++)
    {
        cin>>input;
        array[i]=input;
    }

    i=0;
    cout<<"Search for : ";
    cin>>X;
    for(;i<n;i++)
    {  
     
     if( array[i] == X)
     {
         found=true;
         cout<<"YES";
     }

    }
    if(!found)
    {
        cout<<"NO";
    }
    

    cout<<endl;

    return 0;
}