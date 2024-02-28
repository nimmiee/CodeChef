#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
 int T;
    cin >> T;

    // Step 2: Process each test case
    for (int t = 0; t < T; ++t) {
        // Read the number of colleges (N)
        int N;
        cin >> N;

        // Read the number of people from each college (A)
        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        // Step 3: Calculate the minimum number of rooms
        int minRooms = 0;
        for (int i = 0; i < N; ++i) {
            // Each college needs a separate room, and each room can accommodate at most 2 people
            minRooms += (A[i] + 1) / 2;
        }

        // Step 4: Output the result for each test case
        cout << minRooms << endl;
    }

}
