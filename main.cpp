#include <iostream>
#include <vector>

int getSum(const std::vector<int>& numbers) {
    int sum = 0;
    for (int num : numbers) {
        sum += num;
    }
    return sum;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int sum = getSum(numbers);

    std::cout << "Sum of elements in the vector: " << sum << std::endl;

    return 0;
}
