#include<iostream>
#include<math.h>
using namespace std;

int fact(int num){
    int sum=1;
    for (int i = 2; i <=num; i++)
    {
        sum = sum*i;

    }
    return sum;
    
    

}

int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
         for (int j = 0; j <=i; j++)
         {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
         }
         cout<<endl;
         
    }
    

    
    
    

    return 0;
}