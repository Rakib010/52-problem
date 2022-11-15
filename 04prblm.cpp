#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
  for(t=1;t<=3;t++)
     {
        cin>>n;
        cout<<"case "<<t<<":";

        for(int i=1; i<=n; i++)
        {
            if(n%i==0)
            {
                cout<<i<<" ";
            }

        }

    }

}
