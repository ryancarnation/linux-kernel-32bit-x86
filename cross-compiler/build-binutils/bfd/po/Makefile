# Makefile for program source directory in GNU NLS utilities package.
# Copyright (C) 1995, 1996, 1997 by Ulrich Drepper <drepper@gnu.ai.mit.edu>
# Copyright (C) 2001-2025 Free Software Foundation, Inc.
#
# This file may be copied and used freely without restrictions.  It can
# be used in projects which are not available under the GNU Public License
# but which still want to provide support for the GNU gettext functionality.
# Please note that the actual code is *not* freely available.

PACKAGE = bfd
VERSION = 2.44

SHELL = /bin/sh


srcdir = ../../../src/binutils-2.44/bfd/po
top_srcdir = ../../../src/binutils-2.44/bfd
VPATH = ../../../src/binutils-2.44/bfd/po
top_builddir = ..

prefix = /home/rcarnation/opt/cross
exec_prefix = ${prefix}
datadir = ${datarootdir}
localedir = ${datarootdir}/locale
gnulocaledir = ${prefix}/share/locale
gettextsrcdir = ${prefix}/share/gettext/po
subdir = po

DESTDIR =

INSTALL = /usr/bin/install -c
INSTALL_DATA = /usr/bin/install -c -m 644
MKINSTALLDIRS = $(top_builddir)/../../src/binutils-2.44/bfd/../mkinstalldirs

CC = gcc
GENCAT = 
GMSGFMT = PATH=../src:$$PATH :
MSGFMT = :
XGETTEXT = PATH=../src:$$PATH :
MSGMERGE = PATH=../src:$$PATH msgmerge

DEFS = -DHAVE_CONFIG_H
CFLAGS = -g -O2    
CPPFLAGS = 

INCLUDES = -I.. -I$(top_srcdir)/intl

COMPILE = $(CC) -c $(DEFS) $(INCLUDES) $(CPPFLAGS) $(CFLAGS) $(XCFLAGS)

