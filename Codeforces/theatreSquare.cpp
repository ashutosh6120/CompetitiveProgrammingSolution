//https://codeforces.com/contest/1/problem/A
//Author - Ashutosh Dodamani, SJCE Mysore
//@ ashutosh6120




#include <iostream>
#include <bits/stdc++.h> 
using namespace std; 
int main(){ 
    double n, m, a; 
    cin >> n >> m >> a; 
    cout << (long long) ceil(n/a)* (long long) ceil(m/a) << endl; 
} 
