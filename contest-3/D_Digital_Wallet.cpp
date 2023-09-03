#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    vector<vector<int>> arrays(N, vector<int>(M));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arrays[i][j];
        }
    }

    vector<long long> maxSums(N);

    for (int i = 0; i < N; i++) {
        vector<long long> prefixSum(M + 1, 0);
        for (int j = 0; j < M; j++) {
            prefixSum[j + 1] = prefixSum[j] + arrays[i][j];
        }

        for (int j = K; j <= M; j++) {
            maxSums[i] = max(maxSums[i], prefixSum[j] - prefixSum[j - K]);
        }
    }

    long long totalMoney = 0;

    for (int i = 0; i < N; i++) {
        totalMoney += maxSums[i];
    }

    cout << totalMoney << endl;

    return 0;
}