SOURCES = cat-id-tbl.c
POFILES =  $(srcdir)/da.po $(srcdir)/es.po $(srcdir)/fi.po $(srcdir)/fr.po $(srcdir)/hr.po $(srcdir)/id.po $(srcdir)/ja.po $(srcdir)/ro.po $(srcdir)/ru.po $(srcdir)/rw.po $(srcdir)/sr.po $(srcdir)/sv.po $(srcdir)/tr.po $(srcdir)/uk.po $(srcdir)/vi.po $(srcdir)/zh_CN.po $(srcdir)/pt.po
GMOFILES =  $(srcdir)/da.gmo $(srcdir)/es.gmo $(srcdir)/fi.gmo $(srcdir)/fr.gmo $(srcdir)/hr.gmo $(srcdir)/id.gmo $(srcdir)/ja.gmo $(srcdir)/ro.gmo $(srcdir)/ru.gmo $(srcdir)/rw.gmo $(srcdir)/sr.gmo $(srcdir)/sv.gmo $(srcdir)/tr.gmo $(srcdir)/uk.gmo $(srcdir)/vi.gmo $(srcdir)/zh_CN.gmo $(srcdir)/pt.gmo
DISTFILES = ChangeLog Makefile.in.in SRC-POTFILES.in BLD-POTFILES.in $(PACKAGE).pot \
stamp-cat-id $(POFILES) $(GMOFILES) $(SOURCES)

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of source dir POTFILES.
SRC-POTFILES = \
	../../../src/binutils-2.44/bfd/aix5ppc-core.c \
	../../../src/binutils-2.44/bfd/aout-cris.c \
	../../../src/binutils-2.44/bfd/aout-ns32k.c \
	../../../src/binutils-2.44/bfd/aout-target.h \
	../../../src/binutils-2.44/bfd/aout32.c \
	../../../src/binutils-2.44/bfd/aout64.c \
	../../../src/binutils-2.44/bfd/aoutx.h \
	../../../src/binutils-2.44/bfd/arc-got.h \
	../../../src/binutils-2.44/bfd/arc-plt.h \
	../../../src/binutils-2.44/bfd/archive.c \
	../../../src/binutils-2.44/bfd/archive64.c \
	../../../src/binutils-2.44/bfd/archures.c \
	../../../src/binutils-2.44/bfd/bfd.c \
	../../../src/binutils-2.44/bfd/bfdio.c \
	../../../src/binutils-2.44/bfd/binary.c \
	../../../src/binutils-2.44/bfd/cache.c \
	../../../src/binutils-2.44/bfd/cf-i386lynx.c \
	../../../src/binutils-2.44/bfd/cisco-core.c \
	../../../src/binutils-2.44/bfd/coff-alpha.c \
	../../../src/binutils-2.44/bfd/coff-arm.h \
	../../../src/binutils-2.44/bfd/coff-bfd.c \
	../../../src/binutils-2.44/bfd/coff-bfd.h \
	../../../src/binutils-2.44/bfd/coff-go32.c \
	../../../src/binutils-2.44/bfd/coff-i386.c \
	../../../src/binutils-2.44/bfd/coff-mips.c \
	../../../src/binutils-2.44/bfd/coff-rs6000.c \
	../../../src/binutils-2.44/bfd/coff-sh.c \
	../../../src/binutils-2.44/bfd/coff-stgo32.c \
	../../../src/binutils-2.44/bfd/coff-tic30.c \
	../../../src/binutils-2.44/bfd/coff-tic4x.c \
	../../../src/binutils-2.44/bfd/coff-tic54x.c \
	../../../src/binutils-2.44/bfd/coff-x86_64.c \
	../../../src/binutils-2.44/bfd/coff-z80.c \
	../../../src/binutils-2.44/bfd/coff-z8k.c \
	../../../src/binutils-2.44/bfd/coff64-rs6000.c \
	../../../src/binutils-2.44/bfd/coffcode.h \
	../../../src/binutils-2.44/bfd/coffgen.c \
	../../../src/binutils-2.44/bfd/cofflink.c \
	../../../src/binutils-2.44/bfd/coffswap.h \
	../../../src/binutils-2.44/bfd/compress.c \
	../../../src/binutils-2.44/bfd/corefile.c \
	../../../src/binutils-2.44/bfd/cpu-aarch64.c \
	../../../src/binutils-2.44/bfd/cpu-aarch64.h \
	../../../src/binutils-2.44/bfd/cpu-alpha.c \
	../../../src/binutils-2.44/bfd/cpu-amdgcn.c \
	../../../src/binutils-2.44/bfd/cpu-arc.c \
	../../../src/binutils-2.44/bfd/cpu-arm.c \
	../../../src/binutils-2.44/bfd/cpu-arm.h \
	../../../src/binutils-2.44/bfd/cpu-avr.c \
	../../../src/binutils-2.44/bfd/cpu-bfin.c \
	../../../src/binutils-2.44/bfd/cpu-bpf.c \
	../../../src/binutils-2.44/bfd/cpu-cr16.c \
	../../../src/binutils-2.44/bfd/cpu-cris.c \
	../../../src/binutils-2.44/bfd/cpu-crx.c \
	../../../src/binutils-2.44/bfd/cpu-csky.c \
	../../../src/binutils-2.44/bfd/cpu-d10v.c \
	../../../src/binutils-2.44/bfd/cpu-d30v.c \
	../../../src/binutils-2.44/bfd/cpu-dlx.c \
	../../../src/binutils-2.44/bfd/cpu-epiphany.c \
	../../../src/binutils-2.44/bfd/cpu-fr30.c \
	../../../src/binutils-2.44/bfd/cpu-frv.c \
	../../../src/binutils-2.44/bfd/cpu-ft32.c \
	../../../src/binutils-2.44/bfd/cpu-h8300.c \
	../../../src/binutils-2.44/bfd/cpu-h8300.h \
	../../../src/binutils-2.44/bfd/cpu-hppa.c \
	../../../src/binutils-2.44/bfd/cpu-i386.c \
	../../../src/binutils-2.44/bfd/cpu-ia64.c \
	../../../src/binutils-2.44/bfd/cpu-iamcu.c \
	../../../src/binutils-2.44/bfd/cpu-ip2k.c \
	../../../src/binutils-2.44/bfd/cpu-iq2000.c \
	../../../src/binutils-2.44/bfd/cpu-kvx.c \
	../../../src/binutils-2.44/bfd/cpu-lm32.c \
	../../../src/binutils-2.44/bfd/cpu-loongarch.c \
	../../../src/binutils-2.44/bfd/cpu-m10200.c \
	../../../src/binutils-2.44/bfd/cpu-m10300.c \
	../../../src/binutils-2.44/bfd/cpu-m32c.c \
	../../../src/binutils-2.44/bfd/cpu-m32r.c \
	../../../src/binutils-2.44/bfd/cpu-m68hc11.c \
	../../../src/binutils-2.44/bfd/cpu-m68hc12.c \
	../../../src/binutils-2.44/bfd/cpu-m68k.c \
	../../../src/binutils-2.44/bfd/cpu-m68k.h \
	../../../src/binutils-2.44/bfd/cpu-m9s12x.c \
	../../../src/binutils-2.44/bfd/cpu-m9s12xg.c \
	../../../src/binutils-2.44/bfd/cpu-mcore.c \
	../../../src/binutils-2.44/bfd/cpu-mep.c \
	../../../src/binutils-2.44/bfd/cpu-metag.c \
	../../../src/binutils-2.44/bfd/cpu-microblaze.c \
	../../../src/binutils-2.44/bfd/cpu-mips.c \
	../../../src/binutils-2.44/bfd/cpu-mmix.c \
	../../../src/binutils-2.44/bfd/cpu-moxie.c \
	../../../src/binutils-2.44/bfd/cpu-msp430.c \
	../../../src/binutils-2.44/bfd/cpu-mt.c \
	../../../src/binutils-2.44/bfd/cpu-nds32.c \
	../../../src/binutils-2.44/bfd/cpu-nfp.c \
	../../../src/binutils-2.44/bfd/cpu-ns32k.c \
	../../../src/binutils-2.44/bfd/cpu-or1k.c \
	../../../src/binutils-2.44/bfd/cpu-pdp11.c \
	../../../src/binutils-2.44/bfd/cpu-pj.c \
	../../../src/binutils-2.44/bfd/cpu-powerpc.c \
	../../../src/binutils-2.44/bfd/cpu-pru.c \
	../../../src/binutils-2.44/bfd/cpu-riscv.c \
	../../../src/binutils-2.44/bfd/cpu-riscv.h \
	../../../src/binutils-2.44/bfd/cpu-rl78.c \
	../../../src/binutils-2.44/bfd/cpu-rs6000.c \
	../../../src/binutils-2.44/bfd/cpu-rx.c \
	../../../src/binutils-2.44/bfd/cpu-s12z.c \
	../../../src/binutils-2.44/bfd/cpu-s390.c \
	../../../src/binutils-2.44/bfd/cpu-score.c \
	../../../src/binutils-2.44/bfd/cpu-sh.c \
	../../../src/binutils-2.44/bfd/cpu-sparc.c \
	../../../src/binutils-2.44/bfd/cpu-spu.c \
	../../../src/binutils-2.44/bfd/cpu-tic30.c \
	../../../src/binutils-2.44/bfd/cpu-tic4x.c \
	../../../src/binutils-2.44/bfd/cpu-tic54x.c \
	../../../src/binutils-2.44/bfd/cpu-tic6x.c \
	../../../src/binutils-2.44/bfd/cpu-tilegx.c \
	../../../src/binutils-2.44/bfd/cpu-tilepro.c \
	../../../src/binutils-2.44/bfd/cpu-v850.c \
	../../../src/binutils-2.44/bfd/cpu-v850_rh850.c \
	../../../src/binutils-2.44/bfd/cpu-vax.c \
	../../../src/binutils-2.44/bfd/cpu-visium.c \
	../../../src/binutils-2.44/bfd/cpu-wasm32.c \
	../../../src/binutils-2.44/bfd/cpu-xgate.c \
	../../../src/binutils-2.44/bfd/cpu-xstormy16.c \
	../../../src/binutils-2.44/bfd/cpu-xtensa.c \
	../../../src/binutils-2.44/bfd/cpu-z80.c \
	../../../src/binutils-2.44/bfd/cpu-z8k.c \
	../../../src/binutils-2.44/bfd/dwarf1.c \
	../../../src/binutils-2.44/bfd/dwarf2.c \
	../../../src/binutils-2.44/bfd/ecoff-bfd.h \
	../../../src/binutils-2.44/bfd/ecoff.c \
	../../../src/binutils-2.44/bfd/ecofflink.c \
	../../../src/binutils-2.44/bfd/ecoffswap.h \
	../../../src/binutils-2.44/bfd/elf-attrs.c \
	../../../src/binutils-2.44/bfd/elf-bfd.h \
	../../../src/binutils-2.44/bfd/elf-eh-frame.c \
	../../../src/binutils-2.44/bfd/elf-hppa.h \
	../../../src/binutils-2.44/bfd/elf-ifunc.c \
	../../../src/binutils-2.44/bfd/elf-linker-x86.h \
	../../../src/binutils-2.44/bfd/elf-linux-core.h \
	../../../src/binutils-2.44/bfd/elf-m10200.c \
	../../../src/binutils-2.44/bfd/elf-m10300.c \
	../../../src/binutils-2.44/bfd/elf-nacl.c \
	../../../src/binutils-2.44/bfd/elf-nacl.h \
	../../../src/binutils-2.44/bfd/elf-properties.c \
	../../../src/binutils-2.44/bfd/elf-s390.h \
	../../../src/binutils-2.44/bfd/elf-sframe.c \
	../../../src/binutils-2.44/bfd/elf-strtab.c \
	../../../src/binutils-2.44/bfd/elf-vxworks.c \
	../../../src/binutils-2.44/bfd/elf-vxworks.h \
	../../../src/binutils-2.44/bfd/elf.c \
	../../../src/binutils-2.44/bfd/elf32-am33lin.c \
	../../../src/binutils-2.44/bfd/elf32-arc.c \
	../../../src/binutils-2.44/bfd/elf32-arm.c \
	../../../src/binutils-2.44/bfd/elf32-arm.h \
	../../../src/binutils-2.44/bfd/elf32-avr.c \
	../../../src/binutils-2.44/bfd/elf32-avr.h \
	../../../src/binutils-2.44/bfd/elf32-bfin.c \
	../../../src/binutils-2.44/bfd/elf32-bfin.h \
	../../../src/binutils-2.44/bfd/elf32-cr16.c \
	../../../src/binutils-2.44/bfd/elf32-cr16.h \
	../../../src/binutils-2.44/bfd/elf32-cris.c \
	../../../src/binutils-2.44/bfd/elf32-crx.c \
	../../../src/binutils-2.44/bfd/elf32-csky.c \
	../../../src/binutils-2.44/bfd/elf32-csky.h \
	../../../src/binutils-2.44/bfd/elf32-d10v.c \
	../../../src/binutils-2.44/bfd/elf32-d30v.c \
	../../../src/binutils-2.44/bfd/elf32-dlx.c \
	../../../src/binutils-2.44/bfd/elf32-dlx.h \
	../../../src/binutils-2.44/bfd/elf32-epiphany.c \
	../../../src/binutils-2.44/bfd/elf32-fr30.c \
	../../../src/binutils-2.44/bfd/elf32-frv.c \
	../../../src/binutils-2.44/bfd/elf32-ft32.c \
	../../../src/binutils-2.44/bfd/elf32-gen.c \
	../../../src/binutils-2.44/bfd/elf32-h8300.c \
	../../../src/binutils-2.44/bfd/elf32-hppa.c \
	../../../src/binutils-2.44/bfd/elf32-hppa.h \
	../../../src/binutils-2.44/bfd/elf32-i386.c \
	../../../src/binutils-2.44/bfd/elf32-ip2k.c \
	../../../src/binutils-2.44/bfd/elf32-iq2000.c \
	../../../src/binutils-2.44/bfd/elf32-lm32.c \
	../../../src/binutils-2.44/bfd/elf32-m32c.c \
	../../../src/binutils-2.44/bfd/elf32-m32r.c \
	../../../src/binutils-2.44/bfd/elf32-m68hc11.c \
	../../../src/binutils-2.44/bfd/elf32-m68hc12.c \
	../../../src/binutils-2.44/bfd/elf32-m68hc1x.c \
	../../../src/binutils-2.44/bfd/elf32-m68hc1x.h \
	../../../src/binutils-2.44/bfd/elf32-m68k.c \
	../../../src/binutils-2.44/bfd/elf32-m68k.h \
	../../../src/binutils-2.44/bfd/elf32-mcore.c \
	../../../src/binutils-2.44/bfd/elf32-mep.c \
	../../../src/binutils-2.44/bfd/elf32-metag.c \
	../../../src/binutils-2.44/bfd/elf32-metag.h \
	../../../src/binutils-2.44/bfd/elf32-microblaze.c \
	../../../src/binutils-2.44/bfd/elf32-mips.c \
	../../../src/binutils-2.44/bfd/elf32-moxie.c \
	../../../src/binutils-2.44/bfd/elf32-msp430.c \
	../../../src/binutils-2.44/bfd/elf32-mt.c \
	../../../src/binutils-2.44/bfd/elf32-nds32.c \
	../../../src/binutils-2.44/bfd/elf32-nds32.h \
	../../../src/binutils-2.44/bfd/elf32-or1k.c \
	../../../src/binutils-2.44/bfd/elf32-pj.c \
	../../../src/binutils-2.44/bfd/elf32-ppc.c \
	../../../src/binutils-2.44/bfd/elf32-ppc.h \
	../../../src/binutils-2.44/bfd/elf32-pru.c \
	../../../src/binutils-2.44/bfd/elf32-rl78.c \
	../../../src/binutils-2.44/bfd/elf32-rx.c \
	../../../src/binutils-2.44/bfd/elf32-rx.h \
	../../../src/binutils-2.44/bfd/elf32-s12z.c \
	../../../src/binutils-2.44/bfd/elf32-s390.c \
	../../../src/binutils-2.44/bfd/elf32-score.c \
	../../../src/binutils-2.44/bfd/elf32-score.h \
	../../../src/binutils-2.44/bfd/elf32-score7.c \
	../../../src/binutils-2.44/bfd/elf32-sh-relocs.h \
	../../../src/binutils-2.44/bfd/elf32-sh.c \
	../../../src/binutils-2.44/bfd/elf32-sparc.c \
	../../../src/binutils-2.44/bfd/elf32-spu.c \
	../../../src/binutils-2.44/bfd/elf32-spu.h \
	../../../src/binutils-2.44/bfd/elf32-tic6x.c \
	../../../src/binutils-2.44/bfd/elf32-tic6x.h \
	../../../src/binutils-2.44/bfd/elf32-tilegx.c \
	../../../src/binutils-2.44/bfd/elf32-tilegx.h \
	../../../src/binutils-2.44/bfd/elf32-tilepro.c \
	../../../src/binutils-2.44/bfd/elf32-tilepro.h \
	../../../src/binutils-2.44/bfd/elf32-v850.c \
	../../../src/binutils-2.44/bfd/elf32-v850.h \
	../../../src/binutils-2.44/bfd/elf32-vax.c \
	../../../src/binutils-2.44/bfd/elf32-visium.c \
	../../../src/binutils-2.44/bfd/elf32-wasm32.c \
	../../../src/binutils-2.44/bfd/elf32-xgate.c \
	../../../src/binutils-2.44/bfd/elf32-xstormy16.c \
	../../../src/binutils-2.44/bfd/elf32-xtensa.c \
	../../../src/binutils-2.44/bfd/elf32-z80.c \
	../../../src/binutils-2.44/bfd/elf32.c \
	../../../src/binutils-2.44/bfd/elf64-alpha.c \
	../../../src/binutils-2.44/bfd/elf64-amdgcn.c \
	../../../src/binutils-2.44/bfd/elf64-bpf.c \
	../../../src/binutils-2.44/bfd/elf64-gen.c \
	../../../src/binutils-2.44/bfd/elf64-hppa.c \
	../../../src/binutils-2.44/bfd/elf64-hppa.h \
	../../../src/binutils-2.44/bfd/elf64-ia64-vms.c \
	../../../src/binutils-2.44/bfd/elf64-mips.c \
	../../../src/binutils-2.44/bfd/elf64-mmix.c \
	../../../src/binutils-2.44/bfd/elf64-nfp.c \
	../../../src/binutils-2.44/bfd/elf64-ppc.c \
	../../../src/binutils-2.44/bfd/elf64-ppc.h \
	../../../src/binutils-2.44/bfd/elf64-s390.c \
	../../../src/binutils-2.44/bfd/elf64-sparc.c \
	../../../src/binutils-2.44/bfd/elf64-tilegx.c \
	../../../src/binutils-2.44/bfd/elf64-tilegx.h \
	../../../src/binutils-2.44/bfd/elf64-x86-64.c \
	../../../src/binutils-2.44/bfd/elf64.c \
	../../../src/binutils-2.44/bfd/elfcode.h \
	../../../src/binutils-2.44/bfd/elfcore.h \
	../../../src/binutils-2.44/bfd/elflink.c \
	../../../src/binutils-2.44/bfd/elfn32-mips.c \
	../../../src/binutils-2.44/bfd/elfxx-aarch64.c \
	../../../src/binutils-2.44/bfd/elfxx-aarch64.h \
	../../../src/binutils-2.44/bfd/elfxx-ia64.c \
	../../../src/binutils-2.44/bfd/elfxx-ia64.h \
	../../../src/binutils-2.44/bfd/elfxx-kvx.c \
	../../../src/binutils-2.44/bfd/elfxx-loongarch.c \
	../../../src/binutils-2.44/bfd/elfxx-loongarch.h \
	../../../src/binutils-2.44/bfd/elfxx-mips.c \
	../../../src/binutils-2.44/bfd/elfxx-mips.h \
	../../../src/binutils-2.44/bfd/elfxx-riscv.c \
	../../../src/binutils-2.44/bfd/elfxx-riscv.h \
	../../../src/binutils-2.44/bfd/elfxx-sparc.c \
	../../../src/binutils-2.44/bfd/elfxx-sparc.h \
	../../../src/binutils-2.44/bfd/elfxx-tilegx.c \
	../../../src/binutils-2.44/bfd/elfxx-tilegx.h \
	../../../src/binutils-2.44/bfd/elfxx-x86.c \
	../../../src/binutils-2.44/bfd/elfxx-x86.h \
	../../../src/binutils-2.44/bfd/format.c \
	../../../src/binutils-2.44/bfd/genlink.h \
	../../../src/binutils-2.44/bfd/go32stub.h \
	../../../src/binutils-2.44/bfd/hash.c \
	../../../src/binutils-2.44/bfd/hpux-core.c \
	../../../src/binutils-2.44/bfd/i386aout.c \
	../../../src/binutils-2.44/bfd/i386bsd.c \
	../../../src/binutils-2.44/bfd/i386lynx.c \
	../../../src/binutils-2.44/bfd/i386msdos.c \
	../../../src/binutils-2.44/bfd/ihex.c \
	../../../src/binutils-2.44/bfd/irix-core.c \
	../../../src/binutils-2.44/bfd/libaout.h \
	../../../src/binutils-2.44/bfd/libbfd.c \
	../../../src/binutils-2.44/bfd/libbfd.h \
	../../../src/binutils-2.44/bfd/libcoff.h \
	../../../src/binutils-2.44/bfd/libecoff.h \
	../../../src/binutils-2.44/bfd/libhppa.h \
	../../../src/binutils-2.44/bfd/libpei.h \
	../../../src/binutils-2.44/bfd/libxcoff.h \
	../../../src/binutils-2.44/bfd/linker.c \
	../../../src/binutils-2.44/bfd/lynx-core.c \
	../../../src/binutils-2.44/bfd/mach-o-aarch64.c \
	../../../src/binutils-2.44/bfd/mach-o-arm.c \
	../../../src/binutils-2.44/bfd/mach-o-i386.c \
	../../../src/binutils-2.44/bfd/mach-o-x86-64.c \
	../../../src/binutils-2.44/bfd/mach-o.c \
	../../../src/binutils-2.44/bfd/mach-o.h \
	../../../src/binutils-2.44/bfd/merge.c \
	../../../src/binutils-2.44/bfd/mmo.c \
	../../../src/binutils-2.44/bfd/netbsd-core.c \
	../../../src/binutils-2.44/bfd/netbsd.h \
	../../../src/binutils-2.44/bfd/ns32k.h \
	../../../src/binutils-2.44/bfd/ns32knetbsd.c \
	../../../src/binutils-2.44/bfd/opncls.c \
	../../../src/binutils-2.44/bfd/osf-core.c \
	../../../src/binutils-2.44/bfd/pc532-mach.c \
	../../../src/binutils-2.44/bfd/pdb.c \
	../../../src/binutils-2.44/bfd/pdp11.c \
	../../../src/binutils-2.44/bfd/pe-aarch64.c \
	../../../src/binutils-2.44/bfd/pe-arm-wince.c \
	../../../src/binutils-2.44/bfd/pe-arm.c \
	../../../src/binutils-2.44/bfd/pe-i386.c \
	../../../src/binutils-2.44/bfd/pe-mcore.c \
	../../../src/binutils-2.44/bfd/pe-sh.c \
	../../../src/binutils-2.44/bfd/pe-x86_64.c \
	../../../src/binutils-2.44/bfd/pef-traceback.h \
	../../../src/binutils-2.44/bfd/pef.c \
	../../../src/binutils-2.44/bfd/pef.h \
	../../../src/binutils-2.44/bfd/pei-aarch64.c \
	../../../src/binutils-2.44/bfd/pei-arm-wince.c \
	../../../src/binutils-2.44/bfd/pei-arm.c \
	../../../src/binutils-2.44/bfd/pei-i386.c \
	../../../src/binutils-2.44/bfd/pei-ia64.c \
	../../../src/binutils-2.44/bfd/pei-loongarch64.c \
	../../../src/binutils-2.44/bfd/pei-mcore.c \
	../../../src/binutils-2.44/bfd/pei-riscv64.c \
	../../../src/binutils-2.44/bfd/pei-sh.c \
	../../../src/binutils-2.44/bfd/pei-x86_64.c \
	../../../src/binutils-2.44/bfd/peicode.h \
	../../../src/binutils-2.44/bfd/plugin.c \
	../../../src/binutils-2.44/bfd/plugin.h \
	../../../src/binutils-2.44/bfd/ppcboot.c \
	../../../src/binutils-2.44/bfd/reloc.c \
	../../../src/binutils-2.44/bfd/reloc16.c \
	../../../src/binutils-2.44/bfd/rs6000-core.c \
	../../../src/binutils-2.44/bfd/section.c \
	../../../src/binutils-2.44/bfd/simple.c \
	../../../src/binutils-2.44/bfd/som.c \
	../../../src/binutils-2.44/bfd/som.h \
	../../../src/binutils-2.44/bfd/srec.c \
	../../../src/binutils-2.44/bfd/stab-syms.c \
	../../../src/binutils-2.44/bfd/stabs.c \
	../../../src/binutils-2.44/bfd/syms.c \
	../../../src/binutils-2.44/bfd/sysdep.h \
	../../../src/binutils-2.44/bfd/targets.c \
	../../../src/binutils-2.44/bfd/tekhex.c \
	../../../src/binutils-2.44/bfd/trad-core.c \
	../../../src/binutils-2.44/bfd/vax1knetbsd.c \
	../../../src/binutils-2.44/bfd/vaxnetbsd.c \
	../../../src/binutils-2.44/bfd/verilog.c \
	../../../src/binutils-2.44/bfd/version.h \
	../../../src/binutils-2.44/bfd/vms-alpha.c \
	../../../src/binutils-2.44/bfd/vms-lib.c \
	../../../src/binutils-2.44/bfd/vms-misc.c \
	../../../src/binutils-2.44/bfd/vms.h \
	../../../src/binutils-2.44/bfd/wasm-module.c \
	../../../src/binutils-2.44/bfd/wasm-module.h \
	../../../src/binutils-2.44/bfd/xcofflink.c \
	../../../src/binutils-2.44/bfd/xcofflink.h \
	../../../src/binutils-2.44/bfd/xsym.c \
	../../../src/binutils-2.44/bfd/xsym.h \
	../../../src/binutils-2.44/bfd/xtensa-dynconfig.c \
	../../../src/binutils-2.44/bfd/xtensa-isa.c \
	../../../src/binutils-2.44/bfd/xtensa-modules.c 

