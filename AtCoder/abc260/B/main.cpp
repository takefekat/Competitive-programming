#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct student {
    ll score;  // math, english, sum
    ll idx;

    // コンストラクタ
    student(ll s, ll i) : score(s), idx(i) {}
    student() {}

    // ソートするための比較演算子
    bool operator<(const student& st) const {
        if(score == st.score)
            return idx < st.idx;
        else
            return score > st.score;
    }
};



int main() {
    // input
    ll N, X, Y, Z;
    cin >> N >> X >> Y >> Z;

    vector<ll> A(N), B(N);
    for(ll i = 0; i < N; i++) cin >> A[i];
    for(ll i = 0; i < N; i++) cin >> B[i];

    // compute
    vector<student> mat(N), eng(N), sum(N);
    for(ll i = 0; i < N; i++) {
        mat[i] = student(A[i], i + 1);
        eng[i] = student(B[i], i + 1);
        sum[i] = student(A[i] + B[i], i + 1);
    }

    set<ll> ans;  // 合格者リスト
    // 数学
    sort(mat.begin(), mat.end());
    for(auto&& s : mat) {
        if(ans.size() < X)
            ans.insert(s.idx);
        else
            break;
    }

    // 英語
    sort(eng.begin(), eng.end());
    for(auto&& s : eng) {
        if(ans.size() < X + Y)
            ans.insert(s.idx);
        else
            break;
    }

    // sum
    sort(sum.begin(), sum.end());
    for(auto&& s : sum) {
        if(ans.size() < X + Y + Z)
            ans.insert(s.idx);
        else
            break;
    }

    for(auto&& e : ans) {
        cout << e << endl;
    }
    return 0;
}
