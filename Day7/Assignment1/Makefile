compiler = g++
main : main.o 
	$(compiler) -o main main.o -L. -lShape

main.o : Shape.o
	$(compiler) -c src/main.cpp -I include/

Shape.o : 
	$(compiler) --shared -fPIC src/Shape.cpp -I include/ -o libShape.so 

clean : 
	rm libShape.so
	rm main
	rm main.o