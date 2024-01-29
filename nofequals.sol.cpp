#include <string.h> // Header file for string manipulation
#include <iostream> // Header file for input/output stream operations

using namespace std; // Using the standard namespace

int main()
{
    const int MAX_NUM  = 9; // Maximum number of digits
    const int MAX_NOS = 9; // Maximum number of sets
    const int MAX_SUM_VAL = 45; // Maximum sum value

    int n, s, dp[MAX_NOS + 1][MAX_NUM + 1][MAX_SUM_VAL + 1]; // Declaration of variables and an array for dynamic programming

    long long SUM_VAL = 0; // Initializing SUM_VAL as a long long variable

    memset(dp, 0, sizeof(dp)); // Initializing the 'dp' array to 0

    // Initializing dp array for base case of single digits
    for (int i = 0; i < MAX_NUM; i++)
    {
        dp[1][i][i] = 1;
    }

    // Dynamic programming to calculate the number of ways to form numbers with given sum and number of digits
    for (int N = 2; N <= MAX_NOS; N++)
    {
        for (int i = 1; i <= MAX_NUM; i++)
        {
            for (int j = 1; j <= MAX_SUM_VAL; j++)
            {
                if (j - i >= 0)
                {
                    for (int k = 0; k < i; k++)
                    {
                        dp[N][i][j] += dp[N - 1][k][j - i];
                    }
                }
            }
        }
    }

    cin >> n >> s; // Input for number of digits and required sum

    SUM_VAL = 0; // Reset SUM_VAL to 0

    // Calculating the total number of pairs satisfying the given conditions
    for (int i = 0; i <= MAX_NUM; i++)
    {
        SUM_VAL += dp[n][i][s];
    }

    // Outputting the result
    cout << "Number of digits " << n << " and Sum = " << s;
    cout << "\nNumber of pairs: " << SUM_VAL << endl;

    return 0; // Indicating successful completion of the program
}