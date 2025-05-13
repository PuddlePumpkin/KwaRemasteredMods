@echo off
setlocal enabledelayedexpansion

echo Attempting to end process: OblivionRemastered-Win64-Shipping.exe
taskkill /f /im OblivionRemastered-Win64-Shipping.exe
if %errorlevel% equ 0 (
    echo Process ended successfully.
    timeout /t 2
) else (
    echo Installing...
)

CALL %~dp0/install.bat

endlocal

"C:\Program Files (x86)\Steam\steam.exe" steam://rungameid/2623190

timeout /t 3


