#include <iostream>
#include <string>
using namespace std;

int main() {
    // string型　定義　
    string s1 = "abcd1234ABCD";  // 文字列
    string s2 = "0123456";       // 数字もstring型で表示できる。

    // [i] アクセス
    cout << s1[1] << endl;  // b  が出力される
    // s[i] の型は string ではなく、char なので要注意
    if(s2.substr(2, 1) == "2") {
        cout << "s[2] = '2'" << endl;
    }

    // .size()
    cout << s1.size() << endl;  // .size() で文字列の長さを取得できる。

    // 比較
    if(s1 == "abcd1234ABCD") cout << "一致！" << endl;

    // 部分文字列
    cout << s1.substr(4, 4) << endl;

    // 文字列連結
    cout << s1 + s2 << endl;
}