NAME = ver2_program.out
FLAG = -Wall -Werror -Wextra
FILES = *.c

$(NAME):
	gcc $(FLAG) $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)	