# Note - the following line gets processed by bfd/configure and amended
# to contain the full list of build dir POTFILES.
BLD-POTFILES = \
	../bfdver.h \
	../elf32-aarch64.c \
	../elf32-ia64.c \
	../elf32-kvx.c \
	../elf32-loongarch.c \
	../elf32-riscv.c \
	../elf32-target.h \
	../elf64-aarch64.c \
	../elf64-ia64.c \
	../elf64-kvx.c \
	../elf64-loongarch.c \
	../elf64-riscv.c \
	../elf64-target.h \
	../pe-aarch64igen.c \
	../pe-loongarch64igen.c \
	../pe-riscv64igen.c \
	../peigen.c \
	../pepigen.c \
	../pex64igen.c \
	../targmatch.h 

CATALOGS = 
CATOBJEXT = 
INSTOBJEXT = 

.SUFFIXES:
.SUFFIXES: .c .o .po .pox .gmo .mo .msg .cat

.c.o:
	$(COMPILE) $<

.po.pox:
	$(MAKE) $(PACKAGE).pot
	$(MSGMERGE) $< $(srcdir)/$(PACKAGE).pot -o $*.pox

.po.mo:
	$(MSGFMT) -o $@ $<

.po.gmo:
	file=`echo $* | sed 's,.*/,,'`.gmo \
	  && rm -f $$file && $(GMSGFMT) -o $$file $<

