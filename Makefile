
CC= gcc
CFLAGS= -c

mock: assign_rand.o  source_code.o  string_code.o  pattern_code.o
	gcc $^ -o $@

.c:.o
	$(CC) $(CFLAGS) $^


clean:
	rm -f mock
	rm *.o
