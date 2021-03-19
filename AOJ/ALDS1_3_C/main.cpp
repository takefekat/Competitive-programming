#include <iostream>
#include <list>
using namespace std;
typedef long long ll;

int main(){

    ll N; cin >> N;

    list<ll> data;
    for(ll i=0; i<N; i++) {
        //string s; cin >> s;
        char s[30];
        scanf("%s",s);
        if(s[0] == 'i'){
            ll x; scanf("%Ld",&x);
            data.push_front(x);
        }
        else if(s[0] == 'd' and s[6] == '\0'){
            ll x; scanf("%Ld",&x);
            for(auto ite = data.begin(); ite != data.end(); ite++) {
                if(*ite == x){
                    data.erase(ite);
                    break;
                }
            }
        }
        else if(s[0] == 'd' and s[6] == 'F'){
            data.pop_front();
        }
        else if(s[0] == 'd' and s[6] == 'L'){
            data.pop_back();
        }
    }

    for(auto ite = data.begin(); ite != data.end();){
        printf("%Ld",*ite);
        ite++;
        if(ite == data.end())
            printf("\n");
        else
            printf(" ");
    }
    return 0;
}