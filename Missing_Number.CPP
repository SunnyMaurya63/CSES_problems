
/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive)
Input:
5
2 3 1 5

Output:
4
*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    long long n;
    cin >> n;
    long long sum=0;
   vector<long long >arr(n);
    for(int i=0;i<n-1;i++){
      cin>>arr[i];
      sum+=arr[i];
    }
    cout<<(n*(n+1)/2)-sum<<"\n";
 
    return 0;
}