#include <stdio.h>
#include <assert.h>

// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Test function
void test_add() {
    assert(add(2, 3) == 5);
    assert(add(-1, 1) == 0);
    assert(add(0, 0) == 0);
    printf("All test cases passed!\n");
}

int main() {
    test_add();
    printf("Sum function works correctly.\n");
    return 0;
}

