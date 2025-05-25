@echo off
setlocal enabledelayedexpansion


:: DEFINE THESE 
:: Your built blueprint mod pak folder
set "SOURCE_DIR=%~dp0\..\Windows\OblivionRemastered\Content\Paks"
:: Your Oblivion LogicMods Directory base path
set "DEST_BASE_DIR=C:\Program Files (x86)\Steam\steamapps\common\Oblivion Remastered\OblivionRemastered\"
set "DEST_PAKS_DIR=%DEST_BASE_DIR%Content\Paks\LogicMods\"
:: Release base path
set "RELEASE_BASE_DIR=%~dp0\..\Release\"

:: Chunk name assignments
set "PAKNAME_CP=pakchunk279-Windows"
set "RENAME_CP=KwaConfigPanelBP_P"
set "PAKNAME_KN=pakchunk248-Windows"
set "RENAME_KN=KwaNotificationsBP_P"

:: New mod setup: ExampleMod_P
set "PAKNAME_EX=pakchunk38-Windows"
set "RENAME_EX=ExampleMod_P"

:: Lua Source Directories
set "SOURCE_DIR_LUA_KN=%~dp0\..\KwaNotifsFiles\"
set "SOURCE_DIR_LUA_CP=%~dp0\..\KwaConfigPanelFiles\"
set "SOURCE_DIR_LUA_IS=%~dp0\..\InitialSettingsPanelFiles\"

:: Lua File Names
set "LUA_NAME_MAIN=main.lua"
set "LUA_NAME_HELPERS=ConfigPanelHelpers.lua"

:: Lua Destination Directories (Install)
set "DEST_UE4SS_MODS=%DEST_BASE_DIR%Binaries\Win64\ue4ss\mods\"
set "DEST_DIR_LUA_KN=%DEST_UE4SS_MODS%KwaNotificationsLua\Scripts"
set "DEST_DIR_LUA_EX=%DEST_UE4SS_MODS%ExampleConfigModLua\Scripts"
set "DEST_DIR_LUA_SHARED=%DEST_UE4SS_MODS%shared\KwaHelpers"
set "DEST_DIR_LUA_IS=%DEST_UE4SS_MODS%InitialSettingsPanel\Scripts"

:: Lua Destination Directories (Release)
set "RELEASE_DIR_LUA_KN=%RELEASE_BASE_DIR%KwaNotificationsRelease\OblivionRemastered\Binaries\Win64\ue4ss\mods\KwaNotificationsLua\Scripts"
set "RELEASE_DIR_LUA_EX=%RELEASE_BASE_DIR%ExampleConfigModLua\OblivionRemastered\Binaries\Win64\ue4ss\mods\ExampleConfigModLua\Scripts"
set "RELEASE_DIR_LUA_SHARED=%RELEASE_BASE_DIR%KwaConfigPanelRelease\OblivionRemastered\Binaries\Win64\ue4ss\mods\shared\KwaHelpers"
set "RELEASE_DIR_LUA_IS=%RELEASE_BASE_DIR%InitialSettingsPanelRelease\OblivionRemastered\Binaries\Win64\ue4ss\mods\InitialSettingsPanel\Scripts"

:: Create LogicMods Directories (Install)
if not exist "%DEST_PAKS_DIR%%RENAME_CP%" (
    mkdir "%DEST_PAKS_DIR%%RENAME_CP%"
)
if not exist "%DEST_PAKS_DIR%%RENAME_KN%" (
    mkdir "%DEST_PAKS_DIR%%RENAME_KN%"
)
if not exist "%DEST_PAKS_DIR%%RENAME_EX%" (
    mkdir "%DEST_PAKS_DIR%%RENAME_EX%"
)

:: Copy Pak files to Install Directory
copy "%SOURCE_DIR%\%PAKNAME_CP%.pak" "%DEST_PAKS_DIR%%RENAME_CP%\%RENAME_CP%.pak"
copy "%SOURCE_DIR%\%PAKNAME_CP%.ucas" "%DEST_PAKS_DIR%%RENAME_CP%\%RENAME_CP%.ucas"
copy "%SOURCE_DIR%\%PAKNAME_CP%.utoc" "%DEST_PAKS_DIR%%RENAME_CP%\%RENAME_CP%.utoc"
copy "%SOURCE_DIR%\%PAKNAME_KN%.pak" "%DEST_PAKS_DIR%%RENAME_KN%\%RENAME_KN%.pak"
copy "%SOURCE_DIR%\%PAKNAME_KN%.ucas" "%DEST_PAKS_DIR%%RENAME_KN%\%RENAME_KN%.ucas"
copy "%SOURCE_DIR%\%PAKNAME_KN%.utoc" "%DEST_PAKS_DIR%%RENAME_KN%\%RENAME_KN%.utoc"
copy "%SOURCE_DIR%\%PAKNAME_EX%.pak" "%DEST_PAKS_DIR%%RENAME_EX%\%RENAME_EX%.pak"
copy "%SOURCE_DIR%\%PAKNAME_EX%.ucas" "%DEST_PAKS_DIR%%RENAME_EX%\%RENAME_EX%.ucas"
copy "%SOURCE_DIR%\%PAKNAME_EX%.utoc" "%DEST_PAKS_DIR%%RENAME_EX%\%RENAME_EX%.utoc"

