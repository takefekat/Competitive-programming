#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, long long M, long long K, std::vector<long long> A, std::vector<long long> B){

    vector<ll>sum_A(N+1,0),sum_B(M+1,0);
    sum_A[0] = 0;
    sum_B[0] = 0;
    for (size_t i = 1; i <= N; i++)
    {
        sum_A[i] = sum_A[i-1] + A[i-1];
    }
    for (size_t i = 1; i <= M; i++)
    {
        sum_B[i] = sum_B[i-1] + B[i-1];
    }
    
    ll ans = 0;
    ll max_B = M;
    for (ll i = 0; i <= N; i++)
    {
        // Aの本からi冊読むとき、Bから何冊読めるか -> j
        for (ll j = max_B; j >= 0; j--)
        {
            if( sum_A[i] + sum_B[j] <= K ){
                max_B = j;
                ans = max(ans,i+j);
                break;
            }
        }
         
    }

    cout << ans << endl;
    
    
    





}

signed main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> B(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&B[i]);
    }
    solve(N, M, K, std::move(A), std::move(B));
    return 0;
}
