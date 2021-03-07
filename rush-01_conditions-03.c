/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01_conditions-03.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apico-su <apico-su@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 18:25:53 by apico-su          #+#    #+#             */
/*   Updated: 2021/03/07 18:56:13 by apico-su         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void seguro(char ***output, char num, int fila, int columna);
void posible(char ***output, char num1, int num2, int fila, int columna);
void eliminar(char ***output, char num, int fila, int columna);

