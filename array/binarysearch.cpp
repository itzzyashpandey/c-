#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    while (s<=e){
        int mid=((s+e)/2);
        if(arr[mid]==key){
            return mid;
        }
        //go to left part
        else if(arr[mid]>key){
            e=mid-1;
        }
        //go to right part
        else{
            s=mid+1;
        }

    }
   return -1;

}

int32_t main(){
    int n ;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
 int key;
cout<<"enter key"<<endl;
cin>>key;

cout<<binarySearch(arr,n,key)<<endl;
 return 0;
}