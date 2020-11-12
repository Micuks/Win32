@echo off
:loop
    random5.exe %random% > data.in
    T5.exe < data.in > std.out
    T5G.exe < data.in > my.out
    fc my.out std.out 
if not errorlevel 1 goto loop
pause
goto loop