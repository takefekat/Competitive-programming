#include<stdio.h>
#include <iostream>
#include <vector>
using namespace std;
using ll = long long;
int  main(void){

    ll N,M,T,j=0;
    char FailFlag = 0;
    ll tmp;
    std::vector<ll> ComsumeTime;
    std::vector<ll> BonusRoomNumber;
    std::vector<ll> GainTime;

    scanf("%Ld", &N);
    scanf("%Ld", &M);
    scanf("%Ld", &T);

    for(ll i=0; i<N-1; i++)
    {
        scanf("%Ld", &tmp);
        ComsumeTime.push_back(tmp);
    }

    for(ll i=0; i<M; i++)
    {
        scanf("%Ld", &tmp);
        BonusRoomNumber.push_back(tmp);
        scanf("%Ld", &tmp);
        GainTime.push_back(tmp);
    }

    for(ll i=0; i<N-1; i++)
    {
        T -= ComsumeTime[i];
        if( T <= 0){
            FailFlag = 1;
            break;
        }
        if( j < M && BonusRoomNumber[j] == i+1+1 ){
            T += GainTime[j];
            if(j < M-1){
                j++;
            }
        }
        //cout << "T"  << T << "; ";
    }


    //for (size_t i = 0; i < ComsumeTime.size(); ++i) {
    //    cout << ComsumeTime.at(i) << "; ";
    //}

    if( FailFlag == 1){
        std::cout << "No" << std::endl;
    }
    else{
        std::cout << "Yes" << std::endl;
    }
  return 0;
}