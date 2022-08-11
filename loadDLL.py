import ctypes
import os
import sys
from ctypes import *

lib = WinDLL('ntdll.dll')
print(lib)
while True:
    print("Code Running")
