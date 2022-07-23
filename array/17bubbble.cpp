#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{   
    for(int i=1; i<n; i++)
        //no of rounds
    {
        for(int j=0; j<n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}



int32_t main(){
    int arr[5]={5,7,2,6,1};
bubbleSort(arr, 5);


    return 0;
    
}
