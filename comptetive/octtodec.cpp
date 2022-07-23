#include <bits/stdc++.h>
using namespace std;

int octaltodecimal(int num)
{
    int ans=0;
    int x=1;

    while (num>0)
    {
        int y=num%10;
        ans += x*y; 
        x *= 8;
        num= num/10;

    }
    return ans;
    
}

int32_t main(){
    int n;
    cin>>n;

    cout <<octaltodecimal(n)<<endl;    
}