.po.cat:
	sed -f ../intl/po2msg.sed < $< > $*.msg \
	  && rm -f $@ && $(GENCAT) $@ $*.msg


all: all-no

all-yes: $(CATALOGS) # $(PACKAGE).pot
all-no:

$(srcdir)/$(PACKAGE).pot: $(SRC-POTFILES) $(BLD-POTFILES)
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=$(top_srcdir) \
	  --add-comments --keyword=_ --keyword=N_ \
	  --msgid-bugs-address=https://sourceware.org/bugzilla/ \
	  --files-from=$(srcdir)/SRC-POTFILES.in 
	$(XGETTEXT) --default-domain=$(PACKAGE) \
	  --directory=.. \
	  --directory=. \
	  --add-comments --keyword=_ --keyword=N_ \
	  --join-existing \
	  --msgid-bugs-address=https://sourceware.org/bugzilla/ \
	  --files-from=$(srcdir)/BLD-POTFILES.in
	sed -e '/^#:/s,$(top_srcdir)/,,g' < $(PACKAGE).po > $@-t
	mv -f $@-t $@

$(srcdir)/cat-id-tbl.c: stamp-cat-id; @:
$(srcdir)/stamp-cat-id: $(PACKAGE).pot
	rm -f cat-id-tbl.tmp
	sed -f ../intl/po2tbl.sed $(srcdir)/$(PACKAGE).pot \
		| sed -e "s/@PACKAGE NAME@/$(PACKAGE)/" > cat-id-tbl.tmp
	if cmp -s cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; then \
	  rm cat-id-tbl.tmp; \
	else \
	  echo cat-id-tbl.c changed; \
	  rm -f $(srcdir)/cat-id-tbl.c; \
	  mv cat-id-tbl.tmp $(srcdir)/cat-id-tbl.c; \
	fi
	cd $(srcdir) && rm -f stamp-cat-id && echo timestamp > stamp-cat-id


