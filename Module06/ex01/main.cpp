/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylabtaim <ylabtaim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:11:16 by ylabtaim          #+#    #+#             */
/*   Updated: 2022/09/26 14:23:56 by ylabtaim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct DataStruct {
	std::string	msg;
} Data;

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int	main(void) {
	Data*		data = new Data;
	Data*		check;

	data->msg = "test";
	check = deserialize(serialize(data));

	if (data->msg == check->msg)
		std::cout << "It works!" << std::endl;
	else
		std::cout << "It didn't work!" << std::endl;

	delete data;

	return (0);
}