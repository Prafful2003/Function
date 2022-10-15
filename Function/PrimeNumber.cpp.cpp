#include<iostream>
#include<math.h>
using namespace std;
void prime(int a,int b);
bool single (int i)
{
  for (int j=2; j<=sqrt(i); j++)
  {
    if (i%2==0)
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

    prime(a,b);

}

void prime(int a,int b)
{
    int check;
    for (int i=a; i<=b; i++)
    {
    single(i);
    }
}