#include <tchar.h>
#include <windows.h>
#include <iostream>

typedef std::string (*FNPTR)(int);

using namespace std;

int main()
{
    HINSTANCE hInstance;
    while (true)
    {
        hInstance = LoadLibrary(_T("C:\\Windows\\System32\\ntdll.dll"));
        if (!hInstance)
        {
            cout << "Failed to load dll" << endl;
            return 1;
        }
        cout << "Program Running" << endl;
    }
    FreeLibrary(hInstance);
    return 0;
}

// Before FreeLibrary
// FNPTR fnPtr = (FNPTR)GetProcAddress(hInstance, "main");
// if (!fnPtr)
// {
//     cout << "Failed to find main function" << endl;
//     return 1;
// }