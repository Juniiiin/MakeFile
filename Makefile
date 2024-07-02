programa: programa.c
	gcc -o programa programa.c
	./programa	

listar:
	ls

execute: 
	grep -rl "teste" .
	
clean:
	rm -f programa
	
