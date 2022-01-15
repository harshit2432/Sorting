#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     
    int k;
    cin>>k;

    int itr;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
            itr++;
            if(itr==k)
                break;
        }
        if(itr==k)
            break;
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
