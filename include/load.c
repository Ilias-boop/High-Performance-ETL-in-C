### load.h

#ifndef LOAD_H
#define LOAD_H

#include "utils.h"
#include <libpq-fe.h>

int load_data(DataSet *data);

#endif // LOAD_H