install: install-exec install-data
install-exec:
install-info:
install-html:
install-dvi:
install-pdf:
install-ps:
install-data: install-data-no
install-data-no: all
install-data-yes: all
	if test -r $(MKINSTALLDIRS); then \
	  $(MKINSTALLDIRS) $(DESTDIR)$(datadir); \
	else \
	  $(top_srcdir)/mkinstalldirs $(DESTDIR)$(datadir); \
	fi
	@catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  case "$$cat" in \
	    *.gmo) destdir=$(gnulocaledir);; \
	    *)     destdir=$(localedir);; \
	  esac; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  dir=$(DESTDIR)$$destdir/$$lang/LC_MESSAGES; \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $$dir; \
	  else \
	    $(top_srcdir)/mkinstalldirs $$dir; \
	  fi; \
	  if test -r $$cat; then \
	    $(INSTALL_DATA) $$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $$cat as $$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  else \
	    $(INSTALL_DATA) $(srcdir)/$$cat $$dir/$(PACKAGE)$(INSTOBJEXT); \
	    echo "installing $(srcdir)/$$cat as" \
		 "$$dir/$(PACKAGE)$(INSTOBJEXT)"; \
	  fi; \
	  if test -r $$cat.m; then \
	    $(INSTALL_DATA) $$cat.m $$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	    echo "installing $$cat.m as $$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	  else \
	    if test -r $(srcdir)/$$cat.m ; then \
	      $(INSTALL_DATA) $(srcdir)/$$cat.m \
		$$dir/$(PACKAGE)$(INSTOBJEXT).m; \
	      echo "installing $(srcdir)/$$cat as" \
		   "$$dir/$(PACKAGE)$(INSTOBJEXT).m"; \
	    else \
	      true; \
	    fi; \
	  fi; \
	done
	if test "$(PACKAGE)" = "gettext"; then \
	  if test -r $(MKINSTALLDIRS); then \
	    $(MKINSTALLDIRS) $(DESTDIR)$(gettextsrcdir); \
	  else \
	    $(top_srcdir)/mkinstalldirs $(DESTDIR)$(gettextsrcdir); \
	  fi; \
	  $(INSTALL_DATA) $(srcdir)/Makefile.in.in \
			  $(DESTDIR)$(gettextsrcdir)/Makefile.in.in; \
	else \
	  : ; \
	fi

