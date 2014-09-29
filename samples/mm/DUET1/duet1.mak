#===================================================================
#
#   DUET1.MAK - Make file for Duet Player 1
#   Copyright  IBM Corporation 1992
#
#===================================================================
#===================================================================
# Include the file ibmsamp.inc which defines the various macros
# depending on the target specified.
#
# The following macros are defined in ibmsamp.inc:
#
#       OBJDIR   - Directory where object files are created
#       EXEDIR   - Directory where executable files are created
#       RC       - Resource compiler
#       RCFLAGS  - Resource compiler flags
#       LINK     - Linker
#       LFLAGS   - Linker flags
#       MTLIBS   - Multithreaded versions of the runtime libraries
#       MMLIBS   - Multimedia libraries
#===================================================================

!include ..\..\ibmsamp.inc

HEADERS = duet1.h
#-------------------------------------------------------------------
#
#   A list of all of the object files
#
#-------------------------------------------------------------------

OBJS = $(OBJDIR)\duet1.obj

ALL_IPF = duet1.ipf

#-------------------------------------------------------------------
#   This section lists all files to be built by the make.  The
#   makefile builds the executible as well as its associated help
#   file.
#-------------------------------------------------------------------
all: $(EXEDIR)\duet1.exe $(EXEDIR)\duet1.hlp

#-------------------------------------------------------------------
#   This section creates the command file used by the linker.  This
#   command file is recreated automatically every time you change
#   the object file list, linker flags, or library list.
#-------------------------------------------------------------------
#-------------------------------------------------------------------
#   Dependencies
#     This section lists all object files needed to be built for the
#     application, along with the files it is dependent upon (e.g.
#     its source and any header files).
#-------------------------------------------------------------------
$(OBJDIR)\duet1.res: duet1.rc $(HEADERS) duet1.ico duet1.dlg prodinfo.bmp
                $(RC) $(RCFLAGS) $(@B).rc $@
                @del prodinfo.bmp

$(EXEDIR)\duet1.hlp: $(ALL_IPF)

$(OBJDIR)\duet1.obj: duet1.c $(HEADERS)

prodinfo.bmp :
           copy ..\..\prodinfo.bmp $@

$(EXEDIR)\duet1.exe: $(OBJS) duet1.def $(OBJDIR)\duet1.res
   -$(CREATE_PATH)
   $(LINK) $@ duet1.def $(MTLIBS) $(MMLIBS)  @<<$(OBJDIR)\duet1.lnk
$(OBJS)
<<
   $(RC) -p -x $(OBJDIR)\$(@B).res $@

clean :
        @if exist *.obj del *.obj
        @if exist *.dll del *.dll
        @if exist *.exe del *.exe
