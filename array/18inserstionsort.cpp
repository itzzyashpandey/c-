#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    
    for(int i=1; i<n ;i++){
        int temp=arr[i];
        int j;
        for( j=i-1; j>=0; j--){
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
                
            }
            else{
                break;
            }
            
        }
        arr[j+1]=temp;
    }
 for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
}



int32_t main(){
    int arr[5]={5,7,2,6,1};
insertionSort(arr, 5);


    return 0;
    
}
