#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vl vector<ll>
#define ql queue<ll>

void solve(){
    string s;cin >> s;
    vector<char> aux1, aux2;
    bool ans = false;
    int mid = s.size()/2;
    copy(s.begin(), s.end() - mid, back_inserter(aux1));
    copy(s.begin() + mid, s.begin()+ mid + mid,back_inserter(aux2));
    if(aux1==aux2) ans = true;
    ans == true ? cout << "YES" <<endl : cout << "NO" << endl;
}

int main(){
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
