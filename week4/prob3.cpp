#include<iostream>
using namespace std;  
int partition(int arr[],int l,int h) 
{
    int t;
    int pivot=arr[h]; 
    int i=(l-1);
    for (int j=l;j<=h-1;j++) 
    { 
        if(arr[j]<pivot) 
        { 
            i++;
            t=arr[i];
            arr[i]=arr[j];
            arr[j]=t;
        } 
    } 
    t=arr[i+1];
    arr[i+1]=arr[h];
    arr[h]=t;
    return i+1; 
}
void quicksort(int arr[],int l,int h) 
{ 
    if(l<h) 
    { 
        int pi=partition(arr,l,h); 
        quicksort(arr,l,pi-1); 
        quicksort(arr,pi+1,h); 
    }
}
int main()
{
    int n,t,i,j,k,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cin>>k;
        quicksort(arr,0,n-1);
        cout<<"kth smallest = "<<arr[k-1]<<"\n";
    }
    return 0;
}