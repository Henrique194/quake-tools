// scriplib.h

#ifndef __CMDLIB__
#include "cmdlib.h"
#endif

#define MAXTOKEN 128

extern char token[MAXTOKEN];
extern char *scriptbuffer, *script_p, *scriptend_p;
extern int grabbed;
extern int scriptline;
extern bool endofscript;


void LoadScriptFile(char* filename);
bool GetToken(bool crossline);
void UnGetToken(void);
bool TokenAvailable(void);