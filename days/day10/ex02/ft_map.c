/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lkrief <lkrief@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 21:03:38 by lkrief            #+#    #+#             */
/*   Updated: 2019/07/24 13:14:00 by lkrief           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *t;

	t = (int*)(malloc(sizeof(*t) * length));
	i = -1;
	while (i++ < length - 1)
	{
		t[i] = f(tab[i]);
	}
	return (t);
}
