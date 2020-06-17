#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


const string YES = "YES";
const string NO = "NO";

void solve(vector<ll>&A){
    sort(A.begin(),A.end());
    if(A[0]==5 and A[1]==5 and A[2]==7)
        cout << YES << endl;
    else
        cout << NO << endl;
    
}

signed main(){
    vector<ll> A(3);
    for (size_t i = 0; i < 3; i++)
    {
        cin >> A[i];
    }
    solve(A);
    
    return 0;
}
