#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    int a, b;
    char c;
    string token;
    int count = 0;
    while(n--) {
        cin >> a >> c >> b;
        cout << a + b << '\n';
    }

    return 0;
}