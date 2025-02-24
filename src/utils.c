### utils.c (Helper Functions)

#include "utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void log_info(const char *message) {
    printf("[INFO] %s\n", message);
}

void log_error(const char *message) {
    fprintf(stderr, "[ERROR] %s\n", message);
}

void free_data(DataSet *data) {
    free(data->records);
}