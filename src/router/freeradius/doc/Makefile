#
# Makefile
#
# Version:	$Id: aaf7675ac139ee0274dae8352fe60ccaf426dec8 $
#

include ../Make.inc

SUBDIRS		= examples rfc
WHAT_TO_MAKE	= all

RST_FILES := $(wildcard *.rst)

all:
	@$(MAKE) $(MFLAGS) WHAT_TO_MAKE=$@ common

clean:
	@$(MAKE) $(MFLAGS) WHAT_TO_MAKE=$@ common
	@rm -f *~

install:
	@if [ "$(docdir)" = no ]; then					\
		echo 'Documentation files will NOT be installed.';	\
	else								\
		$(INSTALL) -d -m 755 $(R)$(docdir);			\
		for file in *[!~]; do					\
			if [ -f $$file -a $$file != Makefile ]; then	\
				$(INSTALL) -m 644 $$file $(R)$(docdir);	\
			fi;						\
		done;							\
		$(MAKE) $(MFLAGS) WHAT_TO_MAKE=$@ common;		\
	fi

common: $(SUBDIRS)

$(SUBDIRS):
	@echo "Making $(WHAT_TO_MAKE) in $@..."
	@$(MAKE) $(MFLAGS) -C $@ $(WHAT_TO_MAKE)

.PHONY: all clean install common $(SUBDIRS)

%.html: %.rst
	@rst2html.py $^ > $@

.PHONY: html
html: $(RST_FILES:.rst=.html)

