main: main.o myAbs.o getMax.o getMin.o
	gcc -o main main.o myAbs.o getMax.o getMin.o

main.o: main.c
	gcc -c -o main.o main.c

myAbs.o: myAbs.c
	gcc -c -o myAbs.o myAbs.c

getMax.o: getMax.c
	gcc -c -o getMax.o getMax.c

getMin.o: getMin.c
	gcc -c -o getMin.o getMin.c

clean:
	rm -rf *.o
