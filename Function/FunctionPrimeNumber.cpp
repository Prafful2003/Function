#include<iostream>
#include<math.h>
using namespace std;
bool prime(int num)
{
    for (int j=1; j<=sqrt(num); j++)
    {
        if (num%2==0)
        {
        return false;
        }
    }
    return true;
}


int main ( )
{
    int a,b;
    cin>>a>>b;

   
   for (int i=a; i<=b; i++)
   {
      if (prime(i))
      {
        cout<<i<<endl;
      }
   }
    

}
