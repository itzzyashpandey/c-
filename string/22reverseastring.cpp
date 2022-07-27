#include <bits/stdc++.h>
using namespace std;

void reverse(char name[] , int n){
    s=0;
    e=n-1;

    while(s<e) 
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
    

}



int32_t main(){
    char name[20];

    cout<<"enter name"<<endl;
    cin>>name;

    cout<<"your name is"<<endl;
    cout<<name<<endl;
    


    return 0;
    
}
