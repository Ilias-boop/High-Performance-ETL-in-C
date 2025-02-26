#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/load.h"
#include "../include/utils.h"

void test_load_mock_data() {
    DataSet data = { .record_count = 5 };
    int result = load_data(&data);
    
    assert(result == 0);
    printf("✅ test_load_mock_data passed!\n");
}

int main() {
    test_load_mock_data();
    printf("All load tests passed successfully! 🚀\n");
    return 0;
}