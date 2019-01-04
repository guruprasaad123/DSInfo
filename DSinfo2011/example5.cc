#include<iostream>

double mean(int *val,int n)
{
  int sum=0;
for(int i=0;i<n;i++)
{
 sum+=val[i];
}

return (sum/n);
}


int main()
{ 
     int a[] = {1,2,5,6,7} ;
     std::cout << mean (a, 5) << std::endl; 
      
} 


