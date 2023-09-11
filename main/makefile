CFLAGS = -Wno-implicit-function-decleration

all: final

final: main.o functions.o
	echo "Linking and producing the final application"
	gcc $(CFLAGS) main.o functions.o -o final
	chmod +x final

main.o: main.c
	echo "Compiling the main file"
	gcc $(CFLAGS) -c main.c

functions.o: functions.c
	echo "Compilinng the functions file"
	gcc $(CFLAGS) -c functions.c

clean:
	echo "Removing everything but the source files"
	rm main.o hello.o final