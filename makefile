NAME ?= REDSTONE
ICON ?= icon.png
DESCRIPTION ?= "2D Redstone Simulator v1.0.0a for TI-84 CE"
COMPRESSED ?= Yes
ARCHIVED ?= NO

CFLAGS ?= -Wall -Wextra -Oz
CXXFLAGS ?= -Wall -Wextra -Oz

# ----------------------------

ifndef CEDEV
$(error CEDEV environment path variable is not set)
endif

include $(CEDEV)/meta/makefile.mk

