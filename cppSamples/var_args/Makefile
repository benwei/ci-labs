CXX?=$(CROSS_COMPILE)g++
CXXFLAGS=-g -O3 -std=c++11 -Wall -pedantic
OUTPUT_DIR=output
TARGET=$(OUTPUT_DIR)/var_args_test

CXX_FILES=$(wildcard *.cpp)
OBJS=$(CXX_FILES:%.cpp=%.o)

all: $(TARGET)

$(OUTPUT_DIR):
	mkdir -p $(OUTPUT_DIR)

$(TARGET): $(OUTPUT_DIR) $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CXX) $@ -c $<

run: $(TARGET)
	./$^

clean:
	rm -f *.o
	rm -rf $(OUTPUT_DIR)
