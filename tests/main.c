/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 18:20:56 by tmerlier          #+#    #+#             */
/*   Updated: 2015/03/20 14:20:16 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libasm.h>

int main(void)
{
	int		digit = '5';
	int		alpha = 'H';

	printf("/////////////// FT_ISDIGIT ///////////////\n");
	printf("ft_isdigit(%c) = %d\n", digit, ft_isdigit(digit));
	printf("ft_isdigit(%c) = %d\n\n\n", alpha, ft_isdigit(alpha));

	printf("/////////////// FT_ISALPHA ///////////////\n");
	printf("ft_isalpha(%c) = %d\n", digit, ft_isalpha(digit));
	printf("ft_isalpha(%c) = %d\n\n\n", alpha, ft_isalpha(alpha));

	int		ascii = 127; /* 127 = del*/
	int		ascii2 = 20; /* 20 = dc4 */

	printf("/////////////// FT_ISASCII ///////////////\n");
	printf("ft_isascii(%c) = %d\n", digit, ft_isascii(digit));
	printf("ft_isascii(%c) = %d\n", alpha, ft_isascii(alpha));
	printf("ft_isascii(%c) = %d\n", ascii2, ft_isascii(ascii2));
	printf("ft_isascii(%c) = %d\n\n\n", ascii, ft_isascii(ascii));

	int		spc = ' ';

	printf("/////////////// FT_ISALNUM ///////////////\n");
	printf("ft_isalnum(%c) = %d\n", digit, ft_isalnum(digit));
	printf("ft_isalnum(%c) = %d\n", alpha, ft_isalnum(alpha));
	printf("ft_isalnum(%c) = %d\n\n\n", spc, ft_isalnum(spc));

	int		maj = 'F';
	int		min = 'b';

	printf("/////////////// FT_TOUPPER ///////////////\n");
	printf("ft_toupper(%c) = %c\n", maj, ft_toupper(maj));
	printf("ft_toupper(%c) = %c\n\n\n", min, ft_toupper(min));

	printf("/////////////// FT_TOLOWER ///////////////\n");
	printf("ft_tolower(%c) = %c\n", maj, ft_tolower(maj));
	printf("ft_tolower(%c) = %c\n\n\n", min, ft_tolower(min));

	char	*len = "01234";
	char	*len_null = NULL;

	printf("/////////////// FT_STRLEN ///////////////\n");
	printf("ft_strlen(%s) = %d\n", len, ft_strlen(len));
	printf("ft_strlen(%s) = %d\n\n\n", len_null, ft_strlen(len_null));

	// char	*test = "Bonjour";
	// char	*test2 = "Cadeau";
	// char	*test3 = "Chat";
	// char	*test4 = "Lapin";

	// printf("/////////////// FT_STRCAT ///////////////\n");
	// printf("ft_strcat(%s, %s) = %s\n", test, test2, ft_strcat(test, test2)));
	// printf("ft_strcat(%s, %s) = %s\n\n\n", test3, test4, ft_strcat(test3, test4)));

	return 0;
}
