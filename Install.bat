@echo off
setlocal enabledelayedexpansion


:: DEFINE THESE 
:: Your built blueprint mod pak folder
set "SOURCE_DIR=%~dp0\Windows\OblivionRemastered\Content\Paks"
:: Your Oblivion LogicMods Directory
set "DEST_DIR=C:\Program Files (x86)\Steam\steamapps\common\Oblivion Remastered\OblivionRemastered\Content\Paks\LogicMods\"
set "RELEASE_DIR=%~dp0\Release\KwaNotificationsRelease\OblivionRemastered\Content\Paks\LogicMods\"
set "RELEASE_DIR2=%~dp0\Release\KwaConfigPanelRelease\OblivionRemastered\Content\Paks\LogicMods\"
:: Chunk name assignments
set "PAKNAME=pakchunk279-Windows"
set "RENAME=KwaConfigPanelBP_P"
set "PAKNAME2=pakchunk248-Windows"
set "RENAME2=KwaNotificationsBP_P"

:: Lua Main
set "SOURCE_DIR_LUA=%~dp0\KwaNotifsFiles\"
set "LUA_NAME=main.lua"
:: Lua Mod Directory
set "DEST_DIR_LUA=C:\Program Files (x86)\Steam\steamapps\common\Oblivion Remastered\OblivionRemastered\Binaries\Win64\ue4ss\mods\KwaNotificationsLua\Scripts"
set "RELEASE_DIR_LUA=%~dp0\Release\KwaNotificationsRelease\OblivionRemastered\Binaries\Win64\ue4ss\mods\KwaNotificationsLua\Scripts"

:: Copy to dest dir
if not exist "%DEST_DIR%\%RENAME%" (
    mkdir "%DEST_DIR%\%RENAME%"
)
if not exist "%DEST_DIR%\%RENAME2%" (
    mkdir "%DEST_DIR%\%RENAME2%"
)
copy "%SOURCE_DIR%\%PAKNAME%.pak" "%DEST_DIR%\%RENAME%\%RENAME%.pak"
copy "%SOURCE_DIR%\%PAKNAME%.ucas" "%DEST_DIR%\%RENAME%\%RENAME%.ucas"
copy "%SOURCE_DIR%\%PAKNAME%.utoc" "%DEST_DIR%\%RENAME%\%RENAME%.utoc"
copy "%SOURCE_DIR%\%PAKNAME2%.pak" "%DEST_DIR%\%RENAME2%\%RENAME2%.pak"
copy "%SOURCE_DIR%\%PAKNAME2%.ucas" "%DEST_DIR%\%RENAME2%\%RENAME2%.ucas"
copy "%SOURCE_DIR%\%PAKNAME2%.utoc" "%DEST_DIR%\%RENAME2%\%RENAME2%.utoc"

:: Same to release
if not exist "%RELEASE_DIR%\%RENAME%" (
    mkdir "%RELEASE_DIR%\%RENAME%"
)
:: Same to release
if not exist "%RELEASE_DIR2%\%RENAME2%" (
    mkdir "%RELEASE_DIR2%\%RENAME2%"
)

copy "%SOURCE_DIR%\%PAKNAME%.pak" "%RELEASE_DIR%\%RENAME%\%RENAME%.pak"
copy "%SOURCE_DIR%\%PAKNAME%.ucas" "%RELEASE_DIR%\%RENAME%\%RENAME%.ucas"
copy "%SOURCE_DIR%\%PAKNAME%.utoc" "%RELEASE_DIR%\%RENAME%\%RENAME%.utoc"
copy "%SOURCE_DIR%\%PAKNAME2%.pak" "%RELEASE_DIR2%\%RENAME2%\%RENAME2%.pak"
copy "%SOURCE_DIR%\%PAKNAME2%.ucas" "%RELEASE_DIR2%\%RENAME2%\%RENAME2%.ucas"
copy "%SOURCE_DIR%\%PAKNAME2%.utoc" "%RELEASE_DIR2%\%RENAME2%\%RENAME2%.utoc"


if not exist "%DEST_DIR_LUA%" (
    mkdir "%DEST_DIR_LUA%"
)
if not exist "%RELEASE_DIR_LUA%" (
    mkdir "%RELEASE_DIR_LUA%"
)

:: Copy File
copy "%SOURCE_DIR_LUA%\%LUA_NAME%" "%DEST_DIR_LUA%"
copy "%SOURCE_DIR_LUA%\%LUA_NAME%" "%RELEASE_DIR_LUA%"
echo Files Copied!


endlocal

timeout /t 2


