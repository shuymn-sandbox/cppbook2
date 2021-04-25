SUFFIX = .cpp
COMPILER = clang++
CFLAGS = -Wall --std=c++14

SRCDIR = src
OUTDIR = bin

SOURCES  = $(wildcard $(SRCDIR)/*$(SUFFIX))
TARGETS  = $(notdir $(basename $(SOURCES)))

define MAKEALL
$(1): $(1).o
	@$(COMPILER) $(CFLAGS) -o $(OUTDIR)/$(1) $(1).o
	@$(RM) $(1).o
$(1).o:
	@$(COMPILER) $(CFLAGS) -c $(SRCDIR)/$(1)$(SUFFIX)
endef

.PHONY: all
all: $(TARGETS)
$(foreach var,$(TARGETS),$(eval $(call MAKEALL,$(var))))

.PHONY: clean
clean:
	$(RM) $(OUTDIR)/*
