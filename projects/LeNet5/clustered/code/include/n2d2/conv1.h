// N2D2 auto-generated file.
// @ Mon Sep 16 12:33:02 2019

#ifndef N2D2_EXPORTC_CONV1_LAYER_H
#define N2D2_EXPORTC_CONV1_LAYER_H

#include "typedefs.h"
#define CONV1_NB_OUTPUTS 6
#define CONV1_NB_CHANNELS 1
#define CONV1_OUTPUTS_WIDTH 28
#define CONV1_OUTPUTS_HEIGHT 28
#define CONV1_OX_SIZE 28
#define CONV1_OY_SIZE 28
#define CONV1_CHANNELS_WIDTH 32
#define CONV1_CHANNELS_HEIGHT 32
#define CONV1_KERNEL_WIDTH 5
#define CONV1_KERNEL_HEIGHT 5
#define CONV1_SUB_SAMPLE_X 1
#define CONV1_SUB_SAMPLE_Y 1
#define CONV1_STRIDE_X 1
#define CONV1_STRIDE_Y 1
#define CONV1_PADDING_X 0
#define CONV1_PADDING_Y 0
#define CONV1_OUTPUT_OFFSET 0
#define CONV1_ACTIVATION Rectifier
#define CONV1_SHIFT 0
static BDATA_T conv1_biases[CONV1_NB_OUTPUTS] = {0, 0, 0, 0, 0, 0};
static WDATA_T conv1_weights[CONV1_NB_OUTPUTS][CONV1_NB_CHANNELS][CONV1_KERNEL_HEIGHT][CONV1_KERNEL_WIDTH] = {
	{
		{
      {0.22773543f, 0.18105884f, 0.31528652f, 0.057743914f, -0.16763929f},
      {0.31528652f, 0.18105884f, 0.18105884f, 0.008663997f, -0.107917815f},
      {0.39324114f, 0.39324114f, -0.107917815f, -0.16763929f, -0.21855938f},
      {0.39324114f, 0.22773543f, 0.008663997f, -0.16763929f, -0.33253446f},
      {0.31528652f, 0.008663997f, -0.107917815f, -0.16763929f, -0.28067943f}
		}
	},
	{
		{
      {0.22773543f, 0.39324114f, 0.10754139f, -0.043920293f, -0.16763929f},
      {0.7807504f, 0.7807504f, 0.46261725f, -0.16763929f, -0.36339203f},
      {0.7807504f, 0.9517093f, 0.39324114f, -0.16763929f, -0.16763929f},
      {0.7807504f, 0.9910979f, 0.6276698f, 0.18105884f, -0.043920293f},
      {0.6276698f, 0.46261725f, 0.7807504f, 0.31528652f, 0.22773543f}
		}
	},
	{
		{
      {-0.043920293f, -0.107917815f, 0.22773543f, 0.057743914f, 0.22773543f},
      {-0.107917815f, -0.043920293f, 0.008663997f, 0.10754139f, 0.008663997f},
      {0.18105884f, 0.008663997f, -0.16763929f, -0.33253446f, -0.107917815f},
      {0.22773543f, -0.16763929f, -0.21855938f, -0.28067943f, -0.21855938f},
      {0.22773543f, 0.18105884f, 0.31528652f, 0.31528652f, 0.31528652f}
		}
	},
	{
		{
      {-0.043920293f, 0.10754139f, -0.043920293f, -0.33253446f, -0.043920293f},
      {-0.043920293f, 0.008663997f, -0.043920293f, 0.008663997f, -0.21855938f},
      {0.31528652f, 0.39324114f, 0.008663997f, 0.057743914f, 0.31528652f},
      {0.31528652f, 0.31528652f, 0.22773543f, 0.39324114f, 0.18105884f},
      {-0.043920293f, -0.043920293f, 0.22773543f, 0.10754139f, 0.008663997f}
		}
	},
	{
		{
      {0.008663997f, -0.21855938f, -0.16763929f, -0.36339203f, -0.36339203f},
      {-0.16763929f, -0.28067943f, -0.62828624f, -0.36339203f, 0.008663997f},
      {0.10754139f, 0.008663997f, -0.21855938f, 0.39324114f, 0.31528652f},
      {0.46261725f, 0.82259476f, 0.9910979f, 0.82259476f, 0.31528652f},
      {0.7241204f, 1.0766538f, 1.0766538f, 0.82259476f, 0.6276698f}
		}
	},
	{
		{
      {0.10754139f, 0.22773543f, -0.107917815f, -0.043920293f, 0.22773543f},
      {-0.21855938f, -0.21855938f, 0.057743914f, 0.10754139f, 0.31528652f},
      {-0.21855938f, -0.16763929f, -0.28067943f, 0.10754139f, 0.008663997f},
      {-0.16763929f, -0.043920293f, 0.22773543f, 0.18105884f, 0.10754139f},
      {0.18105884f, 0.18105884f, 0.057743914f, 0.10754139f, 0.22773543f}
		}
	}
};



#endif // N2D2_EXPORTC_CONV1_LAYER_H
