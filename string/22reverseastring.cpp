#include <bits/stdc++.h>
using namespace std;

void reverse(char name[] , int n){
    int s=0;
    int e=n-1;

    while(s<e) 
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
   cout<<name; 

}



int32_t main(){
    char name[20];
    int n;

    cout<<"enter name"<<endl;
    cin>>name;


    cout<<"your name is"<<endl;
    cout<<name<<endl;

    cout<<"enter length of string :"<<endl;
    cin>>n;

    

    reverse(name, n);
    


    return 0;
    
}
