#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[4],t,i;
    cin>>t;
    while(t--)
    {
       for(int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        sort(a,a+3);
        for(int i=0; i<3; i++)
        {
          cout<<a[i]<<" ";
        }
    }

  cout<<endl;

}











