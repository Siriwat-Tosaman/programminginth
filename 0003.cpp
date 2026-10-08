#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int Arr1[n][m] = {}, Arr2[n][m] = {}, ArrSum[n][m] = {};

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> Arr1[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> Arr2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ArrSum[i][j] = Arr1[i][j] + Arr2[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ArrSum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}