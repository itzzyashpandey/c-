#include <bits/stdc++.h>
using namespace std;

int findsqroot(int arr[], int n)
{
int s=0;
 int ans=-1;
    int e=n;
    int mid=((s+e)/2);
    while (s<=e){
        
       int square=mid*mid;

       if (square ==n)
       {
        return mid;
       }
    else if (square<n)
    {
        ans=mid;
        s=mid+1;

    }
    else{
        e=mid-1;
    }
    mid=((s+e)/2);

}
return ans;

}