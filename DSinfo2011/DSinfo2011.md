# DSinfo2011 *Solutions*

## Exercise : 1

a) n = 2 , k = 3

b) 0  1

## Exercise : 2

a)

```cpp
int main() {
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
    }
```

b) 

```


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
```

3)

```cpp

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


