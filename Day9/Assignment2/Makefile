compiler = g++
main : main.o 
	$(compiler) -o main main.o -L. -lShape

main.o : Shape.o
	$(compiler) -c src/main.cpp -I include/

test : test.o
	$(compiler) -o test test.o -L. -lShape

test.o : Shape.o
	$(compiler) -c src/test.cpp -I include/

Shape.o : 
	$(compiler) --shared -fPIC src/Shape.cpp -I include/ -o libShape.so 

cleantest: 
	rm test
	rm test.o
	rm libShape.so
clean :
	rm main
	rm main.o
	rm libShape.so