@echo off
:loop
    data_puzzle.exe %random% > Puzzle.in
    Puzzle_Ver0.3.exe < Puzzle.in > myPuzzle.out
    Puzzle_compare.exe < Puzzle.in > stdPuzzle.out
fc myPuzzle.out stdPuzzle.out 
if not errorlevel 1 goto loop

pause
goto loop