CC      = g++
CFLAGS  = -g
TARGET  = P0
OBJS    = P0.o tree.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

P0.o: P0.cpp tree.o
	$(CC) $(CFLAGS) -c P0.cpp

binarySearchTree.o: tree.cpp tree.h node.h
	$(CC) $(CFLAGS) -c tree.cpp

clean:
	/bin/rm -f *.o $(TARGET)