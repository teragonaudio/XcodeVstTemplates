/*
 *  ÇPROJECTNAMEÈ - ÇPROJECTNAMEÈ.cpp
 *  Created by ÇFULLUSERNAMEÈ on ÇDATEÈ
 *  Copyright (c) ÇYEARÈ ÇORGANIZATIONNAMEÈ, All rights reserved
 */

#ifndef __ÇPROJECTNAMEASIDENTIFIERÈ_H
#include "ÇPROJECTNAMEÈ.h"
#endif

AudioEffect* createEffectInstance(audioMasterCallback audioMaster) {
	return new ÇPROJECTNAMEASIDENTIFIERÈ(audioMaster);
}

ÇPROJECTNAMEASIDENTIFIERÈ::ÇPROJECTNAMEASIDENTIFIERÈ(audioMasterCallback audioMaster)
  : AudioEffectX(audioMaster, NUM_PROGRAMS, NUM_PARAMS) {
  setNumInputs(kNumInputs);
  setNumOutputs(kNumOutputs);
  setUniqueID(kUniqueId);
  
  strncpy(mProgramName, "Default", kProgramNameSize); // default program name
}

ÇPROJECTNAMEASIDENTIFIERÈ::~ÇPROJECTNAMEASIDENTIFIERÈ() {
}

VstInt32 ÇPROJECTNAMEASIDENTIFIERÈ::canDo(char *text) {
  // TODO: Fill in according to your plugin's capabilities
  return 0;
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::getEffectName(char* name) {
  strncpy(name, "ÇPROJECTNAMEASIDENTIFIERÈ", kProgramNameSize);
  return true;
}

float ÇPROJECTNAMEASIDENTIFIERÈ::getParameter(VstInt32 index) {
  switch(index) {
    default:
      return 0.0;
  }
}

void ÇPROJECTNAMEASIDENTIFIERÈ::getParameterDisplay(VstInt32 index, char *text) {
  switch(index) {
    default:
      strcpy(text, "ERROR");
      break;
  }
}

void ÇPROJECTNAMEASIDENTIFIERÈ::getParameterLabel(VstInt32 index, char *text) {
  switch(index) {
    default:
      strcpy(text, "ERROR");
      break;
  }
}

void ÇPROJECTNAMEASIDENTIFIERÈ::getParameterName(VstInt32 index, char *text) {
  switch(index) {
    default:
      strcpy(text, "ERROR");
      break;
  }
}

VstPlugCategory ÇPROJECTNAMEASIDENTIFIERÈ ::getPlugCategory() {
  return kPlugCategEffect;
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::getProductString(char* text) {
  strcpy(text, "ÇPROJECTNAMEASIDENTIFIERÈ");
  return true;
}

void ÇPROJECTNAMEASIDENTIFIERÈ::getProgramName(char *name) {
  strncpy(name, mProgramName, kProgramNameSize);
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::getVendorString(char* text) {
  strcpy(text, "ÇORGANIZATIONNAMEÈ");
  return true;
}

VstInt32 ÇPROJECTNAMEASIDENTIFIERÈ::getVendorVersion() {
  return 1000;
}

void ÇPROJECTNAMEASIDENTIFIERÈ::setParameter(VstInt32 index, float value) {
  switch(index) {
    default:
      break;
  }
}

void ÇPROJECTNAMEASIDENTIFIERÈ::setProgramName(char *name) {
  strcpy(mProgramName, name, kProgramNameSize);
}