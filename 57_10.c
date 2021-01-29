#include <stdio.h>
// 57-10 심사문제 : 인터페이스 타입 출력하기

typedef enum _INTERFACE_TYPE {
    InterfaceTypeUndefined = -1,
    Internal,
    Isa,
    Eisa,
    MicroChannel,
    TurboChannel,
    PCIBus,
    VMEBus,
    NuBus,
    PCMCIABus,
    CBus,
    MPIBus,
    MPSABus,
    ProcessorInternal,
    InternalPowerBus,
    PNPISABus,
    PNPBus,
    MaximumInterfaceType
} INTERFACE_TYPE, *PINTERFACE_TYPE;

int main()
{
    for (int i = Internal; i < MaximumInterfaceType; i++)
    {
        printf("%d ", i);
    }

    return 0;
}