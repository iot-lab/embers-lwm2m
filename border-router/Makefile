all: border-router

include ../Makefile.config


PROJECT_SOURCEFILES += slip-bridge.c

WITH_WEBSERVER=1

ifeq ($(WITH_WEBSERVER),1)
CFLAGS += -DUIP_CONF_TCP=1
CFLAGS += -DWEBSERVER=1
PROJECT_SOURCEFILES += httpd-simple.c
endif

include $(CONTIKI)/Makefile.include
