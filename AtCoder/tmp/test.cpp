#include <iostream>
#include <set>
using namespace std;

int main() {
    set<string> s;
    s.insert("Alice");
    s.insert("Bob");
    s.insert("Bob");
    cout << s.size() << endl;

    if (s.find("Bob") != s.end()) {
        cout << "Bobはいる" << endl;
    }

    if (s.find("Carol") != s.end()) {
        cout << "Carolはいる" << endl;
    }
}