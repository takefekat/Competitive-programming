#include <iostream>
using namespace std;
typedef long long ll;

int main() { 
    string s;
    cin >> s;

    stack<string> st;
    for(ll i=0; i<s.size(); i++) {
        string c = s.substr(i, 1);
        if (c == "\\"){
            st.push(c);
        }else if(c == "_"){
            st.push(c);
        }else{
            st.pop()
        }
    }
}
