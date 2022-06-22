/// Thanks for sharing
/// The sample code is refrence by Hiruma Kazuya
/// The article source from the URL: https://edom18.medium.com/how-to-make-c-dll-and-use-it-in-unity-292624f9e87a

#include "pch.h"
#include "example.h"

int Hoge::Foo(int a)
{
    return a + 5;
}

Hoge* createHoge()
{
    return new Hoge();
}

void freeHoge(Hoge* instance) {
    delete instance;
}

int getResult(Hoge* instance, int a) {
    return instance->Foo(a);
}