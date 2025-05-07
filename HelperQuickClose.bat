@echo off
echo Attempting to end process: OblivionRemastered-Win64-Shipping.exe
taskkill /f /im OblivionRemastered-Win64-Shipping.exe
if %errorlevel% equ 0 (
    echo Process ended successfully.
) else (
    echo Failed to end process. It may not have been running.
)