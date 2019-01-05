# DSinfo2013 *Solutions*

### Exercise : 1

a) Variable is a *placeholder* of any kind of value .it could be a *integer , boolean , floating-point-number , object* .And  its fundamental concept of any programming concept/language.

b)  8 bit === 1 byte

c ) ??

d ) for *short-int* value ranges from *-128 to 127* , but *unsigned-int* it ranges from *0 to 255*

## Exercise : 2

a)

```
out0 : true
```

## Exercise : 3

a)

```
tu w th f sa su 2
m tu w th f sa su 1
f sa su 5
w th f sa su 3
su 7
prb
prb
```

b)

in Correct , coz the break statements has to be given at every cases for the algorithm to give the expected output.

## Exercise : 5

a)

```
4 2 4 2
4 2 4 2
2 4 2 4
2 4 2 4
4 2 2 4
```

b)

```
void sort_bi_0(int a, int b)
   {
   if(a>b) 
   {
 int tmp=b;
 b=a; 
 a=tmp; 

   } 

   } 
   
  void sort_bi_1(int & a, int & b)
   {
    if(a>b)
    {

int tmp=b;
b=a;
a=tmp; 

   }

  }

 void sort_bi_2(int * a, int * b) 

   { 
    if(*a>*b) {
    int tmp=*b;
    *b=*a;
    *a=tmp;

         } 
  } 
  
  void sort_bi_3(int ** a, int ** b)
   {
    if(**a>**b)
     {
    int *tmp=*b;
    *b=*a;
    *a=tmp; 

     } 
   }
```

## Exercise : 6

a )

```
1 6
6 6
7 11
1
1 3 6 7 11
```




