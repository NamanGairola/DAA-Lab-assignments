#include<iostream>
using namespace std;  
int partition(int arr[],int l,int h,int ci[]) 
{
    int t;
    int pivot=arr[h]; 
    int i=(l-1);
    for (int j=l;j<=h-1;j++) 
    { 
        ci[0]++;
        if(arr[j]<pivot) 
        { 
            i++;
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
            ci[1]++;
        } 
    } 
    t=arr[i+1];
    arr[i+1]=arr[h];
    arr[h]=t;
    ci[0]++;
    return i+1; 
}
void quicksort(int arr[],int l,int h,int ci[]) 
{ 
    if(l<h) 
    { 
        int pi=partition(arr,l,h,ci);  
        quicksort(arr,l,pi-1,ci); 
        quicksort(arr,pi+1,h,ci); 
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
        quicksort(arr,0,n-1,ci);
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<'\n';
        cout<<"comparison = "<<ci[0]<<"\n";
        cout<<"swaps = "<<ci[1]<<"\n";
    }
    return 0;
}