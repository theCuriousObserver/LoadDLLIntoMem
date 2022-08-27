#include <tchar.h>
#include <windows.h>
#include <iostream>
#include <string>

typedef std::string (*FNPT(int);

using namespace std;

int main()
{
    HINSTANCE hInstance;

    string dllList[150] =
        {
            "C:\\Windows\\System32\\ntdll.dll",
            "C:\\Windows\\SysWOW64\\ntdll.dll",
            "C:\\Windows\\System32\\wow64.dll",
            "C:\\Windows\\System32\\wow64win.dll",
            "C:\\Windows\\System32\\wow64cpu.dll",
            "C:\\Windows\\SysWOW64\\kernel32.dll",
            "C:\\Windows\\SysWOW64\\KernelBase.dll",
            "C:\\Programr\\Bitdefender Security\\atcuf\\dlls_265827483885032704\\atcuf32.dll",
            "C:\\Windows\\SysWOW64\\oleaut32.dll",
            "C:\\Windows\\SysWOW64\\msvcp_win.dll",
            "C:\\Windows\\SysWOW64\\ucrtbase.dll",
            "C:\\Windows\\SysWOW64\\combase.dll",
            "C:\\Windows\\SysWOW64\\rpcrt4.dll",
            "C:\\Windows\\SysWOW64\\user32.dll",
            "C:\\Windows\\SysWOW64\\win32u.dll",
            "C:\\Windows\\SysWOW64\\gdi32.dll",
            "C:\\Windows\\SysWOW64\\gdi32full.dll",
            "C:\\Windows\\SysWOW64\\advapi32.dll",
            "C:\\Windows\\SysWOW64\\msvcrt.dll",
            "C:\\Windows\\SysWOW64\\sechost.dll",
            "C:\\Windows\\SysWOW64\\shell32.dll",
            "C:\\Windows\\SysWOW64\\ole32.dll",
            "C:\\Windows\\SysWOW64\\shlwapi.dll",
            "C:\\Windows\\SysWOW64\\comdlg32.dll",
            "C:\\Windows\\SysWOW64\\SHCore.dll",
            "C:\\Windows\\SysWOW64\\imm32.dll",
            "C:\\Windows\\SysWOW64\\imagehlp.dll",
            "C:\\Windows\\SysWOW64\\ws2_32.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\version.dll",
            "C:\\Windows\\SysWOW64\\version.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\opengl32.dll",
            "C:\\Windows\\SysWOW64\\opengl32.dll",
            "C:\\Windowst.windows.common-controls_6595b64144ccf1df_6.0.19041.1110_none_a8625c,1886757984\\comctl32.dll"
            "C:\\Program Files\\Cheat Engine 7.4\\lua53-32.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\wsock32.dll",
            "C:\\Windows\\SysWOW64\\wsock32.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\wininet.dll",
            "C:\\Windows\\SysWOW64\\wininet.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\GLU32.dll",
            "C:\\Windows\\SysWOW64\\glu32.dll",
            "C:\\Windows\\SysWOW64\\uxtheme.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\msimg32.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\msimg32.dll",
            "C:\\Windows\\SysWOW64\\msimg32.dll",
            "C:\\Windows\\SysWOW64\\rpcss.dll",
            "C:\\Windows\\SysWOW64\\kernel.appcore.dll",
            "C:\\Windows\\SysWOW64\\bcryptprimitives.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\tcc32-32.dll",
            "C:\\Windows\\SysWOW64\\clbcatq.dll",
            "C:\\Windows\\SysWOW64\\ExplorerFrame.dll",
            "C:\\Windows\\SysWOW64\\shfolder.dll",
            "C:\\Windows\\SysWOW64\\windows.storage.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\Wldp.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\Wldp.dll",
            "C:\\Windows\\SysWOW64\\wldp.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\profapi.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\profapi.dll",
            "C:\\Windows\\SysWOW64\\profapi.dll",
            "C:\\Windows\\SysWOW64\\psapi.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\PROPSYS.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\PROPSYS.dll",
            "C:\\Windows\\SysWOW64\\propsys.dll",
            "C:\\Windows\\SysWOW64\\msctf.dll",
            "C:\\Windows\\SysWOW64\\ntdll.dll",
            "C:\\Windows\\SysWOW64\\kernel32.dll",
            "C:\\Windows\\SysWOW64\\KernelBase.dll",
            "C:\\Program Files\\Bitdefender\\Bitdefender Security\\atcuf\\dlls_26582748388503,2704\\atcuf32.dll"
            "C:\\Windows\\SysWOW64\\oleaut32.dll",
            "C:\\Windows\\SysWOW64\\msvcp_win.dll",
            "C:\\Windows\\SysWOW64\\ucrtbase.dll",
            "C:\\Windows\\SysWOW64\\combase.dll",
            "C:\\Windows\\SysWOW64\\rpcrt4.dll",
            "C:\\Windows\\SysWOW64\\user32.dll",
            "C:\\Windows\\SysWOW64\\win32u.dll",
            "C:\\Windows\\SysWOW64\\gdi32.dll",
            "C:\\Windows\\SysWOW64\\gdi32full.dll",
            "C:\\Windows\\SysWOW64\\advapi32.dll",
            "C:\\Windows\\SysWOW64\\msvcrt.dll",
            "C:\\Windows\\SysWOW64\\sechost.dll",
            "C:\\Windows\\SysWOW64\\shell32.dll",
            "C:\\Windows\\SysWOW64\\ole32.dll",
            "C:\\Windows\\SysWOW64\\shlwapi.dll",
            "C:\\Windows\\SysWOW64\\comdlg32.dll",
            "C:\\Windows\\SysWOW64\\SHCore.dll",
            "C:\\Windows\\SysWOW64\\imm32.dll",
            "C:\\Windows\\SysWOW64\\imagehlp.dll",
            "C:\\Windows\\SysWOW64\\ws2_32.dll",
            "C:\\Windows\\SysWOW64\\version.dll",
            "C:\\Windows\\SysWOW64\\opengl32.dll",
            "C:\\Windows\\WinSxS\\x86_microsoft.windows.common-controls_6595b64144ccf1df_6.0.,19041.1110_none_a8625c1886757984\\comctl32.dll"
            "C:\\Program Files\\Cheat Engine 7.4\\lua53-32.dll",
            "C:\\Windows\\SysWOW64\\wsock32.dll",
            "C:\\Windows\\SysWOW64\\wininet.dll",
            "C:\\Windows\\SysWOW64\\glu32.dll",
            "C:\\Windows\\SysWOW64\\uxtheme.dll",
            "C:\\Windows\\SysWOW64\\msimg32.dll",
            "C:\\Windows\\SysWOW64\\kernel.appcore.dll",
            "C:\\Windows\\SysWOW64\\bcryptprimitives.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\tcc32-32.dll",
            "C:\\Windows\\SysWOW64\\clbcatq.dll",
            "C:\\Windows\\SysWOW64\\ExplorerFrame.dll",
            "C:\\Windows\\SysWOW64\\shfolder.dll",
            "C:\\Windows\\SysWOW64\\windows.storage.dll",
            "C:\\Windows\\SysWOW64\\wldp.dll",
            "C:\\Windows\\SysWOW64\\profapi.dll",
            "C:\\Windows\\SysWOW64\\psapi.dll",
            "C:\\Windows\\SysWOW64\\propsys.dll",
            "C:\\Windows\\SysWOW64\\msctf.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\dbghelp.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\symsrv.dll",
            "C:\\Windows\\SysWOW64\\uxtheme.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\symsrv.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\dwmapi.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\dwmapi.dll",
            "C:\\Windows\\SysWOW64\\dwmapi.dll",
            "C:\\Windows\\System32\\wow64win.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\TextShaping.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\TextShaping.dll",
            "C:\\Windows\\SysWOW64\\TextShaping.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\Xinput1_4.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\Xinput1_4.dll",
            "C:\\Windows\\SysWOW64\\XInput1_4.dll",
            "C:\\Windows\\SysWOW64\\cfgmgr32.dll",
            "C:\\Windows\\SysWOW64\\XInput1_4.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\DEVOBJ.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\DEVOBJ.dll",
            "C:\\Windows\\SysWOW64\\devobj.dll",
            "C:\\Windows\\SysWOW64\\InputHost.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\CoreMessaging.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\CoreMessaging.dll",
            "C:\\Windows\\SysWOW64\\CoreMessaging.dll",
            "C:\\Windows\\SysWOW64\\WinTypes.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\CoreUIComponents.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\CoreUIComponents.dll",
            "C:\\Windows\\SysWOW64\\CoreUIComponents.dll",
            "C:\\Windows\\SysWOW64\\ntmarta.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\lfs.dll",
            "C:\\Program Files\\lib\\lua\\5.3\\lfs.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\lfs.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\lfs53.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\clibs32\\lfs.dll",
            "C:\\Windows\\SysWOW64\\TextInputFramework.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\symsrv.dll",
            "C:\\Program Files\\Cheat Engine 7.4\\win32\\sqlite3.dll"};

    for (int i = 0; i < 150; i++)
    {
        hInstance = LoadLibrary((dllList[i]));
        if (!hInstance)
        {
            cout << "Failed to load dll" << endl;
            return 1;
        }
        // FreeLibrary(hInstance);
    }
    while (true)
    {
        cout << "Program Running" << endl;
    }
    return 0;
}


// Before FreeLibrary
// FNPTR fnPtr = (FNPTGetProcAddress(hInstance, "main;
// if (!fnPt
// {
//     cout << "Failed to find main function" << endl;
//     return 1;
// }