# Define this as empty until I found a useful application.
installcheck:

uninstall:
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(localedir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT); \
	  rm -f $(DESTDIR)$(gnulocaledir)/$$lang/LC_MESSAGES/$(PACKAGE)$(INSTOBJEXT).m; \
	done
	rm -f $(DESTDIR)$(gettextsrcdir)/po-Makefile.in.in

check: all

cat-id-tbl.o: ../intl/libgettext.h

html dvi pdf ps info tags TAGS ID:

mostlyclean:
	rm -f core core.* *.pox $(PACKAGE).po *.old.po cat-id-tbl.tmp
	rm -fr *.o

clean: mostlyclean

distclean: clean
	rm -f Makefile Makefile.in *.mo *.msg *.cat *.cat.m
	rm -f SRC-POTFILES BLD-POTFILES 

maintainer-clean: distclean
	@echo "This command is intended for maintainers to use;"
	@echo "it deletes files that may require special tools to rebuild."
	rm -f $(GMOFILES) SRC-POTFILES.in BLD-POTFILES.in

distdir = ../$(PACKAGE)-$(VERSION)/$(subdir)
dist distdir: update-po $(DISTFILES)
	dists="$(DISTFILES)"; \
	for file in $$dists; do \
	  ln $(srcdir)/$$file $(distdir) 2> /dev/null \
	    || cp -p $(srcdir)/$$file $(distdir); \
	done

