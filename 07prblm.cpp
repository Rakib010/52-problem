#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[100000];
    scanf("%[^\n]",str);
    char *p,*e;
    long input;
    int coun=0;
    p=str;

    for(p=str; ; p=e)
    {
        input=strtol(p,&e,10);
        if(p==e)
        {
            break;
        }
        coun++;
    }
       cout<<coun<<endl;

}
