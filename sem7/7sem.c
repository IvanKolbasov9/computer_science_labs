#include "7sem.h"

int test_output(int data){
    if (!data) {
        printf("Wrong answer\n");
    } else {
        printf("Test passed\n");
    }
}


int main() {
    test_output(test(2, 2, 4));
    test_output(test(2, 1, 3));
    test_output(test(-1, -1, -2));
    test_output(test(1, 2, 3));

}


