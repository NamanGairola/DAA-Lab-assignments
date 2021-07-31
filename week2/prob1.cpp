#include<iostream>
using namespace std;
int main()
{
    int t,n,k,i,arr[100000],count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        count=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        for(i=0;i<n;i++)
        {
            if(k==arr[i])
            {
                count++;
            }
        }
        if(count==0)
        {
            cout<<k<<"-"<<"\n";
        }
        else
        {
            cout<<"key not present\n";
        }
    }
    return 0;
}