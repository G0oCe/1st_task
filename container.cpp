#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <array>


template <typename T>
void print(const T& container, char delimiter);

int main() {
    std::list<int> l = {2, 4, 6, 8};
    std::deque<int> d = {2, 4, 6, 8};
    std::vector<int> v = {2, 4, 6, 8};
    std::array<int, 4> arr = {2, 4, 6, 8};
  
    print(arr, ',');
    
    return 0;
}

template <typename T>
void print(const T& container, char delimiter) {
    auto iter = container.begin();

    while (iter != container.end()) {
        std::cout << *iter;
        ++iter;

        if (iter != container.end()) {
            std::cout << delimiter;
        }
    }
}

	
