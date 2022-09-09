/*
A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.

Input:
5

Output:
4 2 5 3 1

Example 2

Input:
3

Output:
NO SOLUTION
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    
    if(n==1){
        cout<<1;
    }
    if(n<=3){
        cout<<"NO SOLUTION"<<"\n";
    }
    if(n==4){
        cout<<"2 4 1 3";
    }
    else{
        for(int i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
        for(int i=2;i<=n;i+=2){
            cout<<i<<" ";
        }
    }
    
    return 0;
}