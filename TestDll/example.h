#pragma once

#if defined (EXPORTBUILD)
#define _DLLExport __declspec (dllexport)
#else
#define _DLLExport __declspec (dllimport)
#endif

class Hoge
{
public:
    int Foo(int a);
};

extern "C" _DLLExport Hoge * createHoge();
extern "C" _DLLExport void freeHoge(Hoge * instance);
extern "C" _DLLExport int getResult(Hoge * instance, int a);