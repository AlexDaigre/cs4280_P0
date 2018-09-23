CC      = g++
CFLAGS  = -g
TARGET  = P0
OBJS    = P0.o binarySearchTree.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

P0.o: P0.cpp
	$(CC) $(CFLAGS) -c P0.cpp

binarySearchTree.o: binarySearchTree.cpp
	$(CC) $(CFLAGS) -c binarySearchTree.cpp

clean:
	/bin/rm -f *.o $(TARGET)