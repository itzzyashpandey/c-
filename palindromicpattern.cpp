#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

     for (int i = 1; i <=n; i++)
     {  int j;
        for ( j = 1;j <=n-i ;j++)
        {
            cout<<"  ";
        }
        
        for (int k = i; k >=1;  k--  )
        {
            cout<<k<<" ";
        }
        for (int k = 2; k <=i ; k++)
        {
            cout<<k<<" ";
        }
        
        
        cout<<endl;
        


     }
     

    
    return 0;
}

//        1 
//      2 1 2
//    3 2 1 2 3
//  4 3 2 1 2 3 4
//5 4 3 2 1 2 3 4 5