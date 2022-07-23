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
    int n,r;
    cin>>n>>r;
    int ans;
    ans=fact(n)/(fact(n-r)*fact(r));
    cout<<ans<<endl;

    return 0;
}