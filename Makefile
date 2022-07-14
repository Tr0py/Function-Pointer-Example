CC=gcc

fp: fp.c
	$(CC) -o $@ $<

run: fp
	./$<

clean:
	rm fp
