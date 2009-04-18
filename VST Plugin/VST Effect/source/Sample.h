/*
 *  ÇPROJECTNAMEÈ - ÇPROJECTNAMEÈ.h
 *  Created by ÇFULLUSERNAMEÈ on ÇDATEÈ
 *  Copyright (c) ÇYEARÈ ÇORGANIZATIONNAMEÈ, All rights reserved
 */

#ifndef __ÇPROJECTNAMEASIDENTIFIERÈ_H
#define __ÇPROJECTNAMEASIDENTIFIERÈ_H

#ifndef __audioeffect__
#include "audioeffectx.h"
#endif

// TODO: Add your parameter definitions here
enum {
  // kFirstParameter = 0,
  kNumParameters
};

// TODO: Add other macros or preprocessor defines here

// TODO: Change to reflect your plugin
const int kNumPrograms = 0;
const int kNumInputs = 2;
const int kNumOutputs = 2;
const unsigned long kUniqueId = 'XXXX';

class ÇPROJECTNAMEASIDENTIFIERÈ : public AudioEffectX {
public:
  ÇPROJECTNAMEASIDENTIFIERÈ(audioMasterCallback audioMaster);
  ~ÇPROJECTNAMEASIDENTIFIERÈ();
  
  virtual VstInt32 canDo(char *text);
  virtual bool getEffectName(char* name);
  
  virtual float getParameter(VstInt32 index);
  virtual void getParameterDisplay(VstInt32 index, char *text);
  virtual void getParameterLabel(VstInt32 index, char *label);
  virtual void getParameterName(VstInt32 index, char *text);
  virtual VstPlugCategory getPlugCategory();
  
  virtual bool getProductString(char* text);
  virtual void getProgramName(char *name);
  virtual bool getVendorString(char* text);
  virtual VstInt32 getVendorVersion();
  
  virtual void processReplacing(float **inputs, float **outputs, VstInt32 sampleFrames);
  
  virtual void setParameter(VstInt32 index, float value);
  virtual void setProgramName(char *name);
  
private:
};

#endif
