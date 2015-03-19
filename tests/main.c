/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmerlier <tmerlier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/19 18:20:56 by tmerlier          #+#    #+#             */
/*   Updated: 2015/03/19 18:51:45 by tmerlier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	char		digit = '5';
	char		no_digit = 'H';

	printf("ft_isdigit(%c) = %d\n", digit, ft_isdigit(digit));
	printf("ft_isdigit(%c) = %d\n", no_digit, ft_isdigit(no_digit));
	return 0;
}
