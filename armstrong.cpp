#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int org;
    org=n;

    int sum=0;
    while (n!=0)
    {
        int ld=0;
         ld = n%10;
        sum+= ld*ld*ld;
        n=n/10;

    }
    
    if (sum==org)
    {
       cout<<"armstrong"<<endl;
    }
    else
    {
       cout<<"not armstrong"<<endl;
    }
    

    
    return 0;
}