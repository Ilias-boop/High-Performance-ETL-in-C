#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/transform.h"
#include "../include/utils.h"

void test_transform_basic() {
    DataSet data = { .record_count = 5 };
    int result = transform_data(&data);
    
    assert(result == 0);
    printf("✅ test_transform_basic passed!\n");
}

int main() {
    test_transform_basic();
    printf("All transform tests passed successfully! 🚀\n");
    return 0;
}