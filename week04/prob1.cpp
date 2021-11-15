#include<iostream>
using namespace std;
//ci for comparison and inversion
void merge(int arr[],int l,int m,int r,int ci[])
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
    {
        L[i]=arr[l+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=arr[m+1+j];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        ci[0]++;
        if(L[i]<=R[j])
        {
            arr[k++]=L[i++];
            ci[1]++;
        }
        else
        {
            arr[k++]=R[j++];
            ci[1]++;
        }
    }
    while(i<n1)
    {
        arr[k++]=L[i++];
        ci[1]++;
    }
    while(j<n2)
    {
        arr[k++]=R[j++];
        ci[1]++;
    }
}
void mergesort(int arr[],int l,int r,int ci[])
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(arr,l,m,ci);
        mergesort(arr,m+1,r,ci);
        merge(arr,l,m,r,ci);
    }
}
int main()
{
    int n,t,i,j,ci[2];
    cin>>t;
    while(t--)
    {
        ci[0]=0;
        ci[1]=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        mergesort(arr,0,n-1,ci);
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
        cout<<"comparison = "<<ci[0]<<"\n";
        cout<<"inversion = "<<ci[1]<<"\n";
    }
    return 0;
}