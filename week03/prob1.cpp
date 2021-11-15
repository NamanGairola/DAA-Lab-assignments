#include<iostream>
using namespace std;
int main()
{
    int arr[100000],key,com,swa,i,j,n,m;
    cin>>m;
    while(m--)
    {
        com=0;
        swa=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=1;i<n;i++)
        {
            key=arr[i];
            com++;
            for(j=i ;j>0 && arr[j-1]>key;j--)
            {
                arr[j]=arr[j-1];
                swa++;
                com++;
            }
            arr[j]=key;
        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        cout<<"comparison="<<com<<"\n";
        cout<<"shift="<<swa<<"\n";
    }
    return 0;
}