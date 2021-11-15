#include<iostream>
using namespace std;
int main()
{
    int n,m,arr[100000],i,j,f,c,comp;
    cin>>n;
    while(n--)
    {
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        cin>>f;
        comp=0;
        c=0;
        j=0;
        for(i=0;i<m;)
        {
            comp++;
            if(f<=arr[i])
            {
                break;
            }
            j=i;
            if(i==0)
            {
                i=2;
            }
            else
            {
                i=i*2;
            }
        }
        comp++;
        if(f==arr[i])
        {
            c=1;
        }
        else
        {
            for(;j<m && j<i;j++)
            {
                comp++;
                if(arr[j]==f)
                {
                    c=1;
                    break;
                }
            }
        }
        if(c==1)
        {
            cout<<"Present "<<comp<<"\n";
        }
        else
        {
            cout<<"Not present "<<comp<<"\n";
        }
    }
    return 0;
}