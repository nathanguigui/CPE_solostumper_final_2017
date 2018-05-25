##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

all:
	@gcc *.c -o palindrome -g -include stumper.h
	@echo "make: all done."

fclean:
	@rm palindrome
	@echo "make: fclean done."

re:	fclean all
	@echo "make: re done."