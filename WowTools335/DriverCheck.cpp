#include "Warden.h"
#include "WardenHelpers.h"

Warden::DriverCheckType Warden::OriginalDriverCheck = nullptr;
bool __fastcall Warden::DriverCheck(BYTE* a1, LPCSTR lpDeviceName, const void* p_hash, const void* p_seed)
{
    // Validate lpDeviceName
    if (lpDeviceName == nullptr || std::strlen(lpDeviceName) == 0) {
        Loggin(true, "Warden_Scans.txt", "[Error] lpDeviceName is invalid.");
    }

    bool results = OriginalDriverCheck(a1, lpDeviceName, p_hash, p_seed);

    /*  printf("[Warden] Driver Check :  Name = %s is Loaded = %s \n", std::string(lpDeviceName).c_str() , (results ? "true" : "false"));*/

    Loggin(true, "Warden_Scans.txt", "[Warden] Driver Check :  Name = %s is Loaded = %s \n", lpDeviceName, (results ? "true" : "false"));

    return results;
}