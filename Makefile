


ALLC = Iterator.cpp Main.cpp Node.cpp Tree.cpp
ALLO = Iterator.o Node.o Tree.o

Main: $(ALLO)
	g++ - wall $(ALLO) -o Main

Iterator.o: Iterator.cpp	
	g++ -c Iterator.cpp

Node.o: Node.cpp
	g++ -c Node.cpp

Tree.o: Tree.cpp
	g++ -c Tree.cpp

clean:
	rm *.o Main


