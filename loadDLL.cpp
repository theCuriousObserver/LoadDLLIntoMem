#include <windows.h>
#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        HINSTANCE hInstance = LoadLibraryW(L"C:\\Windows\\System32\\ntdll.dll");
        if (!hInstance)
        {
            cout << "Failed to load dll" << endl;
            return 1;
        }
        cout << "Program Running" << endl;
        FreeLibrary(hInstance);
    }
}