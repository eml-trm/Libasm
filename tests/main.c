/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 18:20:56 by tmerlier          #+#    #+#             */
/*   Updated: 2015/03/19 19:46:38 by tmerlier         ###   ########.fr       */
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
	printf("ft_isalnum(%c) = %c\n", maj, ft_toupper(maj));
	printf("ft_isalnum(%c) = %c\n\n\n", min, ft_toupper(min));
	return 0;
}
