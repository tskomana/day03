/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tskomana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 12:09:51 by tskomana          #+#    #+#             */
/*   Updated: 2020/07/16 12:13:55 by tskomana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistream>

void  ft_swap(int *a, int *b)
{
  int swap;
  swap = *a;
  *a = *b;
  *b = swap;
}
