#include<iostream>
using namespace std;

int main()
{
int n=10, i=0 , num =0 , array[n] , MAX_NUM = -1 , index;
for(;i<n;i++)
{
cin>>num;
array[i]=num;
}

i=0;

for(;i<n;i++)
{

if(array[i] > MAX_NUM)
{
    MAX_NUM=array[i];
    index=i;
}

}

cout<<"Max_Number : "<<MAX_NUM<<" , Index : "<<index<<endl;
    return 0;
}