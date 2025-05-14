@echo off
setlocal enabledelayedexpansion

echo Ending Oblivion process if it is open...
taskkill /f /im OblivionRemastered-Win64-Shipping.exe
if %errorlevel% equ 0 (
    echo Process ended successfully.
    timeout /t 2
)
echo:
echo Installing files...

CALL %~dp0/install.bat

endlocal

"C:\Program Files (x86)\Steam\steam.exe" steam://rungameid/2623190

echo Starting game!...
timeout /t 3

