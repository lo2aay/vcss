#include <iostream>
#include <vector>
#include <limits> // Include the <limits> header for numeric limits

int getSum(const std::vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return sum;
}

double getAverage(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        return 0.0; // To avoid division by zero, return 0 for an empty vector.
    }
    int sum = getSum(numbers);
    return static_cast<double>(sum) / numbers.size();
}

int getMin(const std::vector<int>& numbers) {
    if (numbers.empty()) {
        throw std::runtime_error("Vector is empty"); // Handle empty vector case
    }
    
    int min = std::numeric_limits<int>::max(); // Initialize min to the maximum possible integer

    for (int num : numbers) {
        if (num < min) {
            min = num; // Update min if a smaller element is found
        }
    }

    return min;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = getSum(numbers);
    double average = getAverage(numbers);
    int min = getMin(numbers);

    std::cout << "Sum of elements in the vector: " << sum << std::endl;
    std::cout << "Average of elements in the vector: " << average << std::endl;
    std::cout << "Minimum element in the vector: " << min << std::endl;

    return 0;
}
