#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i,j,arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int k;
    cin>>k;

    int key,itr=0;
    for(i=1;i<n;i++)
    { 
        key=arr[i]; 
        j=i-1; 

        while(j>=0 && arr[j]>key)
        { 
            arr[j+1]=arr[j]; 
            j=j-1;
            itr++; 
        } 
        if(itr==k)
            break;
        arr[j+1]=key; 
    } 
}
