/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etermeau <etermeau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/27 15:01:25 by etermeau          #+#    #+#             */
/*   Updated: 2015/03/27 15:01:27 by etermeau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "libasm.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>

int		main()
{
	printf("\033[0m/////////////// FT_PUTSTR ///////////////\n");
	ft_putstr("j'ecris avec un putstr");
	ft_puts("\n");


	printf("\033[0m/////////////// FT_PUTSTR_FD ///////////////\n");
	ft_putstr_fd("j'ecris sur un fd \n\n", 1);

	printf("\033[0m/////////////// FT_PUTSTR_CYAN ///////////////\n");
	ft_putstr_cyan("bonjour je suis bleu\n");
	ft_puts("moi non !");

	return (0);
}
