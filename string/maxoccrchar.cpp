#include <bits/stdc++.h>
using namespace std;

char getmaxocc(string name){
    int arr[26]={0};
    int n;
     for (int i = 0; i < name.length(); i++)
     {
        if(name[i]>='a' && name[i]<='z'){
         n =name[i]-'a';
        }
        else{
             n=name[i]-'A';
        }
        arr[n]++;

     }

    
    int maxno=-1, ans=0;

    for (int i = 0; i < 26; i++)
    {
        if (maxno<arr[i])
        {
            ans=i;
            maxno=arr[i];
        }
        
        
        
    }
    char finalans ='a'+ans;
    return finalans;
    
     

}


int32_t main(){
    string name;

   cin>>name;

    cout<<getmaxocc(name)<<endl;
    


    return 0;
    
}
