/*
Question A
There are stacks of paper on a long table. Calculate the number of papers in the range from Li to Ri inclusively (1 indexed).

Input format:
The first line includes integers N and M, the number of stacks, and the number of queries. The second line includes N space-separated integers. The next M lines include two integers Li and Ri.

Output format:
Output M lines, the number of papers between Li and Ri.

Ex:
Input:
5 1
3 5 1 3 2
1 3

Output:
9
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M, I[2];
    cin >> N >> M;

    vector<int> A(N-1), PSA(N-1);
    for(int i = 0; i<N; i++) cin >> A[i];

    PSA[0] = A[0];
    for(int i = 1; i < N; i++)  PSA[i] = PSA[i-1] + A[i];

    for(int i = 0; i < M; i++)
    {
        cin >> I[0] >> I[1];
        cout << PSA[I[1]] - PSA[I[0]-1];
    }

    return 0;
}