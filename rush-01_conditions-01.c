/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01_conditions-01.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:00:45 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/07 20:27:06 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void reset_output_table(char ***output);
void num_checker_1(char ***output,char **input,int num);
void num_checker_2(char ***output,char **input,int num);
void num_checker_3(char ***output,char **input,int num);
void num_checker_4(char ***output,char **input,int num);
void num_checker_5(char ***output,char **input,int num);
void num_checker_6(char ***output,char **input,int num);
void num_checker_7(char ***output,char **input,int num);
void num_checker_8(char ***output,char **input,int num);
void pick_used_numbers(char ***output);

void num_checker(char ***output,char **input)
{
    int x;

    x = -1;
    reset_output_table(output);
    while (++x < 4)
    {
        num_checker_1(output, input, x);
        num_checker_7(output, input, x);
        num_checker_8(output, input, x);
        num_checker_2(output, input, x);
        num_checker_3(output, input, x);
        num_checker_4(output, input, x);
        num_checker_5(output, input, x);
        num_checker_6(output, input, x);
        pick_used_numbers(output);
    }
}

void seguro(char ***output, char num, int fila, int columna)
{
    int x;
    int z;
    
    x = num - '0';
    z = 0;
    while (++z < 5)
        output[fila][columna][z] = '0';
    output[fila][columna][x] = num;
    output[fila][columna][0] = '1';

}

void posible(char ***output, char num1, int num2, int fila, int columna)
{
    if (output[fila][columna][0] != '1')
    {
        int x;

        x = -1;
        while (++x < 5)
            output[fila][columna][x] = '0';
        x = num1 - '0';
        output[fila][columna][x] = num1;
        x = num2 - '0';
        output[fila][columna][x] = num2;
    }
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
            seguro(output, '3', 3, num);
    if (input[1][num] == '1' && input[0][num] == '2')
            seguro(output, '3', 0, num);
    if (input[2][num] == '1' && input[3][num] == '2')
            seguro(output, '3', num, 3);
    if (input[3][num] == '1' && input[2][num] == '2')
            seguro(output, '3', num, 0);
}