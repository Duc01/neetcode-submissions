#include <iostream>

class DynamicArray {
private:
    int* representative_array; // Pointer to the underlying raw array
    int current_size;          // Number of elements currently in the array
    int maximum_capacity;      // Total capacity of the array

public:
    // 1. Constructor: Initializes an array with a given capacity
    DynamicArray(int capacity) {
        this->maximum_capacity = capacity;
        this->current_size = 0;
        this->representative_array = new int[capacity];
    }

    // 2. Returns the element at index i
    int get(int i) {
        return representative_array[i];
    }

    // 3. Overwrites the element at index i with n
    void set(int i, int n) {
        representative_array[i] = n;
    }

    // 4. Adds n to the end of the array, doubling capacity if full
    void pushback(int n) {
        if (current_size == maximum_capacity) {
            resize();
        }
        representative_array[current_size] = n;
        current_size++;
    }

    // 5. Removes and returns the last element
    int popback() {
        if (current_size > 0) {
            current_size--;
            return representative_array[current_size];
        }
        return -1; // Fallback if called on an empty array
    }

    // 6. Doubles the internal capacity and copies elements
    void resize() {
        maximum_capacity *= 2;
        int* new_array = new int[maximum_capacity];
        
        for (int i = 0; i < current_size; i++) {
            new_array[i] = representative_array[i];
        }
        
        delete[] representative_array;  // Free old memory block
        representative_array = new_array; // Point to new larger block
    }

    // 7. Returns the number of elements in the array
    int getSize() {
        return current_size;
    }

    // 8. Returns the current capacity of the array
    int getCapacity() {
        return maximum_capacity;
    }

    // Destructor to clean up heap memory
    ~DynamicArray() {
        delete[] representative_array;
    }
};
