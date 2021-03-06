#include <iostream>

using namespace std;

long long gcd(long long  a, long long b)
{

    if (a == 0 || b == 0)
       return 0;


    if (a == b)
        return a;


    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
   long long t,a,b;
   cin>>t;
   while(t--)
   {
       cin>>a>>b;
       cout<<gcd(a,b)<<" "<<(a*b)/gcd(a,b)<<endl;
   }
   return 0;
}

