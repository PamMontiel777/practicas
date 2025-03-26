ejecutar : bin/programa receta3
	./bin/programa

bin/programa : src/main.cpp
	g++ src/main.cpp -o bin/programa -I include

receta3 :
	@echo "hola mundo"