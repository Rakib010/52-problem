#include<bits/stdc++.h>
using namespace std;
int main()
{   int t;cin>>t;
    while(t--)
    {
    double squrot,num;
    cin>>num;
     squrot=sqrt(num);
     if(ceil(squrot)==floor(squrot)) cout<<"yes";
     else cout<<"No";
    }

    /*float sqrot,n1;
    cin>>num;
    sqrot=sqrt(n1);
    if(sqrot*sqrot==n1) cout<<"yes";
    else cout<<"No";*/



}
