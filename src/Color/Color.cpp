/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Color.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:01:49 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/11 19:03:06 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Color.hpp"

namespace Color
{
	const string_t reset  = "\033[0m";

	// 🎨 8 Colores Básicos
	const string_t black   = "\033[30m";
	const string_t red     = "\033[31m";
	const string_t green   = "\033[32m";
	const string_t yellow  = "\033[33m";
	const string_t blue    = "\033[34m";
	const string_t magenta = "\033[35m";
	const string_t cyan    = "\033[36m";
	const string_t white   = "\033[37m";

	// ✨ 8 Colores Brillantes
	const string_t bblack   = "\033[1;30m";
	const string_t bred     = "\033[1;31m";
	const string_t bgreen   = "\033[1;32m";
	const string_t byellow  = "\033[1;33m";
	const string_t bblue    = "\033[1;34m";
	const string_t bmagenta = "\033[1;35m";
	const string_t bcyan    = "\033[1;36m";
	const string_t bwhite   = "\033[1;37m";

	// Estilos!!
	const string_t bold       = "\033[1m";  // Negrita
	const string_t dim        = "\033[2m";  // Atenuado
	const string_t italic     = "\033[3m";  // Cursiva (No siempre funciona)
	const string_t underline  = "\033[4m";  // Subrayado
	const string_t blink      = "\033[5m";  // Parpadeo
	const string_t reverse    = "\033[7m";  // Invertido
	const string_t hidden     = "\033[8m";  // Oculto

	// 🎨 8 Colores de Fondo
	const string_t bg_black   = "\033[40m";
	const string_t bg_red     = "\033[41m";
	const string_t bg_green   = "\033[42m";
	const string_t bg_yellow  = "\033[43m";
	const string_t bg_blue    = "\033[44m";
	const string_t bg_magenta = "\033[45m";
	const string_t bg_cyan    = "\033[46m";
	const string_t bg_white   = "\033[47m";

	// ✨ 8 Fondos Brillantes
	const string_t bbg_black   = "\033[100m";
	const string_t bbg_red     = "\033[101m";
	const string_t bbg_green   = "\033[102m";
	const string_t bbg_yellow  = "\033[103m";
	const string_t bbg_blue    = "\033[104m";
	const string_t bbg_magenta = "\033[105m";
	const string_t bbg_cyan    = "\033[106m";
	const string_t bbg_white   = "\033[107m";
}

void printCute(string_t message, string_t color)
{
	std::cout << color << message << Color::reset;
}

std::string toString(size_t num)
{
	std::ostringstream oss;
	oss << num;
	return oss.str();
}
