#include<iostream>
#include<math.h>
using namespace std;

void fibonic(int a)         //01123
{
   int sum=0;
   int m=0;
   int n=1;

    for (int i=1; i<=a; i++)
    {
        cout<<m;
        sum=(m+n);
        m=n;
        n=sum;
      
        
    }

}

int main ( )
{
    int a;
    cin>>a;

     fibonic(a);

}

