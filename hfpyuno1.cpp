#include<iostream>
using namespace std;

int main(){
    int n;
    int a=1;
    cin>>n;

    for (int i=1 ; i<=n ; i++)
    {
        for ( int j=1 ; j<=n; j++)
        {  if(j<=i)
        {
            cout<<a;
        }
        else{
            cout<<" ";5
        }
        }
        
        cout<<endl;
        a++;

        
    }
    

    
    return 0;
}