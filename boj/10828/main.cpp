#include <iostream>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    std::cout.tie(NULL);

    int stack[10000];
    int cursor = -1;
    int n;
    std::cin >> n;
    std::string cmd;
    int number;
    while(n--) {
        std::cin >> cmd;
        if ("push" == cmd) {
            std::cin >> number;
            cursor++;
            stack[cursor] = number;
        } else if ("top" == cmd) {
            if(cursor >= 0) {
                std::cout << stack[cursor] << '\n';
            } else {
                std::cout << "-1" << '\n';
            }
        } else if ("size" == cmd) {
            std:: cout << (cursor + 1) << '\n';
        } else if ("empty" == cmd) {
            std::cout << (cursor == -1 ? 1 : 0) << '\n';
        } else if ("top" == cmd) {
            if(cursor >= 0) {
                std::cout << stack[cursor] << '\n';
            } else {
                std::cout << "-1" << '\n';
            }
        } else if("pop" == cmd) {
            if(cursor >= 0) {
                std::cout << stack[cursor] << '\n';
                cursor--;
            } else {
                std:: cout << "-1" << '\n';
            }
        }
    }
    return 0;
}