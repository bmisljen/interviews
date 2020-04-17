IDIR =../include
CC=g++
CFLAGS=-I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = tests.h binarytree.h doublelinkedlist.h node.h Objects.h 
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = testsMain.o BinaryTree.o doublelinkedlist.o fibinacci.o LinkedList.o  numberoperations.o sort.o stringoperations.o Objects.o 

OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)
	
questions: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 
