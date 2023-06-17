# Mi asombroso  MakeFile

# (Objetivo) : (dependencias)
# Camandos

bin/proyecto : src/main.cpp
	@echo Compilando codigo fuente
	g++ -o bin/proyecto src/main.cpp -Iinclude

run : bin/proyecto
	./bin/proyecto
