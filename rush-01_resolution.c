/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01_resolution.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 11:24:16 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/07 14:30:15 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void num_checker_1(char ***output,char **input,int fila,int columna);
void seguro(char ***output, char num, int fila, int columna);

void reset_output_table(char ***output)
{
    char ***table;
    int x[3];
    char num;

    x[0] = -1;
    num = '0';
   while (++x[0] < 4)
    {
        x[1] = -1;
        while (++x[1] < 4)
        {
            x[2] = -1;
            while (++x[2] < 5)
            {   
                table[x[0]][x[1]][x[2]] = '0';
                num = table[x[0]][x[1]][x[2]];
                write(1, &num, 1);
            }
        }
    }
}

void num_checker(char ***output,char **input)
{
    int fila;
    int columna;

    columna = -1;
   while (++columna < 4)
    {
        fila = -1;
        while(++fila < 4)
        {
            num_checker_1(output, input, fila, columna);
            /*num_checker_2(output, input, fila, columna);
            num_checker_3(output, input, fila, columna);
            num_checker_4(output, input, fila, columna);
            num_checker_5(output, input, fila, columna);
            num_checker_6(output, input, fila, columna);*/
        }
    }
}

void seguro(char ***output, char num, int fila, int columna)
{
    int x;

    x = -1;
    
    while (++x < 5)
        output[fila][columna][x] == '0';
    if (num == '1')
        output[fila][columna][1] == '1';
    if (num == '2')
        output[fila][columna][2] == '2';
    if (num == '3')
        output[fila][columna][3] == '3';
    if (num == '4')
        output[fila][columna][4] == '4';
    output[fila][columna][0] == '1';

}

void num_checker_1(char ***output,char **input,int fila,int columna)
{
    reset_output_table(output);
    if (input[0][columna] == '1')
    {
        output[0][columna][4] = '1';
        seguro(output, '1', fila, columna);
    }
}