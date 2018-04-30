NAME = main
CODE := $(NAME).c
BINARY := bin/$(NAME)

build: $(CODE)
	gcc `pkg-config --cflags --libs gtk+-3.0` -o $(BINARY) $(CODE) -Wall -export-dynamic -lm
	make execute

execute: $(BINARY)
	./$(BINARY)


clean:
	rm $(BINARY)