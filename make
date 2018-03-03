a.out: mystack.o client.o
	gcc mystack.o client.o
mystack.o: client.c mystack.h
	gcc -c mystack.c
client.o: mystack.c mystack.h
	gcc -c client.c
