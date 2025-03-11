/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Color.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:01:37 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/11 19:04:41 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_HPP
#define COLOR_HPP

#include "../../inc/CuteConsole.h"
#include <sstream>

namespace Color
{
	// Reset para volver al color normal
	extern const string_t reset   ;

	// 🎨 8 Colores Básicos
	extern const string_t black;
	extern const string_t red;
	extern const string_t green;
	extern const string_t yellow;
	extern const string_t blue;
	extern const string_t magenta;
	extern const string_t cyan;
	extern const string_t white;

	// ✨ 8 Colores Brillantes
	extern const string_t bblack;
	extern const string_t bred;
	extern const string_t bgreen;
	extern const string_t byellow;
	extern const string_t bblue;
	extern const string_t bmagenta;
	extern const string_t bcyan;
	extern const string_t bwhite;

	extern const string_t bold;         // Negrita
	extern const string_t dim;          // Atenuado
	extern const string_t italic;       // Cursiva (No siempre funciona)
	extern const string_t underline;    // Subrayado
	extern const string_t blink;        // Parpadeo
	extern const string_t reverse;      // Invertido
	extern const string_t hidden;       // Oculto

	// 🎨 8 Colores de Fondo
	extern const string_t bg_black;
	extern const string_t bg_red;
	extern const string_t bg_green;
	extern const string_t bg_yellow;
	extern const string_t bg_blue;
	extern const string_t bg_magenta;
	extern const string_t bg_cyan;
	extern const string_t bg_white;

	// ✨ 8 Fondos Brillantes
	extern const string_t bbg_black;
	extern const string_t bbg_red;
	extern const string_t bbg_green;
	extern const string_t bbg_yellow;
	extern const string_t bbg_blue;
	extern const string_t bbg_magenta;
	extern const string_t bbg_cyan;
	extern const string_t bbg_white;
}

void printCute(string_t message, string_t color);
std::string toString(size_t num);

#endif
