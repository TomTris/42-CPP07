/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 11:45:42 by qdo               #+#    #+#             */
/*   Updated: 2024/06/17 14:15:43 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

template <typename T>
class Array {

private:
	T 				*_array;
	unsigned int	_size_ar;

public:
	~Array();

	Array();
	Array(unsigned int n);
	Array(Array const & src);

	unsigned int	size() const;
	class InvalidIndex : public std::exception
	{
		public:
			const char* what() const throw();
	};

	T & operator[](unsigned int n);
	Array & operator=(Array const & src);
};

#endif

template <typename T>
Array<T>::~Array()
{
	std::cout << "An Array left" << std::endl;
	delete [] _array;
}

template <typename T>
Array<T>::Array() : _size_ar(0)
{
	std::cout << "An Array with size 0 was born" << std::endl;
	_array = new T[0];
}
template <typename T>
Array<T>::Array(unsigned int n) : _size_ar(n)
{
	_array = new T[n];
	std::cout << "An Array with size of " << n << " was born" << std::endl;
}
template <typename T>
Array<T>::Array(Array const & src)
{
	_array = NULL;
	std::cout << "An Array with size " << src._size_ar << " was born" << std::endl;
	*this = src;
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (this->_size_ar);	
}

template <typename T>
const char *Array<T>::InvalidIndex::what(void) const throw()
{
	static std::string str = "Index is out of bond";

	return (str.c_str());
}


template <typename T>
T & Array<T>::operator[](unsigned int n)
{
	if (this->_size_ar <= n)
		throw Array<T>::InvalidIndex();
	return (this->_array[n]);
}

template <typename T>
Array<T> & Array<T>::operator=(const Array<T> & src)
{
	if (this != &src)
	{
		if (_array != NULL)
			delete _array;
		_size_ar = src.size();
		_array = new T[_size_ar];
		unsigned int i = -1;
		while (++i < _size_ar)
			_array[i] = src._array[i];
	}
	return (*this);
}
