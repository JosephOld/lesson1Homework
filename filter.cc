#include <iostream>

const int MAX_SIZE = 20;

// Function for array input
// TODO: Implement proper input validation
// Should return true if input is successful, false on error
bool input(int *a, int *n) {
    std::cin >> *n;
    // TODO: Check if n is within valid range and input is successful
    if (*n <= 0 || *n > MAX_SIZE) {
        return false;
    }
    // TODO: Check each input operation for success
    for (int i = 0; i < *n; i++) {
        std::cin >> a[i];
    }
    // TODO: Verify that there's no extra data after the array
    return true;
}

// Function to filter array elements
// TODO: Implement filtering for even positive numbers
// Store result in array b and set the size
void filter(int *a, int n, int *b, int *size) {
    *size = 0;
    for (int i = 0; i < n; i++) {
        if (/* condition for even and positive numbers */) {
            b[*size] = a[i];
            (*size)++;
        }
    }
}

// Function to output array elements
// TODO: Implement output with space separation
void output(int *a, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << a[i];
        if (i != n - 1) {
            std::cout << " ";
        }
    }
}

int main()
{
    int n;
    int data[MAX_SIZE];
    int result[MAX_SIZE];
    int result_size;
    
    // TODO: Add input validation for end of line checking
    if (input(data, &n)) {
        filter(data, n, result, &result_size);
        output(result, result_size);
    } else
    {
        std::cout << "n/a";
    }
    
    return 0;
}