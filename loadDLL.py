# Source : https://stackoverflow.com/questions/252417/how-can-i-use-a-dll-file-from-python

from ctypes import *
from shutil import ExecError

# Load DLLs into memory.


def runDLL():
    dll_names = []
    dll_names.append(r'C:\Windows\System32\ntdll.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ntdll.dll')
    dll_names.append(r'C:\Windows\System32\wow64.dll')
    dll_names.append(r'C:\Windows\System32\wow64win.dll')
    dll_names.append(r'C:\Windows\System32\wow64cpu.dll')
    dll_names.append(r'C:\Windows\SysWOW64\kernel32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\KernelBase.dll')
    # dll_names.append(r'C:\Programr\Bitdefender Security\atcuf\dlls_265827483885032704\atcuf32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\oleaut32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\msvcp_win.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ucrtbase.dll')
    dll_names.append(r'C:\Windows\SysWOW64\combase.dll')
    dll_names.append(r'C:\Windows\SysWOW64\rpcrt4.dll')
    dll_names.append(r'C:\Windows\SysWOW64\user32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\win32u.dll')
    dll_names.append(r'C:\Windows\SysWOW64\gdi32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\gdi32full.dll')
    dll_names.append(r'C:\Windows\SysWOW64\advapi32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\msvcrt.dll')
    dll_names.append(r'C:\Windows\SysWOW64\sechost.dll')
    dll_names.append(r'C:\Windows\SysWOW64\shell32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ole32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\shlwapi.dll')
    dll_names.append(r'C:\Windows\SysWOW64\comdlg32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\SHCore.dll')
    dll_names.append(r'C:\Windows\SysWOW64\imm32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\imagehlp.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ws2_32.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\version.dll')
    dll_names.append(r'C:\Windows\SysWOW64\version.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\opengl32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\opengl32.dll')
    # dll_names.append(r'C:\Windowst.windows.common-controls_6595b64144ccf1df_6.0.19041.1110_none_a8625c1886757984\comctl32.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\lua53-32.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\wsock32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\wsock32.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\wininet.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\GLU32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\glu32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\uxtheme.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\msimg32.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\msimg32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\msimg32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\rpcss.dll')
    dll_names.append(r'C:\Windows\SysWOW64\kernel.appcore.dll')
    dll_names.append(r'C:\Windows\SysWOW64\bcryptprimitives.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\tcc32-32.dll')
    dll_names.append(r'C:\Windows\SysWOW64\clbcatq.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ExplorerFrame.dll')
    dll_names.append(r'C:\Windows\SysWOW64\shfolder.dll')
    dll_names.append(r'C:\Windows\SysWOW64\windows.storage.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\Wldp.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\Wldp.dll')
    dll_names.append(r'C:\Windows\SysWOW64\wldp.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\profapi.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\profapi.dll')
    dll_names.append(r'C:\Windows\SysWOW64\profapi.dll')
    dll_names.append(r'C:\Windows\SysWOW64\psapi.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\PROPSYS.dll')
    # dll_names.append(r'C:\Program Files\Cheat Engine 7.4\win32\PROPSYS.dll')
    dll_names.append(r'C:\Windows\SysWOW64\propsys.dll')
    dll_names.append(r'C:\Windows\SysWOW64\msctf.dll')
    dll_names.append(r'C:\Windows\SysWOW64\ntdll.dll')

    return dll_names


dll_names = runDLL()
for i in range(len(dll_names)):
    dll_check = dll_names[i]
    try:
        WinDLL(dll_check)
    except Exception as error:
        # print(dll_check)
        print(error)
        continue

# while True:
#     dll_names = runDLL()
#     print("Code Running")
