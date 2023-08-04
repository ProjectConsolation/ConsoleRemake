// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

//TODO: Start actually making the console here...
//
//


BOOL APIENTRY DllMain( HMODULE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        //console
        break;
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
    {
        //unload? do we even need it
        break;
    }
    return TRUE;
}

