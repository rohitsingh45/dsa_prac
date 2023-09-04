#include <iostream>

using namespace std;

int main() {
  // Get the size of the matrix from the user.
  int n;
  cin >> n;

  // Create a 2D array to store the matrix.
  int matrix[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> matrix[i][j];
    }
  }

  // Initialize a 2D array to store the lengths of the longest increasing sequences.
  int dp[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      dp[i][j] = 1;
    }
  }

  // Iterate through the matrix and update the lengths of the longest increasing sequences.
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (matrix[i][j] > matrix[k][j] && dp[i][j] < dp[k][j] + 1) {
          dp[i][j] = dp[k][j] + 1;
        }
      }
    }
  }

  // Find the maximum length of the longest increasing sequences.
  int maxLen = 1;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (maxLen < dp[i][j]) {
        maxLen = dp[i][j];
      }
    }
  }

  // Print the length of the longest sequence.
  cout << maxLen << endl;

  return 0;
}