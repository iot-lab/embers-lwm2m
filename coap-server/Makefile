all: er-example-server

include ../Makefile.config


# automatically build RESTful resources
REST_RESOURCES_DIR = ./resources
REST_RESOURCES_FILES = $(notdir $(shell find $(REST_RESOURCES_DIR) -name '*.c'))

PROJECTDIRS += $(REST_RESOURCES_DIR)
PROJECT_SOURCEFILES += $(REST_RESOURCES_FILES)

# REST Engine shall use Erbium CoAP implementation
APPS += er-coap
APPS += rest-engine

include $(CONTIKI)/Makefile.include
