#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int N, T; // declaring the number of cows and number of test cases

    cin >> N; // inputting number of cows
    vector<int> A(N), PSA(N); // declaring an array to hold the cows values
    for(int i = 0; i < N; i++)  cin >> A[i]; // inputting values of cows into array

    cin >> T; // inputting number of test cases
    vector<int> X(T), output(T); // declaring an array to hold the test cases and output
    for(int i = 0; i < T; i++)  cin >> X[i]; // inputting test cases into array

    // prefix sum array
    PSA[0] = 0;
    for(int i = 0; i < N+1; i++)  PSA[i+1] = PSA[i] + A[i];

    // left and right pointer 
    int leftp = 0, rightp = 0;

    // comparing the test cases
    for(int j = 0; j < T; j++) // runs for every test case
    {
        while(rightp < N) // runs until the right pointer reaches the end of array A
        {
            // checks if the sum is equal to the test case, else it moves the pointers
            if(PSA[rightp] - PSA[leftp] == X[j]) 
            {
                output[j]++;
                leftp++; // without this, the while loop would run forever
            }
            else if(PSA[rightp] - PSA[leftp] > X[j])
            {
                leftp++;
            }
            else rightp++;
        }
        leftp = 0, rightp = 0; // resetting the pointer for the next test case
    }

    for(int i = 0; i < T; i++) cout << output[i] << " "; // outputting the results
}