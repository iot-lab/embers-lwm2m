all: lwm2m-example-client

include ../Makefile.config


CONTIKI_SOURCEFILES += lwm2m-objects.c

# REST Engine shall use Erbium CoAP implementation
APPS += rest-engine
APPS += er-coap
APPS += oma-lwm2m

include $(CONTIKI)/Makefile.include
