#include<bits/stdc++.h>
using namespace std;

void largestrowsum(int arr[3][4], int row , int col)
{
    int maxi=0;
    int rowno;
  for(int i=0; i<row; i++)
  {
      int sum=0;
        for(int j=0; j<col; j++)
        {
            sum+= arr[i][j];
        } 
        if (sum>maxi){
            maxi=sum;
            rowno=i;
        }
  }
  cout<<maxi;
  cout<<rowno;
}



int main()
{
    int arr[3][4];

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j];        }
            cout<<endl;
    }
    largestrowsum(arr, 3 , 4);
    
    
    return 0;

}
























