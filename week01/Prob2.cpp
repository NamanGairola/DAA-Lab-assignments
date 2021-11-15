#include<iostream>
using namespace std;
int main()
{
    int n,m,f,arr[100000],i,j,c,s,l,h,comp;
    cin>>n;
    while(n--)
    {
        cin>>m;
        for(i=0;i<m;i++)
        {
            cin>>arr[i];
        }
        cin>>f;
        comp=1;
        c=0;
        s=0;
        l=m-1;
        if(arr[s]==f || arr[l]==f)
        {
            c=1;
        }
        else
        {
            if(f>arr[s] && f<arr[l])
            {
                do
                {
                    h=(s+l)/2;
                    comp++;
                    if(arr[h]==f)
                    {
                        c=1;
                        break;
                    }
                    else if(f<arr[h])
                    {
                        l=h;
                    }
                    else
                    {
                        s=h;
                    }
                }
                while(s!=l);
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