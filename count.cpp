#include <iostream>

using namespace std;

int main()
{
   int N,N1,c=0;
   cin>>N;
   while(N>0)
   {
      N1=N%10;
      c++;
      N=N/10;
   }
cout<<c;
    return 0;
}
