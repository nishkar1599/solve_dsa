#include<iostream>
#include<vector>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    bool arr_prime[n + 1]; // ✅ allowed here
    for (int i = 0; i <= n; i++)
        arr_prime[i] = true;
    
    arr_prime[0] = arr_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (arr_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                arr_prime[j] = false;
            }
        }
    }

    vector<int> primes;
    for (int i = 2; i <= n; i++)
        if (arr_prime[i])
            primes.push_back(i);

    int count = 0;
    for (int i = 0; i + 1 < primes.size(); i++) {
        int sum = primes[i] + primes[i + 1] + 1;
        if (sum <= n && arr_prime[sum])
            count++;
    }

    cout << (count >= k ? "YES" : "NO") << endl;
}

int main() {
    solve();
    return 0;
}
