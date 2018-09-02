default: 
	gcc -o client libnetfiles.c
clean:
	$(RM) client *.o *~