# If the first argument is "run"...
ifeq (run,$(firstword $(MAKECMDGOALS)))
  # use the rest as arguments for "run"
  RUN_ARGS := $(wordlist 2,$(words $(MAKECMDGOALS)),$(MAKECMDGOALS))
  # ...and turn them into do-nothing targets
  $(eval $(RUN_ARGS):;@:)
endif

CXX	 = g++
CXXFLAGS	 =  -c -Wall -Werror -std=c++20
PROGNAME	= a.out

BUILD_DIR	= ../build/34/

SOURCE	= \
copycat/copycat2.cpp \
copycat/copycat1.cpp \
copycat/ntbscopy.cpp \
copycat/duplicate.cpp \
copycat/copycat3.cpp \
copycat/nelements.cpp \

OUT	= $(BUILD_DIR)$(PROGNAME)
OBJS	= $(SOURCE:%.cpp=$(BUILD_DIR)%.o)

all: $(OUT)

$(OUT): $(OBJS)
	$(CXX) $(OBJS) -o $(OUT)

$(BUILD_DIR)%.o : %.cpp
	@mkdir -p '$(@D)'
	$(CXX) $(CXXFLAGS) $< -o $@

build: $(OBJS)

clean:
	rm -f $(OBJS) $(OUT)

run: $(OUT)
	$(OUT) $(RUN_ARGS)