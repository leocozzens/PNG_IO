#ifndef OPERATIONS_H
#define OPERATIONS_H

// C standard library
#include <stdbool.h>

typedef unsigned char pngByte;
typedef struct {
    int width;
    int height;
    pngByte colorType;
    pngByte bitDepth;
    pngByte *rows;
} PNGData;

PNGData *pngio_read_file(void);
PNGData *pngio_read_mem(void);
bool pngio_write_file(PNGData *outData);


#endif