
CXX = g++
CXXFLAGS = -Wall -g
TARGET = math_program
OBJS = main.o Calculator.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

main.o: main.cpp Calculator.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Calculator.o: Calculator.cpp Calculator.h
	$(CXX) $(CXXFLAGS) -c Calculator.cpp

clean:
	rm -f $(OBJS) $(TARGET)