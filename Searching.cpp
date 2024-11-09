// Searching.cpp

#include <array>
#include <vector>

// Function for binary search in std::array
template <size_t N>
int binarySearchFirst(const std::array<int, N>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;  // Found, but continue searching left
            right = mid - 1;
        } else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return result;  // Return the first occurrence or -1 if not found
}

// Function for binary search in std::vector
int binarySearchFirst(const std::vector<int>& vec, int target) {
    int left = 0, right = vec.size() - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (vec[mid] == target) {
            result = mid;  // Found, but continue searching left
            right = mid - 1;
        } else if (vec[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return result;  // Return the first occurrence or -1 if not found
}
