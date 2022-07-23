#include <bits/stdc++.h>
using namespace std;

int linearsearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            return i;
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

int a=linearsearch(arr,n,key);
if (a==-1)
{
    cout<<"not found";

}
else
{
   cout<<arr[a]<<"at"<<a+1;
}

}

