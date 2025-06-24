# Amiga-Dev

This is a simple cross-development environment for Amiga-68k (AmigaOS 3.x)
under Windows. It consists of VBCC, VASM, VLINK and PosixLib.

Current build consists of:
- VBCC v0.9g
- VLink v0.16f
- VAsm v1.8i

## Installation

Install everything to "C:\amiga-dev\", add "C:\amiga-dev\bin\" to PATH, and
set the VBCC environment variable to "C:\amiga-dev\targets\m68k-amigaos".
Now you should be good to go.

## Credits

This package contains VBCC, VASM and VLINK, all developed by
Volker Barthelmann - see http://www.compilers.de/ for details.

It also contains libraries and header files from PosixLib for VBCC by
Frank Wille - see http://aminet.net/package/dev/c/vbcc_PosixLib for details.

The trivial build and packaging was done by Erik Faye-Lund, and supplied
only for convenience.

## Building next version by yourself

All was done following excellent guide found at Blitter Studio:
http://blitterstudio.com/setting-up-an-amiga-cross-compiler-windows/ and http://blitterstudio.com/setting-up-an-amiga-cross-compiler-windows-part-2/

## VBCC documentation

http://www.ibaug.de/vbcc/doc/vbcc.html

