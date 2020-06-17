#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

    string s;
    cin >> s;

//dream dreamer erase eraser
    bool ans = true;
    for(ll i = 0; i < s.size() ; i++){
        ll amari = s.size() - i;
        if(amari < 5) {
            ans = false;
            break;
        }
        if(amari == 5) {
            string s5 = s.substr(i,5);
            if(s5 == "dream" or s5 == "erase")
                break;
            else{
                ans = false;
                break;
            }
        }
        if(amari == 6){
            string s6 = s.substr(i,6);
            if(s6 == "eraser")
                break;
            else{
                ans = false;
                break;
            }
        }
        if(amari == 7){
            string s7 = s.substr(i,7);
            if(s7 == "dreamer")
                break;
            else{
                ans = false;
                break;
            }
        }
        if(amari > 7 and amari < 10){
            ans = false;
            break;
        }
        if(amari == 10){
            string s5 = s.substr(i,5);
            string s5_5 = s.substr(i+5,5);
            if(s5 == "dream" or s5 == "erase"){
                if(s5_5 == "dream" or s5_5 == "erase"){
                    break;
                }
                else{
                    ans = false;
                    break;
                }
            }
            else{
                ans = false;
                break;
            }
        }
        if(amari == 11){
            string s5 = s.substr(i,5);
            string s6 = s.substr(i,6);
            string s5_6 = s.substr(i+5,6);
            string s6_5 = s.substr(i+6,5);

            if(s5 == "dream" or s5 == "erase"){
                if(s5_6 == "eraser"){
                    break;
                }
            }
            else if(s6 == "eraser"){
                if (s6_5 == "dream" or s6_5 == "erase") {
                    break;
                }
            }else{
                ans = false;
                break;
            }
        }
        if(amari == 12){
            string s5 = s.substr(i,5);
            string s6 = s.substr(i,6);
            string s7 = s.substr(i,7);
            string s5_7 = s.substr(i+5,7);
            string s6_6 = s.substr(i+6,6);
            string s7_5 = s.substr(i+7,5);
            if(s5 == "dream" or s5 == "erase"){
                if(s5_7 == "dreamer"){
                    break;
                }
            }
            else if(s6 == "eraser"){
                if (s6_6 == "eraser") {
                    break;
                }
            }
            else if(s7 == "dreamer"){
                if (s5 == "dream" or s5 == "erase") {
                    break;
                }
            }
            else{
                ans = false;
                break;
            }
        }

        string s5 = s.substr(i,5);
        string s6 = s.substr(i,6);
        string s7 = s.substr(i,7);

        string s5_5 = s.substr(i+5,5);
        string s6_5 = s.substr(i+6,5);
        string s7_5 = s.substr(i+7,5);

        cout << s5 << endl;
        cout << s5_5 << endl;

        if(s5 == "dream" or s5 == "erase"){
            if(s5_5 == "dream" or s5_5 == "erase"){
                i+=5;
                continue;
            }
            else{
                ans = false;
                break;
            }
        }else if(s6 == "eraser"){
            if(s6_5 == "dream" or s5_5 == "erase"){
                i+=6;
                continue;
            }
            else{
                ans = false;
                break;
            }
        }else if(s7 == "dreamer"){
            if(s7_5 == "dream" or s5_5 == "erase"){
                i+=7;
                continue;
            }
            else{
                ans = false;
                break;
            }
        }
        else{
            ans = false;
            break;
        }
    }
    cout << (ans ? "YES":"NO") << endl;

}
