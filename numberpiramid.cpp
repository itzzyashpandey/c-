#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;

    for (int i = 1; i <= n; i++)

    {
        a=1;
        for (int k = 1; k <= n-i; k++)
        
        {
            cout<<" ";
        }
        for (int j = 1; j <=i; j++)
        {
            cout<<a<<" ";
            a++;
        }
        cout<<endl;

        
    }
    



    
    return 0;
}