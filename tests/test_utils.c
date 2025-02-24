#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/utils.h"

void test_logging() {
    log_info("Testing log_info function");
    log_error("Testing log_error function");
    printf("✅ test_logging passed!\n");
}

int main() {
    test_logging();
    printf("All utils tests passed successfully! 🚀\n");
    return 0;
}