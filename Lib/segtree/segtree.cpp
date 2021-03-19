#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

template <class Monoid>
class segtree {
    // sz:葉の数. 配列サイズは 2 * sz - 1.
    int sz;
    vector<Monoid> seg;

    // 結合則を満たす二項演算 F.
    using F = function<Monoid(Monoid, Monoid)>;
    const F f;

    // 単位元 e.
    const Monoid e;

   public:
    // コンストラクタ.
    segtree(int n, const F f, const Monoid& e) : f(f), e(e) {
        sz = 1;
        while (sz < n) sz <<= 1;    // szはn以上の最小の2の冪乗
        seg.assign(2 * sz - 1, e);  // 単位元 e で初期化
    }

    /******* Method *******/

    // 値の更新
    // O(log(n))
    void update(int idx, const Monoid& val) {
        idx += sz - 1;          // idx番目の葉のidx: idx + sz -1
        seg[idx] = val;         // 葉の要素の更新
        while (idx > 0) {       // 根まで更新
            idx = parent(idx);  // 親
            seg[idx] = f(seg[left(idx)], seg[right(idx)]);
        }
    }

    // 区間[a,b)に対する二項演算 f の結果を算出
    Monoid query(int a, int b) {
        Monoid L = e, R = e;
        // a,bの親のノードが一致するまで登る
        for (a += sz - 1, b += sz - 1; a < b; a = parent(a), b = parent(b)) {
            if ((a + 1) & 1)         // aが偶数の場合
                L = f(L, seg[a++]);  // Lをseg[a]で更新して、a+=1する
            if ((b + 1) & 1)         // bが偶数の場合
                R = f(seg[--b], R);  // Rをseg[b-1]で更新して、b-=1する
        }
        return f(L, R);
    }

    // 葉の要素へのアクセス
    Monoid operator[](size_t idx) { return seg[idx + sz - 1]; }

    void debug() {
        int p = 2;
        for (int i = 0; i < sz * 2 - 1; i++) {
            printf("%12d ", (int)seg[i]);
            // 0,2,6,14
            if (p == i + 2) {
                p <<= 1;
                cout << endl;
            }
        }
    }

   private:
    int parent(int i) { return (i - 1) / 2; }
    int left(int i) { return 2 * i + 1; }
    int right(int i) { return 2 * i + 2; }
};

void Range_Min_Query() {
    int n, q;
    cin >> n >> q;

    segtree<int> seg(
        n, [](int a, int b) { return min(a, b); }, INT_MAX);

    for (ll i = 0; i < q; i++) {
        ll c, x, y;
        cin >> c >> x >> y;
        if (c == 0) {
            seg.update(x, y);
        } else {
            cout << seg.query(x, y + 1) << endl;
        }
    }
}

void Range_Sum_Query() {
    int n, q;
    cin >> n >> q;

    segtree<int> seg(
        n, [](int a, int b) { return a + b; }, 0);

    for (ll i = 0; i < q; i++) {
        ll c, x, y;
        cin >> c >> x >> y;
        if (c == 0) {
            seg.update(x, seg[x] + y);
        } else {
            cout << seg.query(x, y + 1) << endl;
        }
    }

    return;
}

int main() {
    // Range_Min_Query();
    Range_Sum_Query();

    return 0;
}