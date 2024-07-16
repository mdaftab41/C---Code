#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <numeric>  // for std::accumulate

double calculateMean(const std::vector<int>& data) {
    int sum = std::accumulate(data.begin(), data.end(), 0);
    return static_cast<double>(sum) / data.size();
}

double calculateMedian(std::vector<int>& data) {
    std::sort(data.begin(), data.end());
    size_t size = data.size();
    if (size % 2 == 0) {
        return (data[size / 2 - 1] + data[size / 2]) / 2.0;
    } else {
        return data[size / 2];
    }
}

int calculateMode(const std::vector<int>& data) {
    std::map<int, int> frequency;
    for (int num : data) {
        frequency[num]++;
    }

    int mode = data[0];
    int maxCount = 0;

    for (const auto& pair : frequency) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mode = pair.first;
        }
    }

    return mode;
}

int main() {
    std::vector<int> data;
    int n, input;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> input;
        data.push_back(input);
    }

    double mean = calculateMean(data);
    double median = calculateMedian(data);
    int mode = calculateMode(data);

    std::cout << "Mean: " << mean << std::endl;
    std::cout << "Median: " << median << std::endl;
    std::cout << "Mode: " << mode << std::endl;

    return 0;
}
