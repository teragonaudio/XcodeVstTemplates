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
  if(audioMaster != NULL) {
    setNumInputs(kNumInputs);
    setNumOutputs(kNumOutputs);
    setUniqueID(kUniqueId);
    canProcessReplacing();
    isSynth();
  }
  
  suspend();
}

ÇPROJECTNAMEASIDENTIFIERÈ::~ÇPROJECTNAMEASIDENTIFIERÈ() {
}

VstInt32 ÇPROJECTNAMEASIDENTIFIERÈ::canDo(char *text) {
  // TODO: Fill in according to your plugin's capabilities
  if(!strcmp(text, "receiveVstEvents")) {
		return 1;
  }
  else if(!strcmp(text, "receiveVstMidiEvent")) {
		return 1;
  }
	else if(!strcmp(text, "midiProgramNames")) {
		return 1;
  }
  
  // -1 => explicitly can't do; 0 => don't know
	return 0;
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::copyProgram(long destination) {
  // TODO: Copy program to destination
  return false;
}

VstInt32 ÇPROJECTNAMEASIDENTIFIERÈ::getCurrentMidiProgram(VstInt32 channel, MidiProgramName *mpn) {
	VstInt32 prg = 0;
  // TODO: Look up your current MIDI program and fill the MidiProgramName with it
	return prg;
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::getEffectName(char* name) {
  strncpy(name, "ÇPROJECTNAMEÈ", kVstMaxEffectNameLen);
  return true;
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::getMidiKeyName(VstInt32 channel, MidiKeyName *key) {
	// TODO: Fill in this information
  // key->thisProgramIndex;		// >= 0. fill struct for this program index.
	// key->thisKeyNumber;			// 0 - 127. fill struct for this key number.
	key->keyName[0] = 0;
	key->reserved = 0;				// zero
	key->flags = 0;					// reserved, none defined yet, zero.
	return true;
}

VstInt32 ÇPROJECTNAMEASIDENTIFIERÈ::getMidiProgramCategory(VstInt32 channel, MidiProgramCategory *category) {
  // TODO: Get the MIDI program category
	return 0;
}

VstInt32 ÇPROJECTNAMEASIDENTIFIERÈ::getMidiProgramName(VstInt32 channel, MidiProgramName *mpn) {
  // TODO: Return the MIDI program name
  return 0;
}

VstInt32 ÇPROJECTNAMEASIDENTIFIERÈ::getNumMidiInputChannels() {
  // TODO: Change this value for polyphonic synths
  return 1;
}

VstInt32 ÇPROJECTNAMEASIDENTIFIERÈ::getNumMidiOutputChannels() {
  // TODO: Change this value if you are sending MIDI output back to the host
  return 0;
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::getOutputProperties(VstInt32 index, VstPinProperties *properties) {
  if(index < kNumOutputs) {
    sprintf(properties->label, "%1ld Out", index + 1);
		properties->flags = kVstPinIsActive;
		if(index < 2) {
			properties->flags |= kVstPinIsStereo;
    }
    return true;
  }
  return false;
}

float ÇPROJECTNAMEASIDENTIFIERÈ::getParameter(VstInt32 index) {
  // TODO: Get parameter value for index
  return 0.0;
}

void ÇPROJECTNAMEASIDENTIFIERÈ::getParameterDisplay(VstInt32 index, char *text) {
  // TODO: Get parameter display for index
}

void ÇPROJECTNAMEASIDENTIFIERÈ::getParameterLabel(VstInt32 index, char *text) {
  // TODO: Get parameter label for index
}

void ÇPROJECTNAMEASIDENTIFIERÈ::getParameterName(VstInt32 index, char *text) {
  // TODO: Get parameter name for index
}

VstPlugCategory ÇPROJECTNAMEASIDENTIFIERÈ::getPlugCategory() { 
  return kPlugCategSynth;
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::getProductString(char* text) {
  // TODO: Replace with actual description of your synth
  strncpy(text, "ÇPROJECTNAMEÈ", kVstMaxProductStrLen);
  return true;
}

void ÇPROJECTNAMEASIDENTIFIERÈ::getProgramName(char *name) {
  // TODO: Copy active program name into "name" string
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::getProgramNameIndexed(VstInt32 category, VstInt32 index, char *text) {
  // TODO: Return program name for index
  return false;
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::getVendorString(char* text) {
  strncpy(text, "ÇORGANIZATIONNAMEÈ", kVstMaxVendorStrLen);
  return true;
}

VstInt32 ÇPROJECTNAMEASIDENTIFIERÈ::getVendorVersion() {
  // TODO: Return actual version of this plugin
  return 1000;
}

bool ÇPROJECTNAMEASIDENTIFIERÈ::hasMidiProgramsChanged(VstInt32 channel) {
  // TODO: Return true/false if the MIDI programs have changed
  return false;
}

void ÇPROJECTNAMEASIDENTIFIERÈ::setBlockSize(VstInt32 blockSize) {
  // TODO: Handle this call if necessary
	AudioEffectX::setBlockSize(blockSize);
}

void ÇPROJECTNAMEASIDENTIFIERÈ::setParameter(VstInt32 index, float value) {
  // TODO: Set parameter value for index
}

void ÇPROJECTNAMEASIDENTIFIERÈ::setProgram(VstInt32 index) {
  // TOOD: Set local variables based on program parameters
}

void ÇPROJECTNAMEASIDENTIFIERÈ::setProgramName(char *name) {
  // TODO: Set program name
}

void ÇPROJECTNAMEASIDENTIFIERÈ::setSampleRate(float sampleRate) {
  // TODO: Handle this call if necessary
	AudioEffectX::setSampleRate(sampleRate);
}