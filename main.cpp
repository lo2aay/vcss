#include <iostream>
#include <vector>

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

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = getSum(numbers);
    double average = getAverage(numbers);

    std::cout << "Sum of elements in the vector: " << sum << std::endl;
    std::cout << "Average of elements in the vector: " << average << std::endl;

    return 0;
}
