// Purpose : This program implements the Sieve of Eratosthenes to precompute all prime numbers up to 1e7 by marking multiples of each prime as non-prime.
// Time Complexity : The sieve runs in O(N log log N), which is extremely efficient for generating primes up to large limits like 10 million.
// Space Complexity : The boolean array isPrime uses O(N) space to store primality information for all numbers up to N.

#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 10;
vector<bool> isPrime(N, 1);

int main() {
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < N; ++i) {
        if (isPrime[i] == true) {
            for (int j = 2 * i; j < N; j += i) {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 1; i < 100; ++i) {
        cout << isPrime[i] << endl;
    }
}
