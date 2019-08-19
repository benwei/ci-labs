CXX=$(CROSS_COMPILE)g++
CXXFLAGS=-g -O3 -std=c++11 -Wall -pedantic
TARGET=prog

CXX_FILES=$(wildcard *.cpp)
OBJS=$(CXX_FILES:%.cpp=%.o)

all: $(TARGET)

$(TARGET):$(OBJS)
	$(CXX) -o $(TARGET) $^

%.o: %.c
	$(CXX) $@ -c $<

run: $(TARGET)
	./$^

clean:
	rm -f *.o $(TARGET)
