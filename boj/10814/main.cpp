//
// Created by jelly on 22/12/2019.
//
#include <iostream>
#include <vector>

using namespace std;

int a[100000];
vector<string> b;

int temp[100000];
vector<string> b_temp(100000);

void merge(int *a, int start, int mid, int end) {
    int firstPart = start;
    int lastPart = mid + 1;
    int savePoint = start;

    while ((firstPart <= mid) && (lastPart <= end)) {
        if (a[firstPart] <= a[lastPart]) {
            b_temp[savePoint] = b[firstPart];
            temp[savePoint++] = a[firstPart++];
        } else {
            b_temp[savePoint] = b[lastPart];
            temp[savePoint++] = a[lastPart++];
        }
    }

    while (firstPart <= mid) {
        b_temp[savePoint] = b[firstPart];
        temp[savePoint++] = a[firstPart++];
    }

    while (lastPart <= end) {
        b_temp[savePoint] = b[lastPart];
        temp[savePoint++] = a[lastPart++];
    }
    for (int i = start; i <= end; i++) {
        b[i] = b_temp[i];
        a[i] = temp[i];
    }

}

void partition(int *a, int start, int end) {
    int mid;
    if (start < end) {
        mid = (start + end) / 2;
        partition(a, start, mid);
        partition(a, mid + 1, end);
        merge(a, start, mid, end);
    }
}


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        string name;
        cin >> name;
        b.push_back(name);
    }

    partition(a, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ' << b[i] << '\n';
    }
    return 0;
}
