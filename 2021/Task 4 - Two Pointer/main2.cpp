// https://dmoj.ca/problem/wc02p8

#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    long N, T, A, leftp = 0, rightp = 0;

    cin >> N;
    vector<int> PSA(N+1);
    PSA[0] = 0;
    for(int i = 0; i < N; i++)
    {
        cin >> A;
        PSA[i+1] = PSA[i] + A;
    }
    PSA[N] = PSA[N-1] + A;

    cin >> T;
    vector<int> output(T);

    for(int j = 0; j < T; j++)
    {
        cin >> A;
        while(rightp < N)
        {
            if(PSA[rightp] - PSA[leftp] == A) 
            {
                output[j]++;
                leftp++;
            }
            else if(PSA[rightp] - PSA[leftp] > A)
            {
                leftp++;
            }
            else rightp++;
        }
        leftp = 0, rightp = 0;

        cout << output[j] << " ";
    }
}