#include <iostream>

#include "Looper.h"

void printFoo()
{
    printf("Foo!\n");
}

void printBar()
{
    printf("Bar!\n");
}

int main()
{
    // std::cout << "Hello, World!" << std::endl;
    printf("\n\n");
    printFoo();
    printBar();

    printf("Making looper\n");
    Looper looper;
    printf("Looper initialized\n");
    looper.loop();
    printf("Done looping\n");

    return 0;
}
