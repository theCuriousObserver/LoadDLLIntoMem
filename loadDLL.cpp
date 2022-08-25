#include <tchar.h>
#include <windows.h>
#include <iostream>

typedef std::string (*FNPTR)(int);

using namespace std;

int main()
{
    while (true)
    {
        HINSTANCE hInstance = LoadLibrary(_T("C:\\Windows\\System32\\ntdll.dll"));
        if (!hInstance)
        {
            cout << "Failed to load dll" << endl;
            return 1;
        }
        cout << "Program Running" << endl;

        FNPTR fnPtr = (FNPTR)GetProcAddress(hInstance, "main");
        if (!fnPtr)
        {
            cout << "Failed to find main function" << endl;
            return 1;
        }
        FreeLibrary(hInstance);
    }
    return 0;
}