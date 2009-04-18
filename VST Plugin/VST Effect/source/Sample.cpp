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
: AudioEffectX(audioMaster, kNumPrograms, kNumParameters) {
  setNumInputs(kNumInputs);
  setNumOutputs(kNumOutputs);
  setUniqueID(kUniqueId);
}

ÇPROJECTNAMEASIDENTIFIERÈ::~ÇPROJECTNAMEASIDENTIFIERÈ() {
}

VstInt32 ÇPROJECTNAMEASIDENTIFIERÈ::canDo(char *text) {
  // TODO: Fill in according to your plugin's capabilities
  return 0;
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::getEffectName(char* name) {
  strncpy(name, "ÇPROJECTNAMEASIDENTIFIERÈ", kVstMaxProductStrLen);
  return true;
}

float ÇPROJECTNAMEASIDENTIFIERÈ::getParameter(VstInt32 index) {
  // TODO: Get parameter value for index
  return 0.0;
}

void ÇPROJECTNAMEASIDENTIFIERÈ::getParameterDisplay(VstInt32 index, char *text) {
  // TODO: Get parameter name for index
}

void ÇPROJECTNAMEASIDENTIFIERÈ::getParameterLabel(VstInt32 index, char *text) {
  // TODO: Get parameter value label for index
}

void ÇPROJECTNAMEASIDENTIFIERÈ::getParameterName(VstInt32 index, char *text) {
  // TODO: Get parameter name for index
}

VstPlugCategory ÇPROJECTNAMEASIDENTIFIERÈ::getPlugCategory() {
  return kPlugCategEffect;
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::getProductString(char* text) {
  strcpy(text, "ÇPROJECTNAMEASIDENTIFIERÈ");
  return true;
}

void ÇPROJECTNAMEASIDENTIFIERÈ::getProgramName(char *name) {
  // TODO: Get the current program name
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::getVendorString(char* text) {
  strcpy(text, "ÇORGANIZATIONNAMEÈ");
  return true;
}

VstInt32 ÇPROJECTNAMEASIDENTIFIERÈ::getVendorVersion() {
  // TODO: Get plugin version
  return 1000;
}

void ÇPROJECTNAMEASIDENTIFIERÈ::setParameter(VstInt32 index, float value) {
  // TODO: Set parameter value for index
}

void ÇPROJECTNAMEASIDENTIFIERÈ::setProgramName(char *name) {
  // TODO: Set current program's name
}