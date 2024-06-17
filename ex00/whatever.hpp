/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:00:04 by qdo               #+#    #+#             */
/*   Updated: 2024/06/17 10:07:33 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T & a, T & b)
{
	T c;
	c = b;
	b = a;
	a = c;
}
template <typename T>
T const & min(T const & a, T const & b)
{
	return (a < b ? a : b);
}

template <typename T>
T const & max(T & a, T & b)
{
	return (a > b ? a : b);
}

#endif