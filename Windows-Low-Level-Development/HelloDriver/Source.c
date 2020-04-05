#include "ntddk.h"

VOID Unload( IN PDRIVER_OBJECT DriverObject )
{
    DbgPrint( "Goodbye driver!\r\n" );
}

// This is like the main() function in C
NTSTATUS DriverEntry( IN PDRIVER_OBJECT DriverObject, IN PUNICODE_STRING RegistryPath )
{
    DriverObject->DriverUnload = Unload;

    DbgPrint( "Hello driver!\r\n" ); // printf()
    return STATUS_SUCCESS;
}
