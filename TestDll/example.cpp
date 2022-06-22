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