#include<iostream>
using namespace std;
int main()
{
    int t,n,arr[100000],i,j,k,count;
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
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]-arr[j]==k || arr[j]-arr[i]==k)
                {
                    count++;
                }
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}