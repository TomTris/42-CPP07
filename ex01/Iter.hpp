/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:09:30 by qdo               #+#    #+#             */
/*   Updated: 2024/06/17 19:03:28 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <unistd.h>

template <typename T>
void	iter(T * add, size_t len, void (*func)(T &))
{
	size_t cnt = 0;

	if (add != NULL)
		while (cnt < len)
			func(add[cnt++]);
}

// template <typename T>
// void	iter(T * add, size_t len, void (*func)(T const &))
// {
// 	size_t cnt = 0;

// 	if (add != NULL)
// 		while (cnt < len)
// 			func(add[cnt++]);
// }

#endif
