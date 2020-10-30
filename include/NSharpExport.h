#ifndef _N_SHARP_EXPORT_H_
#define _N_SHARP_EXPORT_H_

#ifdef NSHARPEXPORTS
#define NSharpExport __declspec(dllexport)
#else
#define NSharpExport __declspec(dllimport)
#endif
#endif