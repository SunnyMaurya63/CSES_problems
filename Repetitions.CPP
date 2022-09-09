/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.
Input:
ATTCGGGA

Output:
3
*/

#include <bits/stdc++.h>
using namespace std;
 
 
 
int main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    int ans =1;
    
    for (int  i = 0; i < s.size(); i++)
    {
         int count=1;
       while(s[i]==s[i+1]){
             count++;
             i++;
       }
       ans=max(ans,count);
    }
    cout<<ans;
    return 0;
}