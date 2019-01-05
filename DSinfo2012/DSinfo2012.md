# DSinfo2012 *Solutions*

## Exercise : 1

a)

```
n = 63    k = 7
```

b)

```cpp
8
8
8
9
-9
9
8
8
8
7
15
7
8
7 8
n
 n * n = 49
```

## Exercise 2

a)

```cpp
 #include <iostream> 

  int main() { 
       int data[]={8,14,25,31,45,54,65,73,86,96}; // inserted in func scope
      for(int i=1; i<=10; i++) 
       std::cout << data[i] << " "; 
       std::cout << std::endl; 
       return 0; 
        }
```

## Exercise 3

a)

```
0 4
```

## Exercise 4

a )

```
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
```

b)

```
int factorial (int n)
{
if(n==1 || n==0 )
{
    return 1;
}
else
{
    return n* factorial(n-1);
}

}
```

c)

```
double mean(int *val,int n)
{
  int sum=0;
for(int i=0;i<n;i++)
{
 sum+=val[i];
}

return (sum/n);
}
```

## Exercise : 5

a)

```
 void foo(const int & a)
 {
      a+=1; // cant change value of the const variable 
    return;
 }
```

b)

```

void add1(int a) // passed value is the copy 
{
    a+=+1; 

    cout << a <<std::endl; 
}; 

void add2(int &a) // passed value is the reference
{
    a+=1;

    cout << a << endl; }; 

 
 void add3(int *a) // passed value is the address
{  
    (*a) +=1; 
    cout << *a << endl; 
}; 

        O/P
1

2
1
2
2
3
3
```

## Exercise : 6

a)

```
   int a = 5; 
   int * pb = &a; 
   (*pb) --;  // refers to a , a gets decremented as result
```


