# If the first argument is "run"...
ifeq (run,$(firstword $(MAKECMDGOALS)))
  # use the rest as arguments for "run"
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  # ...and turn them into do-nothing targets
  $(eval $(RUN_ARGS):;@:)
endif

CXX = g++
CXXFLAGS = -c -Wall -Werror -std=c++20
PROGNAME = a.out

BUILD_DIR = ../build/39/
LIB_DIR	= ../build/39/lib/

SOURCE = \
main.cpp

OUT = $(BUILD_DIR)$(PROGNAME)
OBJS = $(SOURCE:%.cpp=$(BUILD_DIR)%.o)

LIBNAME = data

LSOURCE = \
data/display.cpp \
data/read.cpp \
data/data.cpp \
dataimp/display.cpp \
dataimp/read.cpp

LOUT = $(LIB_DIR)lib$(LIBNAME).a
LOBJS = $(LSOURCE:%.cpp=$(LIB_DIR)%.o)

LFLAGS	= -L $(LIB_DIR) -l$(LIBNAME)

all: $(OUT)

$(OUT): $(OBJS) $(LOUT)
	$(CXX) $(OBJS) -o $(OUT) $(LFLAGS)

$(BUILD_DIR)%.o : %.cpp
	@mkdir -p '$(@D)'
	$(CXX) $(CXXFLAGS) $< -o $@

build: $(OBJS)

clean:
	rm -f $(OBJS) $(OUT) $(LOBJS) $(LOUT)

clean-prog:
	rm -f $(OBJS) $(OUT)

clean-lib:
	rm -f $(LOBJS) $(LOUT)

run: $(OUT)
	$(OUT) $(RUN_ARGS)

lib: $(LOUT)

$(LOUT): $(LOBJS)
	ar rvs $(LOUT) $(LOBJS)

$(LIB_DIR)%.o : %.cpp
	@mkdir -p '$(@D)'
	$(CXX) $(CXXFLAGS) $< -o $@

