/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01_resolution.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 11:24:16 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/07 16:01:27 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void num_checker_1(char ***output,char **input,int num);
void seguro(char ***output, char num, int fila, int columna);
void num_checker_2(char ***output,char **input,int num);

void reset_output_table(char ***output)
{
    int x[3];
    char num;

    x[0] = -1;
   while (++x[0] < 4)
    {
        x[1] = -1;
        while (++x[1] < 4)
        {
            x[2] = -1;
            while (++x[2] < 5)
            {   
                output[x[0]][x[1]][x[2]] = '0';
            }
        }
    }
}

