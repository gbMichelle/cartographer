#pragma once
#include "stdafx.h"

void OverwriteAssembly(BYTE* srcAddr, BYTE* writeAssm, int lenAssm);
void HexToByteArray(BYTE* byteArray, char* pointerHex);
int FindLineStart(FILE* fp, int lineStrLen);
void GetVKeyCodeString(int vkey, char* rtnString, int strLen);
void PadCStringWithChar(char* strToPad, int toFullLength, char c);
int ComputeFileMd5Hash(wchar_t* filepath, char* rtnMd5);