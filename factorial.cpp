#include<iostream>
#include<math.h>
using namespace std;

void fact(int num){
    int sum=1;
    for (int i = 2; i <=num; i++)
    {
        sum = sum*i;



    }
    cout<<sum;
    
    

}

int main(){
    int n;
    cin>>n;
    fact(n);

    return 0;
}