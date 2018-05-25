#include <iostream>

using namespace std;

int main()
{
    int n,a[10],i,s=0;
    float avg;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        s+=a[i];
    }
    avg=s/n;
    cout<<avg;
    return 0;
}
