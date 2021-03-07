/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01_conditions-02.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 16:20:05 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/07 17:25:38 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void seguro(char ***output, char num, int fila, int columna);
void posible(char ***output, char num1, int num2, int fila, int columna);

void eliminar(char ***output, char num, int fila, int columna)
{
    int x;
    
    x = num - '0';
    output[fila][columna][x] = '0';
}

void num_checker_3(char ***output,char **input,int num)
{
    if (input[0][num] == '2' && input[1][num] == '2')
            eliminar(output, '4', 0, num);
            eliminar(output, '4', 3, num);
    if (input[2][num] == '2' && input[3][num] == '2')
            eliminar(output, '4', num, 0);
            eliminar(output, '4', num, 3);
}

void num_checker_4(char ***output,char **input,int num)
{
    if (input[0][num] == '1' && input[1][num] == '3')
            posible(output, '1', '2', 3, num);
    if (input[1][num] == '1' && input[0][num] == '3')
        posible(output, '1', '2', 0, num);
    if (input[2][num] == '1' && input[3][num] == '3')
            posible(output, '1', '2', num, 3);
    if (input[3][num] == '1' && input[2][num] == '3')
            posible(output, '1', '2', num, 0);
}

void num_checker_5(char ***output,char **input,int num)
{
    if (input[0][num] == '2' && input[1][num] == '3')
            posible(output, '1', '2', 3, num);
    if (input[1][num] == '2' && input[0][num] == '3')
            posible(output, '1', '2', 0, num);
    if (input[2][num] == '2' && input[3][num] == '3')
            posible(output, '1', '2', num, 3);
    if (input[3][num] == '2' && input[2][num] == '3')
            posible(output, '1', '2', num, 0);
}

void num_checker_6(char ***output,char **input,int num)
{
    if (input[0][num] == '2' && input[1][num] == '3')
            eliminar(output, '4', 0, num);
    if (input[1][num] == '2' && input[0][num] == '3')
            eliminar(output, '4', 3, num);
    if (input[2][num] == '2' && input[3][num] == '3')
            eliminar(output, '4', num, 0);
    if (input[3][num] == '2' && input[2][num] == '3')
            eliminar(output, '4', num, 3);
}

