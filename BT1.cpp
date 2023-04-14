#include <iostream>
using namespace std;

int chan(int a[][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] % 2 == 0 && a[i][j] < 2023) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int a[3][10] = {
            {2013, 2017, 2012},
            {2019, 2029, 2021},
            {2027, 2025, 2023}
    };

    int n = 3, m = 3;
    int result = chan(a, n, m);
    if (result == 1) {
        cout << "1: Mang co it nhat mot so chan va nho hon 2023" << endl;
    } else {
        cout << "2: Mang khong co so chan nao nho hon 2023" << endl;
    }
    return 0;
}