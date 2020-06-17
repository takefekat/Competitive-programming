#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int a; cin >> a;
        if(a==0){
            int b; cin >> b;
            v.push_back(b);
        }
        else if(a==1){
            int b; cin >> b;
            cout << v[b] << endl;
        }
        else{
            v.pop_back();
        }

    }


}