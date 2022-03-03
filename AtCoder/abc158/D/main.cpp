#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using vll = vector<ll>;
using vvll = vector<vll>;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

int main()
{
    string S;
    ll Q;
    cin >> S >> Q;

    deque<string> deq;
    deq.push_back(S);

    bool is_forward = true;
    for (ll i = 0; i < Q; i++)
    {
        int T;
        scanf("%d", &T);
        if (T == 1)
        {
            if (is_forward)
                is_forward = false;
            else
                is_forward = true;
        }
        else
        {
            int F;
            char c;
            scanf("%d %c", &F, &c);
            string C{c};
            if (F == 1)
            {
                if (is_forward)
                    deq.push_front(C);
                else
                    deq.push_back(C);
            }
            else
            {
                if (is_forward)
                    deq.push_back(C);
                else
                    deq.push_front(C);
            }
        }
    }
    if (!is_forward)
        reverse(all(deq));

    for (auto &&e : deq)
    {
        if (!is_forward and e.size() > 1)
            reverse(all(e));
        cout << e;
    }
    cout << endl;

    return 0;
}
