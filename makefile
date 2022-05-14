rule:
	gcc -E tata.c -o fc.i
	gcc -E -P tata.c -o f.i
	gcc -S tata.c -o f.s
	gcc -c tata.c -o f.obj
	gcc tata.c -o f.exe
