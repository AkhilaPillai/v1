#include <iostream>

using namespace std;

int main()
{
    string str1,str2;
    int i,j,f=0;
    cin>>str1>>str2;
    for(i=0;i<str1.length();i++)
    {
        for(j=0;j<str2.length();j++)
        {
            if(str1==str2)
            f=0;
            else
            f=1;
        }
    }
if(f==0)
cout<<str1;
else if(str1.length()>str2.length())
cout<<str1;
else
cout<<str2;

    return 0;
}
