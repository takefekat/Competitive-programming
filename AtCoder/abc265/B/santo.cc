#include<stdio.h>
#include <iostream>
#include <vector>
using namespace std;
int main(void){

    long long N,M,j=0;
    long long T;
    char FailFlag = 0; // char: 文字、 unsigned char: 1byte符号なし整数、signed char: 1byte 符号あり整数
    long long tmp;
    std::vector<long long> ComsumeTime;
    std::vector<long long> BonusRoomNumber;
    std::vector<long long> GainTime;

    (void)scanf("%lld", &N); // cin >> N;
    (void)scanf("%lld", &M); // cin >> M;
    (void)scanf("%lld", &T); // cin >> T;

    for(int i=0; i<N-1; i++)
    {
        (void)scanf("%lld", &tmp);
        ComsumeTime.push_back(tmp);
    }

    for(int i=0; i<M; i++)
    {
        (void)scanf("%lld", &tmp);
        BonusRoomNumber.push_back(tmp);
        (void)scanf("%lld", &tmp);
        GainTime.push_back(tmp);
    }

    for(int i=0; i<N-1; i++)
    {
        T -= ComsumeTime[i];

        if( T <= 0){
            FailFlag = (unsigned char)1;
            break;
        }
        if( j >= M ){
            cout << "WA" << endl;
        }
        if( j < M && BonusRoomNumber[j] == i+1+1   ){ //j < M  && 
            T += GainTime[j];
            if(j < M-1){
                j++;
            }
        }
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