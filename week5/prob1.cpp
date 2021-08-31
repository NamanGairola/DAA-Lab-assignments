#include<iostream>
using namespace std;
int main()
{
    int a[26],n,i,j,t,maxv,maxi;
    cin>>t;
    while(t--)
    {
        maxv=-1;
        maxi=-1;
        cin>>n;
        char arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<26;i++)
        {
            a[i]=0;
        }
        for(i=0;i<n;i++)
        {
            j=arr[i]-97;
            a[j]++;
        }
        for(i=0;i<26;i++)
        {
            if(a[i]>maxv)
            {
                maxv=a[i];
                maxi=i;
            }
        }
        if(maxv>=2)
        {
            cout<<char(maxi+97)<<"-"<<maxv<<"\n";
        }
        else
        {
            cout<<"No duplicates present\n";
        }
    }
    return 0;
}