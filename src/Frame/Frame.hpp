/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Frame.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shurtado <shurtado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 21:28:22 by shurtado          #+#    #+#             */
/*   Updated: 2025/03/11 19:07:04 by shurtado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAME_HPP
#define FRAME_HPP

#include "../../inc/CuteConsole.h"

namespace Frame
{
	void Frame(const string_t &texto, const string_t &style);
	void FrameTittle(const string_t &texto, const string_t &style);
}

#endif
