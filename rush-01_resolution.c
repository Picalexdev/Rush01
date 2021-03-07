/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01_resolution.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 11:24:16 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/07 20:37:17 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void eliminar(char ***output, char num, int fila, int columna);
void delete_used_numbers(char ***output, int fila, int columna);

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

/*char table_translator(char ***output, int fila, int columna)
{
    int x;
    char y;
    
    x = 0;
    if (output[fila][columna][0] == '1')
    {
        while (output[fila][columna][x] != '0')
            x++;
    }
    y = x + '0' + 1;
    return y;
}

void pick_used_numbers(char ***output)
{
    int fila;
    int columna;

    fila = -1;
    while (++fila < 4)
    {
        columna = -1;
        while (++columna < 4)
        {
            if (output[fila][columna][0] == '1')
                delete_used_numbers(output, fila, columna);

        }
    }
}

void delete_used_numbers(char ***output, int fila, int columna)
{
    char num;
    int x;
    int y;

    num = table_translator(output, fila, columna);
    x = num - '0';
    y = -1;
    while (++y < 4 && y != fila)
        eliminar(output, num, fila, y);
}*/