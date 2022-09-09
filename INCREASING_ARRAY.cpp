#include <bits/stdc++.h>
using namespace std;


int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    long long n;
    cin>>n;
    vector<long long >arr;
    long long ans=0;
    for(long long i=0;i<n;i++){
       int x;
       cin>>x;
       arr.push_back(x);
    }
    for (long long  i = 1; i < n; i++)
    {
        if(arr[i-1]>arr[i]){
            ans=ans +(arr[i-1]-arr[i]);
            arr[i]=arr[i]+(arr[i-1]-arr[i]);
        }
    }
    cout<<ans;
    
    return 0;
}