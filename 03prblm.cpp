#include<iostream>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    for(i=n;i>=1;i--)
     {
         cout<<"\t"<<i;
         c++;
         if(c%5==0)
         {
             cout<<"\n";
         }

     }
}
