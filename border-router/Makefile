CONTIKI_PROJECT=border-router
all: $(CONTIKI_PROJECT) 

include ../Makefile.config

MODULES += core/net/mac/tsch

CFLAGS += -DPROJECT_CONF_H=\"project-conf.h\"

#linker optimizations
SMALL=1

PROJECT_SOURCEFILES += slip-bridge.c

WITH_WEBSERVER=1

ifeq ($(WITH_WEBSERVER),1)
CFLAGS += -DUIP_CONF_TCP=1
CFLAGS += -DWEBSERVER=1
PROJECT_SOURCEFILES += httpd-simple.c
endif

CONTIKI_WITH_IPV6 = 1
include $(CONTIKI)/Makefile.include
