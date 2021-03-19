#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;

const vector<string> num = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

ll calc(string s, ll x) {
    vll cnt(10, 0);
    for (ll i = 0; i < s.size() - 1; i++) {
        cnt[stoi(s.substr(i, 1))]++;
    }
    cnt[x]++;

    ll res = 0;
    for (ll i = 1; i < 10; i++) {
        res += i * pow(10, cnt[i]);
    }
    return res;
}

void solve(long long K, std::string S, std::string T) {
    vll cnt(10, 0);
    for (ll i = 0; i < S.size() - 1; i++) {
        for (ll j = 0; j < 10; j++) {
            if (S.substr(i, 1) == num[j]) {
                cnt[j]++;
                break;
            }
        }
    }
    for (ll i = 0; i < T.size() - 1; i++) {
        for (ll j = 0; j < 10; j++) {
            if (T.substr(i, 1) == num[j]) {
                cnt[j]++;
                break;
            }
        }
    }
    ll nume = 0, deno = 0;
    for (ll j = 0; j < 10; j++) {
        if (cnt[j] < K) {
            cnt[j]++;
            for (ll i = 0; i < 10; i++) {
                if (cnt[i] < K) {
                    deno += (K - cnt[j] + 1) * (K - cnt[i] + 1);
                    if (calc(S, j) > calc(T, i))
                        nume += (K - cnt[j] + 1) * (K - cnt[i] + 1);
                }
            }
            cnt[j]--;
        }
    }
    cout << nume << " " << deno << endl;
    printf("%.10lf\n", (double)nume / deno);
}

int main() {
    long long K;
    scanf("%lld", &K);
    std::string S;
    std::cin >> S;
    std::string T;
    std::cin >> T;
    solve(K, S, T);
    return 0;
}
