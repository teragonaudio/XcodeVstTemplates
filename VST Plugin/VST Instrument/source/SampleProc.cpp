/*
 *  ÇPROJECTNAMEÈ - ÇPROJECTNAMEÈProc.cpp
 *  Created by ÇFULLUSERNAMEÈ on ÇDATEÈ
 *  Copyright (c) ÇYEARÈ ÇORGANIZATIONNAMEÈ, All rights reserved
 */

#ifndef __ÇPROJECTNAMEASIDENTIFIERÈ_H
#include "ÇPROJECTNAMEÈ.h"
#endif

VstInt32 ÇPROJECTNAMEASIDENTIFIERÈ::processEvents (VstEvents* ev) {
  // TODO: Add your MIDI handling code here
	return 1;
}

void ÇPROJECTNAMEASIDENTIFIERÈ::processReplacing(float **inputs, float **outputs, VstInt32 sampleFrames) {
  float *in_left = inputs[0];
  float *in_right = inputs[1];
  float *out_left = outputs[0];
  float *out_right = outputs[1];
  
  // Processing code goes here
}