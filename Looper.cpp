// Blah blah
#include "Looper.h"

#include <stdio.h>
#include <unistd.h>

template <int TreePos, int N>
struct FibSlow_t {
    enum { value = FibSlow_t<TreePos, N - 1>::value +
                   FibSlow_t<TreePos + (1 << N), N - 2>::value, };
};

// Explicitly specialized for N==2
template <int T> struct FibSlow_t<T, 2> { enum { value = 1 }; };

// Explicitly specialized for N==1
template <int T> struct FibSlow_t<T, 1> { enum { value = 1 }; };

Looper::Looper()
{
    printf("Initializing Looper!\n");
    _loopCount = 0;

    printf("The result of the really slow compile is %d\n", FibSlow_t<0,29>::value);
}

int Looper::getLoopCount()
{
    return _loopCount;
}

void Looper::loop()
{
    while (getLoopCount() < 50)
    {
        _loopCount++;
        printf("Loop %d\n", getLoopCount());
        usleep(500000);
    }
}

void Looper::loop2()
{
    while (getLoopCount() < 50)
    {
        _loopCount++;
        printf("Loop %d\n", getLoopCount());
        usleep(500000);
    }
}
