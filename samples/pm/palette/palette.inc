#旼컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴커
#�                                                                          �
#� PROGRAM NAME: PALETTE                                                    �
#�  A PM program demonstrating vector fonts, palette manager APIs, and IPF  �
#�  help.                                                                   �
#�                                                                          �
#� COPYRIGHT:                                                               �
#� ----------                                                               �
#�  Copyright (C) International Business Machines Corp., 1992               �
#�                                                                          �
#� DISCLAIMER OF WARRANTIES:                                                �
#� -------------------------                                                �
#�  The following [enclosed] code is sample code created by IBM Corporation.�
#�  This sample code is not part of any standard IBM product and is provided�
#�  to you solely for the purpose of assisting you in the development of    �
#�  your applications.  The code is provided "AS IS", without warranty of   �
#�  any kind.  IBM shall not be liable for any damages arising out of your  �
#�  use of the sample code, even if they have been advised of the           �
#�  possibility of such damages.                                            �
#�                                                                          �
#� For details on what this program does etc., please see the PALETTE.C     �
#� file.                                                                    �
#�                                                                          납
#� Assumed INCLUDE environment variable path:                               �
#�   C:\TOOLKT20\C\OS2H;                                                    �
#�   C:\TOOLKT20\MASM\OS2INC;                                               �
#�   C:\IBMC\INCLUDE;                                                       �
#�   C:\CI\STD;                                                             �
#�                                                                          납
#읕컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴켸



PALETTE.RES:  PALETTE.RC  \
#  {.;$(INCLUDE)}OS2.H  \
   {.;$(INCLUDE)}PALETTE.H  \
   PALETTE.ICO  \
   PALETTE.H  \
   PALETTE.MAK

PALETTE.HLP:  PALETTE.IPF  \
   PALETTE.MAK

PALETTE.OBJ:  PALETTE.C  \
#  {$(INCLUDE);}os2.h  \
#  {$(INCLUDE);}string.h  \
#  {$(INCLUDE);}stdlib.h  \
#  {$(INCLUDE);}stdio.h  \
#  {$(INCLUDE);}stdarg.h  \
   {.;$(INCLUDE);}palette.h  \
   PALETTE.MAK
