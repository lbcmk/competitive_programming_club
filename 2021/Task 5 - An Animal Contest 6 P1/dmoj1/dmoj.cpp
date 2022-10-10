// https://dmoj.ca/problem/aac6p1

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {

    long long N, K;
    cin >> N;
    cin >> K;

    if(K == 0) {
        cout << "-1";
        return 0;
    }

    vector<int> V(N);
    long long sum = 0;

    for(long long i = 1; i <= N; i++) {
        V[i-1] = i;
        sum += i;
    }

    V[N-1] += K - sum % K;

    for(int i = 0; i < N; i++) {
        cout << V[i] << " ";
    }

    return 0;
}