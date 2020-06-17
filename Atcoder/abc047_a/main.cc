#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main (){

    vector<ll> a(3);
    for(ll i = 0; i < 3 ; i++){
      cin >> a[i];
    }
    sort(a.begin(),a.end());
    cout << (a[0]+a[1]==a[2]? "Yes":"No") << endl;

}
