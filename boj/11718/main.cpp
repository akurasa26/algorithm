//
// Created by jelly on 11/01/2020.
//
#include <cstdio>
#include <cstring>
using namespace std;
int main() {
    char str[103];
    while (fgets(str, 103, stdin) != NULL) {
        str[strlen(str) - 1] = '\0';
        printf("%s\n", str);//fgets는 공백을 포함.
    }
    return 0;
}