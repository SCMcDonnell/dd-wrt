#
# Makefile for the BCM947xx specific kernel interface routines
# under Linux.
#

EXTRA_CFLAGS+=-I$(TOPDIR)/arch/mips/bcm947xx/include -DBCMDRIVER

O_TARGET        := bcm947xx.o

export-objs     := export.o gpio.o setup.o
obj-y		:= prom.o setup.o time.o sbmips.o gpio.o
obj-y		+= nvram.o nvram_linux.o sflash.o cfe_env.o
obj-y		+= sbutils.o bcmutils.o bcmsrom.o hndchipc.o
obj-$(CONFIG_PCI) += sbpci.o pcibios.o
obj-y 		+= export.o

include $(TOPDIR)/Rules.make
