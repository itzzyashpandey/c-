#include <bits/stdc++.h>
using namespace std;

int Selectionsort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int minindex=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        
        int temp=arr[i];
        arr[i]=arr[minindex];
        arr[minindex]=temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    
}

int32_t main(){

int arr[5]={5,7,2,6,1};
Selectionsort(arr, 5);
    return 0;
    
}

