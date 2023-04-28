#include <iostream>
#include <chrono>

void arrayPrint(int arr[], int n) {
    std::cout << "[ ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "]" << std::endl;
}

int runSortSearch() {

    // -------- RESULTS --------------

    // generate random array
    // your code will be tested on a size of 10,000
    int dataSize = 10;
    int startingArray[dataSize];
    for (int i = 0; i < dataSize; i++) {
        startingArray[i] = rand() % 100;
    }   
    std::cout << "Unsorted: ";
    arrayPrint(startingArray, dataSize);


    // --------- SORT --------------------
    auto startSort = std::chrono::high_resolution_clock::now();

    /* YOUR SORTING FUNCTION HERE */
    /* This can be a function call or just an implementation in-line*/

    auto endSort = std::chrono::high_resolution_clock::now();
    auto totalSort = std::chrono::duration_cast<std::chrono::microseconds>(endSort - startSort);



    // -------- SEARCH ----------------------
    int elementToFind = 42;
    auto startSearch = std::chrono::high_resolution_clock::now();

    /* YOUR SEARCHING FUNCTION HERE */
    /* This can be a function call or just an implementation in-line*/

    auto endSearch = std::chrono::high_resolution_clock::now();
    auto totalSearch = std::chrono::duration_cast<std::chrono::microseconds>(endSearch - startSearch);
    

    // --------- RESULTS ---------------------
    std::cout << "Sorted: ";
    arrayPrint(startingArray, dataSize);

    std::cout << "Sort Time: " << totalSort.count() << std::endl;
    std::cout << "Search Time: " << totalSearch.count() << std::endl;

    
    return totalSearch.count() + totalSort.count();

}


int main() {

    int avgtime = 0;

    for (int i = 0; i < 3; i++) {
        srand(i);
        avgtime += runSortSearch();
    }

    std::cout << "FINAL SCORE: " << avgtime/3 << std::endl;

}