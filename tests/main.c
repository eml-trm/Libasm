/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 18:20:56 by tmerlier          #+#    #+#             */
/*   Updated: 2015/03/23 15:08:40 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
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

	printf("/////////////// FT_STRLEN ///////////////\n");
	printf("ft_strlen(%s) = %zu\n\n\n", len, ft_strlen(len));

	char	str[] = "Born2Code";

	printf("/////////////// FT_BZERO ///////////////\n");
	printf("str = %s\n", str);
	ft_bzero(str + 4, 5);
	printf("ft_bzero(\"Born2Code\" + 4, 5) = %s\n\n\n", str);

	char	str1[] = "École ";
	char	str2[] = "42";
	char	*str3;

	printf("/////////////// FT_STRCAT ///////////////\n");
	printf("str1 = %s\nstr2 = %s\n", str1,str2);
	str3 = (char *)malloc(sizeof(char) * 15);
	str3 = ft_strcat(str1, str2);
	printf("ft_strcat() = '%s'\n\n\n", str3);

	char put[] = "ça affiche bien!";

	printf("/////////////// FT_PUTS ///////////////\n");
	ft_puts(put);
	ft_puts("\n");
	ft_puts(NULL);
	ft_puts("\n\n");

	return (0);
}

























