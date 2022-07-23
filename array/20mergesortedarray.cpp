#include <bits/stdc++.h>
using namespace std;

vector<int> mergearray(vector<int> v, vector<int> u)
{


vector<int> a;
int i=0;
int j=0;
int k=0;
if(v[i]<u[j]){
    a[k]=v[i];
    i++;
    k++;
}
else if (u[j]<v[i])
{
    a[k]=u[j];
    j++;
    k++;
}
 return a;
}


void print(vector<int> v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";

    }
    cout<<endl;
}


int32_t main(){

vector<int> v;

 v.push_back(3);
 v.push_back(7);
 v.push_back(13);
 v.push_back(22);
 v.push_back(24);

 vector<int> u;

 u.push_back(5);
 u.push_back(17);
 u.push_back(23);
 u.push_back(32);
 u.push_back(44);




vector<int> t=mergearray(v,u);
print(t);


    



    return 0;
    
}
