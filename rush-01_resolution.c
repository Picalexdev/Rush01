/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01_resolution.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 11:24:16 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/07 17:01:16 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



void reset_output_table(char ***output)
{
    int x[3];

    x[0] = -1;
   while (++x[0] < 4)
    {
        x[1] = -1;
        while (++x[1] < 4)
        {
            x[2] = -1;
            while (++x[2] < 5)
            {   
                output[x[0]][x[1]][x[2]] = '1';
                output[x[0]][x[1]][0] = '0';
            }
        }
    }
}

