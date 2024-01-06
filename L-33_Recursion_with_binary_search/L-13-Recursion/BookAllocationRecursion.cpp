#include <iostream>
#include <vector>

using namespace std;

bool isPossibleSol(vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int findPages(vector<int>& arr, int n, int m, int s, int e) {
    if (s > e) {
        return -1;
    }

    int mid = s + (e - s) / 2;

    if (isPossibleSol(arr, n, m, mid)) {
        int ans = findPages(arr, n, m, s, mid - 1);
        if (ans == -1) {
            return mid;
        } else {
            return ans;
        }
    } else {
        return findPages(arr, n, m, mid + 1, e);
    }
}

int main() {
    vector<int> arr = {25 ,46, 28, 49 ,24};
    int n = arr.size();
    int m = 4;

    int s = 0;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    int e = sum;
    int result = findPages(arr, n, m, s, e);
    cout << "Maximum number of pages a student can read: " << result << endl;
    cout << "Also Maximum number of pages assigned to a student which is minimum of maximum: " << result << endl;

    return 0;
}
