### etl.c (Main Execution Logic)

#include "extract.h"
#include "transform.h"
#include "load.h"
#include "utils.h"

int main(int argc, char *argv[]) {
    if (argc < 2) {
        log_error("Usage: ./etl <input_file>");
        return 1;
    }
    
    char *input_file = argv[1];
    DataSet data;
    
    if (extract_data(input_file, &data) != 0) {
        log_error("Failed to extract data");
        return 1;
    }
    
    if (transform_data(&data) != 0) {
        log_error("Failed to transform data");
        return 1;
    }
    
    if (load_data(&data) != 0) {
        log_error("Failed to load data into PostgreSQL");
        return 1;
    }
    
    free_data(&data);
    log_info("ETL process completed successfully");
    return 0;
}