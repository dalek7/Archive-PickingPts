# Microsoft Developer Studio Project File - Name="PickingPts" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=PickingPts - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "PickingPts.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "PickingPts.mak" CFG="PickingPts - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "PickingPts - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "PickingPts - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "PickingPts - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x412 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x412 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "PickingPts - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x412 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x412 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 cv.lib highgui.lib cvaux.lib cxcore.lib /nologo /subsystem:windows /debug /machine:I386 /out:"../bin/PickingPts.exe" /pdbtype:sept

!ENDIF 

# Begin Target

# Name "PickingPts - Win32 Release"
# Name "PickingPts - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\MainFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\PickingPts.cpp
# End Source File
# Begin Source File

SOURCE=.\PickingPts.rc
# End Source File
# Begin Source File

SOURCE=.\PickingPtsDoc.cpp
# End Source File
# Begin Source File

SOURCE=.\PickingPtsView.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\MainFrm.h
# End Source File
# Begin Source File

SOURCE=.\PickingPts.h
# End Source File
# Begin Source File

SOURCE=.\PickingPtsDoc.h
# End Source File
# Begin Source File

SOURCE=.\PickingPtsView.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\PickingPts.ico
# End Source File
# Begin Source File

SOURCE=.\res\PickingPts.rc2
# End Source File
# Begin Source File

SOURCE=.\res\PickingPtsDoc.ico
# End Source File
# Begin Source File

SOURCE=.\res\Toolbar.bmp
# End Source File
# End Group
# Begin Group "lib"

# PROP Default_Filter ""
# Begin Source File

SOURCE=..\lib\UI\CMDEdit.cpp
# End Source File
# Begin Source File

SOURCE=..\lib\UI\cmdedit.h
# End Source File
# Begin Source File

SOURCE=..\lib\DBG.h
# End Source File
# Begin Source File

SOURCE=..\lib\UI\ddStatic.cpp
# End Source File
# Begin Source File

SOURCE=..\lib\UI\ddStatic.h
# End Source File
# Begin Source File

SOURCE=..\lib\dhMat.cpp
# End Source File
# Begin Source File

SOURCE=..\lib\dhMat.h
# End Source File
# Begin Source File

SOURCE=..\lib\dhVector.cpp
# End Source File
# Begin Source File

SOURCE=..\lib\dhVector.h
# End Source File
# Begin Source File

SOURCE=..\lib\Elapsed.cpp
# End Source File
# Begin Source File

SOURCE=..\lib\Elapsed.h
# End Source File
# Begin Source File

SOURCE=..\lib\FileProc.cpp
# End Source File
# Begin Source File

SOURCE=..\lib\FileProc.h
# End Source File
# Begin Source File

SOURCE=..\lib\ImgMath.h
# End Source File
# Begin Source File

SOURCE=..\lib\MouseProc.cpp
# End Source File
# Begin Source File

SOURCE=..\lib\MouseProc.h
# End Source File
# Begin Source File

SOURCE=..\lib\PTRList.cpp
# End Source File
# Begin Source File

SOURCE=..\lib\PTRList.h
# End Source File
# Begin Source File

SOURCE=..\lib\vArray.h
# End Source File
# Begin Source File

SOURCE=..\lib\vParser.cpp
# End Source File
# Begin Source File

SOURCE=..\lib\vParser.h
# End Source File
# Begin Source File

SOURCE=..\lib\vString.cpp
# End Source File
# Begin Source File

SOURCE=..\lib\vString.h
# End Source File
# Begin Source File

SOURCE=..\lib\vToken.cpp
# End Source File
# Begin Source File

SOURCE=..\lib\vToken.h
# End Source File
# End Group
# Begin Group "CV"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\CVProc.cpp
# End Source File
# Begin Source File

SOURCE=.\CVProc.h
# End Source File
# Begin Source File

SOURCE=.\VWnd.cpp
# End Source File
# Begin Source File

SOURCE=.\VWnd.h
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
