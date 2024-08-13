// Selection Sort
    start = high_resolution_clock::now();
    int selectionOps = selectionSort(arr2);
    stop = high_resolution_clock::now();
    auto selectionTime = duration_cast<microseconds>(stop - start);

    cout << "Bubble Sort Time: " << bubbleTime.count() << " microseconds, Operations: " << bubbleOps << endl;
    cout << "Selection Sort Time: " << selectionTime.count() << " microseconds, Operations: " << selectionOps << endl;
}

int main() {
    // Generate a random list of integers
    int array_size = 1000;  // Change this size for larger or smaller tests
    vector<int> random_array(array_size);

    // Fill the vector with random integers
    generate(random_array.begin(), random_array.end(), []() {
        return rand() % 10000;
    });

    // Compare the sorting algorithms
    compareSorts(random_array);

    return 0;
}
