#This is a makefile
testlistg:testlistg.c listg.c
	gcc -g testlistg.c listg.c -o testlistg

N:
	gcc testlistg.c listg.c -o testlistg

clean:
	rm testlistg
