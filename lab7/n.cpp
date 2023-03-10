#include<iostream>
#include<algorithm>

using namespace std;

bool cheater(int a[], int size, int k, int i) {
    if (i == size - 1) {
        return false;
    }

    return ((a[i] - a[i - 1]) <= k) || cheater(a, size, k, i + 1);
}

int main() {
    int n, k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];

    sort(a, a + n);

    cout << (cheater(a, n, k, 1) ? "cheater" : "no") << endl;
}