update-po: Makefile
	$(MAKE) $(PACKAGE).pot
	PATH=`pwd`/../src:$$PATH; \
	cd $(srcdir); \
	catalogs='$(CATALOGS)'; \
	for cat in $$catalogs; do \
	  cat=`basename $$cat`; \
	  lang=`echo $$cat | sed 's/\$(CATOBJEXT)$$//'`; \
	  mv $$lang.po $$lang.old.po; \
	  echo "$$lang:"; \
	  if $(MSGMERGE) $$lang.old.po $(PACKAGE).pot -o $$lang.po; then \
	    rm -f $$lang.old.po; \
	  else \
	    echo "msgmerge for $$cat failed!"; \
	    rm -f $$lang.po; \
	    mv $$lang.old.po $$lang.po; \
	  fi; \
	done

SRC-POTFILES: SRC-POTFILES.in
	( if test 'x$(srcdir)' != 'x.'; then \
	    posrcprefix='$(top_srcdir)/'; \
	  else \
	    posrcprefix="../"; \
	  fi; \
	  rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	$$posrcprefix& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

BLD-POTFILES: BLD-POTFILES.in
	  ( rm -f $@-t $@ \
	    && (sed -e '/^#/d' \
	            -e '/^[ 	]*$$/d' \
		    -e "s@.*@	../& \\\\@" < $(srcdir)/$@.in \
		| sed -e '$$s/\\$$//') > $@-t \
	    && chmod a-w $@-t \
	    && mv $@-t $@ )

SRC-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/SRC-POTFILES.in

BLD-POTFILES.in: # ../Makefile
	cd .. && $(MAKE) po/BLD-POTFILES.in

# Note - The presence of SRC-POTFILES and BLD-POTFILES as dependencies
# here breaks the implementation of the 'distclean' rule for maintainers.
# This is because if 'make distclean' is run in the BFD directory, the
# Makefile there will be deleted before 'distclean' is made here, and so
# the dependency SRC-POTFILES -> SRC-POTFILES.in -> ../Makefile cannot
# be satisfied.
#
# The SRC-POTFILES and BLD-POTFILES dependencies cannot be removed,
# however since it is necessary that these files be built during
# *configure* time, so that configure can insert them into the
# po/Makefile that it is creating, so that the Makefile will have
# the correct dependencies.
Makefile: Make-in ../config.status SRC-POTFILES BLD-POTFILES
	cd .. \
	  && CONFIG_FILES=$(subdir)/Makefile.in:$(subdir)/Make-in \
	     CONFIG_HEADERS= $(SHELL) ./config.status

# Tell versions [3.59,3.63) of GNU make not to export all variables.
# Otherwise a system limit (for SysV at least) may be exceeded.
.NOEXPORT:
