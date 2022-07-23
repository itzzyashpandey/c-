#include<iostream>
using namespace std;
int main()
{  
     #ifndef ONLINE_JUDGE
    freopen("abc.txt", "r", stdin);
    freopen("xyz.txt", "w", stdout);
    #endif    
    int saving;
    cin>>saving;


    if(saving>5000){
        cout<<"neha\n";

    } 
    else if(saving>2000)
        {
            cout<<"rashi"<<endl;


    }
    else{
        cout<<"friends";

    }
    return 0;

} 