#include <iostream>
#include <list>
using namespace std;
typedef long long ll;

int main(){

    ll N; cin >> N;

    list<ll> data;
    for(ll i=0; i<N; i++) {
        string s; cin >> s;
        if(s == "insert"){
            ll x; scanf("%Ld",&x);
            data.push_front(x);
        }
        else if(s == "delete"){
            ll x; scanf("%Ld",&x);
            for(auto ite = data.begin(); ite != data.end(); ite++) {
                if(*ite == x){
                    data.erase(ite);
                    break;
                }
            }
        }
        else if(s == "deleteFirst"){
            data.pop_front();
        }
        else if(s == "deleteLast"){
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