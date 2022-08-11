// A simple program that uses LoadLibrary and
// GetProcAddress to access myPuts from Myputs.dll.

#include <windows.h>
#include <stdio.h>

typedef int(__cdecl *MYPROC)(LPCWSTR);

int main(void)
{
    HINSTANCE hinstLib;
    MYPROC ProcAdd;
    BOOL fFreeResult, fRunTimeLinkSuccess = FALSE;

    // Get a handle to the DLL module.

    hinstLib = LoadLibrary(TEXT("ntdll.dll"));

    // If the handle is valid, try to get the function address.

    if (hinstLib != NULL)
    {
        ProcAdd = (MYPROC)GetProcAddress(hinstLib, "nT");

        // If the function address is valid, call the function.

        if (NULL != ProcAdd)
        {
            fRunTimeLinkSuccess = TRUE;
            (ProcAdd)(L"Message sent to the DLL function\n");
        }
        // Free the DLL module.

        fFreeResult = FreeLibrary(hinstLib);
    }

    // If unable to call the DLL function, use an alternative.
    if (!fRunTimeLinkSuccess)
        printf("Message printed from executable\n");

    for (int i = 0;; i++)
    {
        printf("Code Running:");
    }

    return 0;
}