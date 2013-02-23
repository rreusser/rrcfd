PROD =		rrcfd.x
LIB =		-lm -lX11
LIBDIR =	-L/usr/lib -L/usr/local/lib -L/usr/X11R6/lib
INCDIR =	-I/usr/include -I/usr/local/include -I/usr/X11R6/include
CC =		cc
CFLAGS = 	-Wall $(INCDIR) -O3
LD =		cc
LDFLAGS =	-Wall $(LIBDIR) $(LIB) -O3
OBJ =		rrcfd.o

$(PROD): $(OBJ)
	$(LD) $(OBJ) $(LDFLAGS) -o $@
.c.o:
	$(CC) -c $< $(CFLAGS) -o $@

run:
	./$(PROD) 4 100 > fluid.dat
big:
	./$(PROD) 2 200 > fluid.dat
read:
	./$(PROD) 4 < fluid.dat
runself:
	./$(PROD) 4 < rrcfd.c > fluid.dat
clean:
	rm -f *.o $(PROD)
