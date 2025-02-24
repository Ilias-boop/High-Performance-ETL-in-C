#include <snappy-c.h>

void compress_data(const char *input, char *output, size_t *output_length) {
    snappy_status status = snappy_compress(input, strlen(input), output, output_length);
    if (status == SNAPPY_OK) {
        printf("Donnée compressée avec succès\n");
    } else {
        printf("Erreur compression\n");
    }
}