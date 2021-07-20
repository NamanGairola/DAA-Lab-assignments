#include<iostream>
using namespace std;
int main()
{
    int n,m,arr[100000],i,f,c;
    cin>>n;
    while(n--)
    {
        cin>>m;
        c=0;
        for(i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        cin>>f;
        for(i=0;i<m;i++)
        {
            if(arr[i]==f)
            {
                c=1;
                break;
            }
        }
        if(c==1)
        {
            cout<<"Present "<<i+1<<"\n";
        }
        else
        {
            cout<<"Not present "<<i<<"\n";
        }
    }
    return 0;
}