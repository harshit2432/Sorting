#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    int itr=0,min_idx;
    for(i=0;i<n;i++)
    {
        min_idx=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_idx])
            {
                min_idx=j;
            }
            itr++;
            if(itr==k)
               break;
        }
        if(itr==k)
           break;
        swap(arr[i],arr[min_idx]);
    }

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
