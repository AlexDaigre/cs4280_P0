CC      = g++
CFLAGS  = -g
TARGET  = P0
OBJS    = P0.o tree.o

$(TARGET): $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

P0.o: P0.c tree.h
	$(CC) $(CFLAGS) -c P0.c

tree.o: tree.c tree.h node.h
	$(CC) $(CFLAGS) -c tree.c

clean:
	/bin/rm -f *.o $(TARGET)