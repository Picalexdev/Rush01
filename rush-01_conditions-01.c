/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01_conditions-01.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:00:45 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/07 16:02:56 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void reset_output_table(char ***output);
void num_checker_1(char ***output,char **input,int num);
void seguro(char ***output, char num, int fila, int columna);
void num_checker_2(char ***output,char **input,int num);

void num_checker(char ***output,char **input)
{
    int fila;
    int x;

    x = -1;
    reset_output_table(output);
    while (++x < 4)
    {
        num_checker_1(output, input, x);
        num_checker_2(output, input, x);
        /*num_checker_3(output, input, fila, columna);
        num_checker_4(output, input, fila, columna);
        num_checker_5(output, input, fila, columna);
        num_checker_6(output, input, fila, columna);*/
    }
}

void seguro(char ***output, char num, int fila, int columna)
{
    int x;
    
    x = num - '0';
    output[fila][columna][x] = num;
    output[fila][columna][0] = '1';

}

void num_checker_1(char ***output,char **input,int num)
{
    if (input[0][num] == '1')
        seguro(output, '4', 0, num);
    if (input[1][num] == '1')
        seguro(output, '4', 3, num);
    if (input[2][num] == '1')
        seguro(output, '4', num, 0);
    if (input[3][num] == '1')
        seguro(output, '4', num, 3);
}

void num_checker_2(char ***output,char **input,int num)
{
    if (input[0][num] == '1' && input[1][num] == '2')
        {
            seguro(output, '4', 0, num);
            seguro(output, '3', 3, num);
        }
    if (input[1][num] == '1' && input[0][num] == '2')
        {
            seguro(output, '4', 3, num);
            seguro(output, '3', 0, num);
        }
    if (input[2][num] == '1' && input[3][num] == '2')
        {
            seguro(output, '4', 0, num);
            seguro(output, '3', 3, num);
        }
    if (input[3][num] == '1' && input[2][num] == '2')
        {
            seguro(output, '4', num, 3);
            seguro(output, '3', num, 0);
        }
}