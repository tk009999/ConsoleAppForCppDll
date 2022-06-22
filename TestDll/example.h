/// Thanks for sharing
/// The sample code is refrence by Hiruma Kazuya
/// The article source from the URL: https://edom18.medium.com/how-to-make-c-dll-and-use-it-in-unity-292624f9e87a

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