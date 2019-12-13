#ifndef _NFC_TAG_OBJECT_H_
#define _NFC_TAG_OBJECT_H_

#include <Arduino.h>

#include "FolderSettings.h"

struct NfcTagObject
{
	uint32_t cookie;
	uint8_t version;
	FolderSettings nfcFolderSettings;
	//  uint8_t folder;
	//  uint8_t mode;
	//  uint8_t special;
	//  uint8_t special2;
};

#endif