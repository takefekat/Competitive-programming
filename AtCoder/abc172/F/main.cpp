#include <bits/stdc++.h>
using namespace std;
typedef long long ll;



void solve(long long N, std::vector<long long> A){

    if( N%2 == 0 ){
        for (size_t i = 1; i < N; i++)
        {
            if(A[0] > A[i]){
                cout << A[0] - A[i] << endl;
                return;
            }
        }
        cout << -1 << endl;
    }
    
    
    

}



signed main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, std::move(A));
    return 0;
}


// 先手:0、後手:1

// 石の山が1個　→　0

// 石の山が2個

//  1 2 3 4 5 6 
//1 1 0 0 0 0 0
//2 0 1 0 0 0 0
//3 0 0 1 0 0 0
//4 0 0 0 1 0 0
//5 0 0 0 0 1 0
//6 0 0 0 0 0 1

// 石の山が3個
// 1 1 * : 0
// 2 2 1 : 0
// 1 2 3 : 1
// 1 2 4 : 0
// 2 2 2 : 0

// 2 2 1 1 

// 10 9 8 7 6 5 4 3 : 0
// 12 7 8 7 6 5 4 3 : 1
