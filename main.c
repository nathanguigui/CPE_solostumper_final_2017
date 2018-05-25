/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** 
*/

int is_same(char charac1, char charac2)
{
	int k = 0;

	if (charac1 == charac2)
		k = 1;
	if (charac1 + 32 == charac2)
		k = 1;
	if (charac1 == charac2 + 32)
		k = 1;
	return (k);
}

int is_palindrome(char *str)
{
	int i = 0;
	int k = my_strlen(str);

	if (k % 2 == 0) {
		while (i < k / 2) {
			if (!is_same(str[i], str[k - i - 1]))
				return (0);
			i = i + 1;
		}
	} else {
		while (i < k / 2 + 1){
			if (!is_same(str[i], str[k - i - 1]))
				return (0);
			i = i + 1;			
		}
	}
	return (1);
}

int main(int ac, char **av)
{
	char *succ = "palindrome!\n";
	char *fail = "not a palindrome.\n";

	if (ac != 2) {
		my_putstr("Error: not enough arguments.\n");
		return (84);
	} else {
		(is_palindrome(av[1]) == 1) ? my_putstr(succ) : 1;
		(is_palindrome(av[1]) == 0) ? my_putstr(fail) : 1;
	}
	return (0);
}