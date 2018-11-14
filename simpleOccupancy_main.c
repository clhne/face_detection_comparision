/***************************************************************
Ref:
1. https://blog.csdn.net/bendanban/article/details/8518382
2. https://devblogs.nvidia.com/cuda-pro-tip-occupancy-api-simplifies-launch-configuration/
***************************************************************/

#include "stdio.h"

void launchMyKernel();
int main()
{
    launchMyKernel();

    return 0;
}
