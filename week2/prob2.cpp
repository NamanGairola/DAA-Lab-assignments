#include<iostream>
using namespace std;
int main()
{
    int t,arr[100000],i,j,k,n,s,check;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        check=0;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                {
                    if(i!=j && j!=k && i!=k)
                    {
                        s=arr[i]+arr[j];
                        if(s==arr[k])
                        {
                            check=1;
                            break;
                        }
                    }
                }
                if(check==1)
                {
                    break;
                }
            }
            if(check==1)
            {
                break;
            }
        }
        if(check==1)
        {
            cout<<i+1<<","<<j+1<<","<<k+1<<"\n";
        }
        else
        {
            cout<<"no sequence found\n";
        }
    }
    return 0;
}