#include<iostream>
using namespace std;
int main()
{
  int n,a,c,x,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        b=a%10;
        c=a/10000;
        x=b+c;
        cout<<"sum = "<<x<<endl;

    }


}

