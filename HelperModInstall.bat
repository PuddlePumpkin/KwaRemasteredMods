@echo off
setlocal enabledelayedexpansion




:: DEFINE THESE 
:: Your built blueprint mod pak folder
set "SOURCE_DIR=%~dp0\Windows\OblivionRemastered\Content\Paks".
:: Your Oblivion Mod Directory
set "DEST_DIR=C:\Program Files (x86)\Steam\steamapps\common\Oblivion Remastered\OblivionRemastered\Content\Paks\LogicMods\KwaNotificationsBP"
::Your chunk labelled pak name (without the .pak / ucas file extension)
set "PAKNAME=pakchunk248-Windows"
::Your renamed pak name (the name you want it to be changed to in logicmods folder)
set "RENAME=KwaNotificationsBP"

:: Your lua mod directory
set "SOURCE_DIR_LUA=%~dp0"
:: Your Lua Mod Directory
set "DEST_DIR_LUA=C:\Program Files (x86)\Steam\steamapps\common\Oblivion Remastered\OblivionRemastered\Binaries\Win64\ue4ss\mods\KwaNotificationsLua\Scripts"
::Your lua mod name
set "LUA_NAME=main.lua"







:: Verify source files exist
set "missing_pak_files="
set "missing_lua_file="

if not exist "%SOURCE_DIR%\%PAKNAME%.pak" (
    set "missing_pak_files=!missing_pak_files!%PAKNAME%.pak "
)

if not exist "%SOURCE_DIR%\%PAKNAME%.ucas" (
    set "missing_pak_files=!missing_pak_files!%PAKNAME%.ucas "
)

if not exist "%SOURCE_DIR%\%PAKNAME%.utoc" (
    set "missing_pak_files=!missing_pak_files!%PAKNAME%.utoc "
)

if not exist "%SOURCE_DIR_LUA%\%LUA_NAME%" (
    set "missing_lua_file=!missing_lua_file!%LUA_NAME% "
)

if defined missing_pak_files (
    echo "No pak files to move"
) else (
    :: Double check renamed files dont exist already
    del "%SOURCE_DIR%\%RENAME%.pak" >nul 2>&1
    del "%SOURCE_DIR%\%RENAME%.ucas" >nul 2>&1
    del "%SOURCE_DIR%\%RENAME%.utoc" >nul 2>&1

    :: Rename source files
    ren "%SOURCE_DIR%\%PAKNAME%.pak" %RENAME%.pak
    ren "%SOURCE_DIR%\%PAKNAME%.ucas" %RENAME%.ucas
    ren "%SOURCE_DIR%\%PAKNAME%.utoc" %RENAME%.utoc

    :: Create destination directory
    if not exist "%DEST_DIR%" (
        mkdir "%DEST_DIR%"
    )

    :: Delete existing destination files    
    if exist "%DEST_DIR%" (
        del "%DEST_DIR%\%RENAME%.pak" >nul 2>&1
        del "%DEST_DIR%\%RENAME%.ucas" >nul 2>&1
        del "%DEST_DIR%\%RENAME%.utoc" >nul 2>&1 
    )

    :: Copy files
    copy "%SOURCE_DIR%\%RENAME%.pak" "%DEST_DIR%"
    copy "%SOURCE_DIR%\%RENAME%.ucas" "%DEST_DIR%"
    copy "%SOURCE_DIR%\%RENAME%.utoc" "%DEST_DIR%"

    echo Copied %RENAME% files to:
    echo "%DEST_DIR%"



)
if defined missing_lua_file (
        echo "No lua file to move"
) else (
    :: Create destination directory
    if not exist "%DEST_DIR_LUA%" (
        mkdir "%DEST_DIR_LUA%"
    )
    :: Delete existing destination files
    if exist "%DEST_DIR_LUA%" (
        del "%DEST_DIR_LUA%\%LUA_NAME%" >nul 2>&1
    )
    :: Copy File
    copy "%SOURCE_DIR_LUA%\%LUA_NAME%" "%DEST_DIR_LUA%"
    echo Copied %LUA_NAME% to:
    echo "%DEST_DIR_LUA%"
)
endlocal
timeout /t 2


