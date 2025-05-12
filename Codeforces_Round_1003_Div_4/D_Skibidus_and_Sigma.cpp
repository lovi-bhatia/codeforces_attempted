#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<long,long> pll;

bool cmp(const pll& a, const pll& b){
    return a.first>b.first;
}

void Solve(){
    int n,m;
    cin>>n>>m;

    vector<vector<ll>>a (n,vector<ll>(m)) ;
    vector<pll> v;
    for(int i=0;i<n;i++){
        ll s = 0ll;
        for (int j = 0; j < m; ++j)
        {
            cin>>a[i][j];
            s+=a[i][j];
        }

        // sum of array, index of array
        v.push_back({s,i});
    }
    sort(v.begin(),v.end(),cmp);

    vector<ll> x;

    // v[i] contains a pair {sum, index}.
    // So v[i].second gives you the original index of the i-th largest array (by sum).
    // a[v[i].second] accesses the actual array in the original input.
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            x.push_back(a[v[i].second][j]);
        }
    }

    ll ans = x[0];
    for(int i=1;i<x.size();i++){
        x[i]+=x[i-1];
        ans+=x[i];
    }

    cout<<ans<<endl;
}

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {

        Solve();
    }

    return 0;
}



