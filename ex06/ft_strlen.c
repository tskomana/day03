/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tskomana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 14:03:12 by tskomana          #+#    #+#             */
/*   Updated: 2020/07/16 14:03:30 by tskomana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unstd.h>



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     ft_strlen(char *str)
{
	int counter;

	counter = 0;
	while(str[counter])
	{
		ft_putchar(str[counter]);
		counter++;
	}
}
