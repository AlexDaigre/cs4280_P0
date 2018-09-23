CC      = gcc
CFLAGS  = -g
TARGET  = P0
OBJS    = P0.o binarySearchTree.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

P0.o: P0.c
	$(CC) $(CFLAGS) -c P0.c

binarySearchTree.o: binarySearchTree.c
	$(CC) $(CFLAGS) -c binarySearchTree.c

clean:
/bin/rm -f *.o $(TARGET)