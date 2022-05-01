// https://dmoj.ca/problem/avocadotrees

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int N, Q, H, out = 0;
    cin >> N >> Q >> H;

    vector<int> PSA(N);
    PSA[0] = 0;

    for(int i = 1; i <= N; i++)
    {
        int a, b;

        cin >> a >> b;
        
        if(a <= H)
        {
            PSA[i] = PSA[i-1] + b;
        }
        else PSA[i] = PSA[i-1];
    }

    for(int i = 1; i <= Q; i++)
    {
        int l, r;

        cin >> l >> r;

        if(PSA[r] - PSA[l-1] > out)
        {
            out = PSA[r] - PSA[l-1];
        }
    }

    cout << out;
    return 0;
}