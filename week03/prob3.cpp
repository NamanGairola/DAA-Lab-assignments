#include<iostream>
using namespace std;
int main()
{
    int arr[100000],key,i,j,n,m,s;
    cin>>m;
    while(m--)
    {
        s=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=1;i<n;i++)
        {
            key=arr[i];
            for(j=i ;j>0 && arr[j-1]>key;j--)
            {
                arr[j]=arr[j-1];
            }
            arr[j]=key;
        }
        for(i=1;i<n;i++)
        {
            if(arr[i-1]==arr[i])
            {
                s=1;
                break;
            }
        }
        if(s==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
    return 0;
}