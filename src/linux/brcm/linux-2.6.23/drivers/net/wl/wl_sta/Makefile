#
# Makefile for the Broadcom wl driver
#
# Copyright (C) 2008, Broadcom Corporation
# All Rights Reserved.
# 
# THIS SOFTWARE IS OFFERED "AS IS", AND BROADCOM GRANTS NO WARRANTIES OF ANY
# KIND, EXPRESS OR IMPLIED, BY STATUTE, COMMUNICATION OR OTHERWISE. BROADCOM
# SPECIFICALLY DISCLAIMS ANY IMPLIED WARRANTIES OF MERCHANTABILITY, FITNESS
# FOR A SPECIFIC PURPOSE OR NONINFRINGEMENT CONCERNING THIS SOFTWARE.
#
# $Id: Makefile,v 1.2 2007/11/17 01:37:40 Exp $
#

SRCBASE := ../../../../brcm
EXTRA_CFLAGS+=-I$(TOPDIR)/brcm/include 

ifeq ($(CONFIG_WL_STA),)
CONFIG_WL_STA := "wlconfig_lx_router_sta"
endif
CONFIG_WL_CONF = $(CONFIG_WL_STA)

wl_suffix := sta

TARGET := wl_$(wl_suffix)
WLCONF_H := ../wlconf.h
WLCONF_O := ../wlconf.o

ifneq ($(KERNELRELEASE),)
# kbuild part of makefile
include $(src)/../wl_generic.mk
else
# Normal makefile
KERNELDIR := $(SRCBASE)/linux/linux-2.6
all:
	$(MAKE) -C $(KERNELDIR) M=`pwd`
clean:
	$(MAKE) -C $(KERNELDIR) M=`pwd` clean
include ../wl_generic.mk
endif
