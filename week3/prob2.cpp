#include<iostream>
using namespace std;
int main()
{
    int n,i,j,swa,com,m,arr[100000],temp;
    cin>>m;
    while(m--)
    {
        swa=0;
        com=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                com++;
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    swa++;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
        cout<<"comparison="<<com<<"\n";
        cout<<"swap="<<swa<<"\n";
    }
    return 0;
}