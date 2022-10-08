#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        string s = "Timur";
        sort(s.begin(),s.end());
        int n;
        cin >> n;
        string s1;
        cin>>s1;
        if(n==5){
            sort(s1.begin(),s1.end());
            if(s1==s){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}