#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    list<int> l;
    auto idx = l.begin();
    for (int i = 0; i < n; i++)
    {
        int b; cin >> b;
        if(b == 0){
            int c; cin >> c;
            l.emplace(idx,c);
            idx--;
        }
        else if(b == 1){
             int c; cin >> c;
             for (int j = 0; j < abs(c); j++)
             {
                 c>0? idx++:idx--;
             }
        }
        else{
            l.erase(idx);
        }
    }
    for (auto ele: l){
        cout << ele << endl;
        
    }
    
    

}