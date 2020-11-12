@echo off
:loop
    random5.exe %random% > data.in
    Periodic_Strings.exe < data.in > my.out
    Periodic_Strings_Correct.exe <data.in >std.out
fc my.out std.out 
if not errorlevel 1 goto loop
pause
goto loop