CXX = g++
CXXFLAGS = -std=c++17 -Wall -c
LXXFLAGS = -std=c++17
OBJECTS = 6-1.cpp
TARGET = 6-1

$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
Q1.o: 6-1.cpp
	$(CXX) $(LXXFLAGS) 6-1.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)