:: Create Release Directories (LogicMods)
if not exist "%RELEASE_BASE_DIR%KwaNotificationsRelease\OblivionRemastered\Content\Paks\LogicMods\%RENAME_CP%" (
    mkdir "%RELEASE_BASE_DIR%KwaNotificationsRelease\OblivionRemastered\Content\Paks\LogicMods\%RENAME_CP%"
)
if not exist "%RELEASE_BASE_DIR%KwaConfigPanelRelease\OblivionRemastered\Content\Paks\LogicMods\%RENAME_KN%" (
    mkdir "%RELEASE_BASE_DIR%KwaConfigPanelRelease\OblivionRemastered\Content\Paks\LogicMods\%RENAME_KN%"
)

:: Copy Pak files to Release Directory
copy "%SOURCE_DIR%\%PAKNAME_CP%.pak" "%RELEASE_BASE_DIR%KwaNotificationsRelease\OblivionRemastered\Content\Paks\LogicMods\%RENAME_CP%\%RENAME_CP%.pak"
copy "%SOURCE_DIR%\%PAKNAME_CP%.ucas" "%RELEASE_BASE_DIR%KwaNotificationsRelease\OblivionRemastered\Content\Paks\LogicMods\%RENAME_CP%\%RENAME_CP%.ucas"
copy "%SOURCE_DIR%\%PAKNAME_CP%.utoc" "%RELEASE_BASE_DIR%KwaNotificationsRelease\OblivionRemastered\Content\Paks\LogicMods\%RENAME_CP%\%RENAME_CP%.utoc"
copy "%SOURCE_DIR%\%PAKNAME_KN%.pak" "%RELEASE_BASE_DIR%KwaConfigPanelRelease\OblivionRemastered\Content\Paks\LogicMods\%RENAME_KN%\%RENAME_KN%.pak"
copy "%SOURCE_DIR%\%PAKNAME_KN%.ucas" "%RELEASE_BASE_DIR%KwaConfigPanelRelease\OblivionRemastered\Content\Paks\LogicMods\%RENAME_KN%\%RENAME_KN%.ucas"
copy "%SOURCE_DIR%\%PAKNAME_KN%.utoc" "%RELEASE_BASE_DIR%KwaConfigPanelRelease\OblivionRemastered\Content\Paks\LogicMods\%RENAME_KN%\%RENAME_KN%.utoc"

:: Create Lua Directories (Install)
if not exist "%DEST_DIR_LUA_KN%" (
    mkdir "%DEST_DIR_LUA_KN%"
)
if not exist "%DEST_DIR_LUA_EX%" (
    mkdir "%DEST_DIR_LUA_EX%"
)
if not exist "%DEST_DIR_LUA_SHARED%" (
    mkdir "%DEST_DIR_LUA_SHARED%"
)
if not exist "%DEST_DIR_LUA_IS%" (
    mkdir "%DEST_DIR_LUA_IS%"
)

:: Create Lua Directories (Release)
if not exist "%RELEASE_DIR_LUA_KN%" (
    mkdir "%RELEASE_DIR_LUA_KN%"
)
if not exist "%RELEASE_DIR_LUA_EX%" (
    mkdir "%RELEASE_DIR_LUA_EX%"
)
if not exist "%RELEASE_DIR_LUA_SHARED%" (
    mkdir "%RELEASE_DIR_LUA_SHARED%"
)
if not exist "%RELEASE_DIR_LUA_IS%" (
    mkdir "%RELEASE_DIR_LUA_IS%"
)

:: Copy Lua Files to Install and Release Directories
copy "%SOURCE_DIR_LUA_KN%\%LUA_NAME_MAIN%" "%DEST_DIR_LUA_KN%"
copy "%SOURCE_DIR_LUA_KN%\%LUA_NAME_MAIN%" "%RELEASE_DIR_LUA_KN%"
copy "%SOURCE_DIR_LUA_CP%\%LUA_NAME_MAIN%" "%DEST_DIR_LUA_EX%"
copy "%SOURCE_DIR_LUA_CP%\%LUA_NAME_MAIN%" "%RELEASE_DIR_LUA_EX%"
copy "%SOURCE_DIR_LUA_CP%\%LUA_NAME_HELPERS%" "%DEST_DIR_LUA_SHARED%"
copy "%SOURCE_DIR_LUA_CP%\%LUA_NAME_HELPERS%" "%RELEASE_DIR_LUA_SHARED%"
copy "%SOURCE_DIR_LUA_IS%\%LUA_NAME_MAIN%" "%DEST_DIR_LUA_IS%"
copy "%SOURCE_DIR_LUA_IS%\%LUA_NAME_MAIN%" "%RELEASE_DIR_LUA_IS%"
echo Files Copied!


endlocal

timeout /t 2


