/*Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
3→10→5→16→8→4→2→1

Input:
3

Output:
3 10 5 16 8 4 2 1
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
    cout << n << " ";
    while (n != 1)
    {
    
        if (n % 2 == 0)
        {
            n /= 2;
            cout << n << " ";
        }
 
        else
        {
            n = 3 * n + 1;
            cout << n << " ";
        }
    }
 
    return 0;
}