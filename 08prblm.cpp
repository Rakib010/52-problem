#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,n2,n3,t,n,temp;
    cin>>n;
    for(t=1; t<n; t++)
    {  cin>>n1>>n2>>n3;
        cout<<"case "<<t<<":";
        if(n1>n2){
            temp=n1;n1=n2;n2=temp;
        }
        if(n1>n3){
            temp=n1;n1=n3;n3=temp;
        }
        if(n2>n3){
          temp=n2;n2=n3;n3=temp;
        }
        cout<<n1<<" "<<n2<<" "<<n3<<" ";
    }
}
