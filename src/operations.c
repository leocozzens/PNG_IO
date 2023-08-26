// C standard library
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef unsigned char pngByte;
typedef struct {
    int width;
    int height;
    pngByte colorType;
    pngByte bitDepth;
    pngByte *rows;
} PNGData;

PNGData *pngio_read_file(void) {
    // Read ops
};


PNGData *pngio_read_mem(void) {
    // Read ops
}

bool pngio_write_file(PNGData *outData) {

}