/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: audumont <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:06:14 by audumont          #+#    #+#             */
/*   Updated: 2019/10/07 15:28:43 by audumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int	ft_isalpha(int nb);
int ft_isdigit(int nb);
int	ft_isprint(int nb);
long unsigned int	ft_strlen(char *str);
int ft_toupper(int nb);
int ft_tolower(int nb);
int	ft_isalnum(int nb);

int	ft_isascii(unsigned char c);
char *ft_strchr(const char *str, char to_find);
int	ft_strncmp(char *s1, char *s2, int nb);
int	ft_atoi(char *str);

char *ft_strrchr(const char *str, char to_find);

int main(void)
{
	char *str1 = "je suis un string";
	//char *str2 = "4542";

	printf("Résultat de la fonction ft_isalpha : %d\n", ft_isalpha('a'));
	printf("Résultat de la fonction isalpha: %d\n", isalpha('a'));
	printf("\n\n");
	printf("Résultat de la fonction ft_isdigit: %d\n", ft_isdigit(48));
	printf("Résultat de la fonction isdigit : %d\n", isdigit(48));
	printf("\n\n");
	printf("Résultat de la fonction ft_isprint : %d\n", ft_isprint(30));
	printf("Résultat de la fonction isprinti: %d\n", isprint(30));
	printf("\n\n");
	printf("Résultat de la fonction ft_strlen : %lu\n", ft_strlen(str1));
	printf("Résultat de la fonction strlen : %lu\n", strlen(str1));
	printf("\n\n");
	printf("Résultat de la fonction ft_toupper : %d\n", ft_toupper(97));
	printf("Réultat de la fonction toupper: %d\n", toupper(97));
	printf("\n\n");
	printf("Résultat de la fonction ft_tolower : %d\n", ft_tolower(72));
	printf("Résultat de la fonction tolower: %d\n", tolower(72));
	printf("\n\n");
	printf("Résultat de la fonction ft_isalnum: %d\n", ft_isalnum(47));
	printf("Résultat de la fonction isalnum: %d\n", isalnum(47));

	printf("\n********* TEST DE LA FONCTION ISASCII *******\n\n");
	printf("Résultat de la fonction ft_isascii: %d\n", ft_isascii(0x060));
	printf("Résultat de la fonction isascii: %d\n", isascii(0x060));
	
	printf("\n********* TEST DE LA FONCTION STRCHR ************\n\n");
	printf("Résultat de la fonction ft_strchr : %s\n", ft_strchr(str1, 'n'));
	printf("Résultat de la fonction strchr : %s\n", strchr(str1, 'n'));

	printf("\n********* TEST DE LA FONCTION STRCNCMP ***********\n\n");
	printf("Résultat de la fonction ft_strcmp : %d\n", ft_strncmp("coucou", "hello", 4));
	printf("Résultat de la fonction strcmp: %d\n", strncmp("coucou", "hello", 4));

	printf("\n******* TEST DE LA FONCTION ATOI ****\n\n");
	printf("Résultat de la fonction ft_atoi: %d\n", ft_atoi("505"));
	printf("Résultat de la fonction atoi: %d\n\n", atoi("505"));
	printf("Résultat de la fonction ft_atoi: %d\n", ft_atoi("+506"));
	printf("Résultat de la fonction atoi: %d\n\n", atoi("+506"));
	printf("Résultat de la fonction ft_atoi: %d\n", ft_atoi("-405"));
	printf("Résultat de la fonction atoi: %d\n\n", atoi("-405"));
	printf("Résultat de la fonction ft_atoi: %d\n", ft_atoi("100"));
	printf("Résultat de la fonction atoi: %d\n\n", atoi("100"));
	printf("Résultat de la fonction ft_atoi: %d\n", ft_atoi("-+506"));
	printf("Résultat de la fonction atoi: %d\n\n", atoi("-+506"));
	printf("Résultalt de la fonction ft_atoi: %d\n", ft_atoi("coucou"));
	printf("Résultalt de la fonction atoi: %d\n\n", atoi("coucou"));
	

	printf("\n*********** TEST DE LA FONCTION STRRCHAR *********\n\n");
	printf("Résultat de la fonction ft_strchar: %s\n", ft_strrchr("je suis une poule", 'u'));
	printf("Résultat de la fonction strrchar: %s\n", strrchr("je suis une poule", 'u'));
	printf("Résultat de la fonction ft_strchr: %s\n",ft_strrchr("je m'appelle banana", 'z'));
	printf("Résultat de la fonction ft_strchr: %s\n", ft_strrchr("je m'appelle banana", 'z'));
}
