### utils.h

#ifndef UTILS_H
#define UTILS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char **records;
    int record_count;
} DataSet;

void log_info(const char *message);
void log_error(const char *message);
void free_data(DataSet *data);

#endif // UTILS_H