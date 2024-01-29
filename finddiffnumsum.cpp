#include <iostream>

// Macros for defining range loops
#define range(i,a,b) for(int (i)=(a);(i)<(b);(i)++)
#define rep(i,n) range(i,0,n)

using namespace std;

int n, s;
long long int dp[10][1010]; // Declaration of 2D array to store combinations

int main(void) {
    dp[0][0] = 1LL; // Initialize the first element of the array to 1

    // Loop for calculating combinations
    rep(i, 101) {
        for (int j = 8; j >= 0; j--) {
            rep(k, 1010) {
                if (k + i <= 1010) {
                    dp[j + 1][k + i] += dp[j][k]; // Calculate combinations and store in the array
                }
            }
        }
    }

    // Input values for 'n' and 's'
    cout << "Input n and s: ";
    cin >> n >> s;

    // Output the number of combinations for given 'n' and 's'
    cout << "\nNumber of combinations: ";
    cout << dp[n][s] << endl;

    return 0;
}