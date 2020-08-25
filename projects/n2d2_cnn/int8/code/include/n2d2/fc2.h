// N2D2 auto-generated file.
// @ Mon Sep 16 12:44:14 2019

#ifndef N2D2_EXPORTC_FC2_LAYER_H
#define N2D2_EXPORTC_FC2_LAYER_H

#include "typedefs.h"
#define FC2_NB_OUTPUTS 10
#define FC2_NB_CHANNELS 84

#define FC2_ACTIVATION Linear
#define FC2_SHIFT 3
static const BDATA_T fc2_biases[FC2_NB_OUTPUTS] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
#define FC2_NB_WEIGHTS (FC2_NB_OUTPUTS*FC2_NB_CHANNELS)

static const WDATA_T fc2_weights[FC2_NB_OUTPUTS][FC2_NB_CHANNELS] = 
{
    {-1, 1, -6, 0, -6, 0, -1, 0, -2, 0, 0, -1, 2, -1, 98, -2, -1, 0, 95, 95, 0, -2, -3, -3, 0, -2, -1, 0, -1, 93, 0, 0, 0, -6, 0, -3, -1, -2, -6, 0, -2, 0, 0, 0, 94, -2, 95, -1, -1, 59, -2, -3, -1, 0, 0, -1, -1, 0, -3, -5, -2, -3, -6, -6, 0, 93, -5, -1, -1, 94, -1, -1, -1, 0, -2, -1, 0, -1, 0, -1, 0, 21, -1, -1},
    {-1, 1, -1, -1, -1, 0, -1, -1, -1, 95, -1, -1, 5, 0, -1, -1, 93, -1, -1, 0, 0, -1, -1, -1, 0, -1, -1, 92, 94, 0, 94, 0, 0, -1, 0, -1, -1, -1, 0, 87, -1, 0, -1, -1, -1, -1, -1, -1, 91, 1, -1, -1, -1, 0, 0, -1, -1, 95, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, 0, -1, 95, -1, 0, 10, -1, -1},
    {-1, 1, 107, -2, 109, -1, -2, 0, -1, 0, -1, -2, 14, 0, -5, 0, 0, -1, -5, -5, -2, 0, 0, 0, -2, -1, -1, 0, 0, -5, -1, -1, 0, 113, -2, -1, -1, -1, 109, 0, 0, -2, -1, -1, -4, -1, -6, -1, 0, 70, 0, 0, -2, -1, -1, 0, -1, 0, -1, 108, -1, 0, 111, 109, -2, -5, 107, -1, -2, -6, -1, 0, -2, -1, -1, -1, -1, -1, 0, -2, -1, 0, 0, -1},
    {-3, 0, -2, -4, -2, -2, -4, -1, -2, 0, -2, -5, 30, -1, 0, 0, 0, -2, 0, 0, 109, 0, 0, 0, 109, -2, -2, -1, 0, -1, -1, 106, -1, -2, 110, -1, -1, -1, -1, 0, 0, 109, 110, -2, 0, -2, 0, -4, 0, 0, 0, 0, -5, -2, 103, -1, -2, -1, -2, -1, -2, 0, -1, -2, 109, 0, -1, -3, -2, 0, -3, -1, -3, -1, -2, -2, -1, -3, 0, -2, -2, 2, -1, -3},
    {-1, -1, -1, -8, 0, -1, -8, 116, -2, 0, 0, -9, 10, 116, -1, -1, -1, -1, 0, 0, -1, -1, -1, -2, -1, -2, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, 117, -1, 0, 1, -1, -1, -1, -1, -1, -1, 0, -7, -1, 0, -1, -2, -8, -1, -1, 114, -1, -1, -2, -1, -2, 0, 0, -1, -1, 0, -1, -9, -1, 0, 77, 119, -7, 117, -1, -1, -1, -2, -1, -1, -1, 11, 118, -1},
    {-1, -1, -1, -2, -1, -1, -3, -1, 111, -1, -1, -3, 14, -1, -2, -4, -1, -1, -2, -2, -2, -3, -3, -3, -2, 114, -3, -1, -1, -2, -1, -2, -1, -1, -1, 112, -1, 116, 0, -1, -3, -3, -1, -1, -2, 110, -2, -2, -1, -1, -4, -4, -3, -1, 0, -1, -3, -1, 111, -1, -3, -4, -1, -1, -2, -2, -1, -2, -4, -1, -2, -1, -3, -1, 109, -2, -1, -2, 0, -3, -1, 34, -1, -2},
    {0, 0, 0, -1, 0, 0, -1, -1, -4, -1, 0, -1, 0, -1, -2, 96, -1, 0, -2, -2, 0, 98, 99, 97, 0, -5, -2, -1, -1, -2, -1, 0, 0, 0, 0, -3, -1, -5, 0, -1, 95, 0, 0, 0, -2, -4, -3, -1, -1, 0, 97, 94, -1, 0, 0, -1, -2, -1, -4, 0, -2, 93, 0, 0, 0, -2, 0, -1, -1, -2, -1, -1, -1, -1, -5, -2, 0, -2, -1, -2, 0, 39, -1, -1},
    {103, 1, -1, -3, 0, 106, -3, -1, -1, -1, 103, -3, 18, -1, 0, 0, -1, 102, 0, 0, -2, 0, 0, 0, -2, -1, -1, 0, -1, 0, -1, -2, 102, -1, -2, -1, -1, -1, -1, 0, 0, -2, -2, 104, 0, -1, 0, -2, -1, 0, 0, 0, -3, 101, -1, -1, -1, -1, -1, -1, -2, 0, -1, -3, -2, 0, -2, -3, -2, 0, 0, 0, -3, -1, -1, -1, 105, -1, 0, -1, 105, 1, -1, -1},
    {-1, 0, -1, -3, -1, -1, -3, -1, -3, 0, -1, -3, 19, -1, -1, -2, 0, -1, -1, -1, -2, -1, -2, -2, -2, -2, 122, -1, -1, -1, 0, -2, -1, -1, -2, -2, -1, -3, -2, -1, -2, -2, -2, -1, -1, -3, -1, -2, -1, 1, -1, -2, -3, -1, -1, -1, 127, -1, -2, -1, 123, -2, -1, -2, -1, 0, -1, -2, 125, 0, -1, -1, -2, -1, -3, 119, -1, 126, -2, 123, -1, 15, -1, 123},
    {-2, 0, -2, 121, -1, -2, 123, -8, -3, -1, -1, 123, 37, -8, -1, -1, -1, -2, -1, -1, -4, -1, -1, -1, -3, -2, -3, 0, -1, 0, -1, -3, -2, -2, -4, -3, -7, -3, -1, 0, -1, -3, -3, -2, 0, -3, 0, 124, -1, -1, -1, -1, 121, -2, -3, -7, -2, -1, -3, -2, -2, -1, -1, -2, -3, 0, -2, 122, -3, -1, 49, -6, 121, -7, -2, -2, -2, -3, 0, -3, -2, 9, -9, -3}};

#endif // N2D2_EXPORTC_FC2_LAYER_H
