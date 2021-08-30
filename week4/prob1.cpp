#include<iostream>
using namespace std;
// ci store comparison and inversion
void bubblesort(int arr[],int n,int ci[])
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n;j++)
        {
            ci[0]++;
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                ci[1]++;
            }
        }
    }
}
void msort(int arr[],int n,int ci[])
{
    int m=n/2-1,lc=m+1,rc=n-m-1,k,i,j;
    int L[lc],R[rc];
    for(i=0;i<lc;i++)
    {
        L[i]=arr[i];
    }
    j=m+1;
    for(i=0;i<rc;i++)
    {
        R[i]=arr[j];
        j++;
    }
    bubblesort(L,lc,ci);
    bubblesort(R,rc,ci);
    j=0;
    k=0;
    for(i=0;i<lc && j<rc;)
    {
        ci[0]++;
        if(L[i]<R[j])
        {
            arr[k++]=L[i];
            i++;
            ci[1]++;
        }
        else
        {
            arr[k++]=R[j];
            j++;
            ci[1]++;
        }
    }
    while(i<lc)
    {
        arr[k++]=L[i];
        i++;
        ci[1]++;
    }
    while(j<rc)
    {
        arr[k++]=R[j];
        j++;
        ci[1]++;
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
        msort(arr,n,ci);
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