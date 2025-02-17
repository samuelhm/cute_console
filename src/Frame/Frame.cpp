/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Frame.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:28:51 by shurtado          #+#    #+#             */
/*   Updated: 2025/02/17 21:35:06 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Frame.hpp"

void Frame::Frame(const std::string &texto, const std::string &style)
{
	std::cout << style;
	std::cout << "+" << std::string(texto.size() + 2, '-') << "+\n";
	std::cout << "| " << texto << " |\n";
	std::cout << "+" << std::string(texto.size() + 2, '-') << "+\n";
	std::cout << color::reset;
}

void Frame::FrameTittle(const std::string &texto, const std::string &style)
{
	std::cout << style;
	std::cout << "╔";
	for (size_t i = 0; i < texto.size() + 2; i++)
		std::cout << "═";
	std::cout << "╗\n";

	std::cout << "║ " << texto << " ║\n";

	std::cout << "╚";
	for (size_t i = 0; i < texto.size() + 2; i++)
		std::cout << "═";
	std::cout << "╝\n";

	std::cout << color::reset;
}
