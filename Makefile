# if you want to be the better one ,please follow below
testsortg:testsortg.c sortg.c
	gcc -g testsortg.c sortg.c -o testsortg
N:
	gcc testsortg.c sortg.c -o testsortg

clean:
	rm testsortg
