#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "../include/extract.h"
#include "../include/utils.h"

void test_extract_valid_file() {
    DataSet data;
    int result = extract_data("../data/sample.csv", &data);
    
    assert(result == 0);
    assert(data.record_count > 0);

    free_data(&data);
    printf("✅ test_extract_valid_file passed!\n");
}

void test_extract_invalid_file() {
    DataSet data;
    int result = extract_data("../data/non_existent.csv", &data);
    
    assert(result != 0);
    printf("✅ test_extract_invalid_file passed!\n");
}

int main() {
    test_extract_valid_file();
    test_extract_invalid_file();

    printf("All extract tests passed successfully! 🚀\n");
    return 0;
}