//
// Created by jelly on 28/11/2019.
//
#include <iostream>
int main() {
    int n;
    std::string str;
    std::cin >> n >> str;

    int sum = 0;

    for(int i = 0; i < str.size(); i++) {
        sum += ((int) str[i]) - 48;
    }

    std::cout << sum;
    return 0;
}