#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MOD = 998244353;

// Function to precompute the sums of the smallest N-1 weights for all possible edge weights
vector<int> precompute_sums(int N, int M) {
    int num_edges = N * (N - 1) / 2;
    vector<int> sums(M * num_edges + 1, 0);

    for (int i = 1; i <= M; ++i) {
        for (int j = i; j < sums.size(); ++j) {
            sums[j] = (sums[j] + sums[j - i] + (j >= i ? 1 : 0)) % MOD;
        }
    }
    return sums;
}

int calculate_total_mst_sum(int N, int M) {
    int num_edges = N * (N - 1) / 2;
    vector<int> sums = precompute_sums(N, M);

    // Calculate the total MST sum modulo MOD
    int total_mst_sum = 0;
    for (int weight_sum : sums) {
        total_mst_sum = (total_mst_sum + weight_sum) % MOD;
    }

    return total_mst_sum;
}

int main() {
    int N, M;
    cin >> N >> M;

    cout << calculate_total_mst_sum(N, M) << endl;
    return 0;
}
