#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin>>s;

        int sz = s.size();

        if(sz>=2){
        	s.pop_back();
        	s[sz-2] = 'i';
        }
        cout<<s<<endl;
    }

    return 0;
}
