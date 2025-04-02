ejecutar : bin/programa 
	./bin/programa

bin/programa : src/main.cpp
	g++ src/main.cpp -o bin/programa -I include

bin/memoria : src/memoria.cpp
	g++ src/memoria.cpp -o bin/memoria


memoria : bin/memoria	
	./bin/memoria