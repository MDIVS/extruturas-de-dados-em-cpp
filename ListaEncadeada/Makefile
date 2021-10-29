PATH_LIB = ./src/lib/

Teste:
	g++ -c $(PATH_LIB)classes/ListNode.cpp -o listnode.o
	g++ -c $(PATH_LIB)data_structures/List.cpp -o list.o
	g++ -c Teste.cpp -o teste.o
	g++ *.o -o Teste
	rm *.o

clean:
	rm *.o Teste