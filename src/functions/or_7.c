/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7_or.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alazarev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 14:58:29 by alazarev          #+#    #+#             */
/*   Updated: 2018/07/25 14:58:42 by alazarev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/vm.h"

void	f_or(t_map *map, t_carry *carry)
{
	bit_function(map, carry, '|');
}
