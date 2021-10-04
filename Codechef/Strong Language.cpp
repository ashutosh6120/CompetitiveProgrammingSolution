//https://www.codechef.com/APRIL21C/problems/SSCRIPT
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120


#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        int c = 0;
        for (int v = 0; v < n; v++)
        {
            if (str[v] == '*')
            {
                c++;

                if (c >= k)
                {
                    cout << "YES" << endl;
                    break;
                }
            }

            else
            {
                c = 0;
            }
            if (v == n - 1)
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}