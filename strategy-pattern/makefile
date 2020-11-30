SRC_DIR := src
INC_DIR := inc
OBJ_DIR := obj
BIN := bin/debug/main

CPPFLAGS:= -I $(INC_DIR) -MMD -MP
CXXFLAGS:= -Wall -g -std=c++11

INCS := $(wildcard $(INC_DIR)/*.hpp)
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS := $(wildcard $(OBJ_DIR)/*.d)

all: $(BIN)

$(BIN): $(OBJS)
	$(CXX) $^ -o $@

$(OBJS): $(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $(OUTPUT_OPTION) $<

clean:
	$(RM) $(OBJS) $(DEPS) $(BIN)
