
#ifndef __VAR__
#define __VAR__
#include "CommonDef.h"
#include "TypeDef.h"
#include <map>
extern bool coding_tree_flag;
extern bool compressSlice_flag;
extern int       id;
extern double        totalTime;

#if PRINT_INFO_COST
extern FILE *RecoBuf, *OrgBuf, *PredBuf, *ResiBuf, *RecoBufRef, *OrgResiBuf;

#endif   // PRINT_INFO_COST
//#ifdef PRINT_INFO_PIXEL
//extern FILE *Opixel, *T_Opixel, *RecoBuf, *OrgBuf, *PredBuf, *ResiBuf, *RecoBufRef, *OrgResiBuf;
//#endif   // PRINT_INFO_PIXEL
#endif 

