/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oait-si- <oait-si-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 01:11:40 by oait-si-          #+#    #+#             */
/*   Updated: 2025/02/17 01:44:52 by oait-si-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    insertion_sort(int arr[],int len)
{
    int i = 0;
    
    while(i < len)
    {
        int key = arr[i];
        int j = i - 1;
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key; 
        i++;
    }
}
int main()
{
    int arr[] = {7, 8, 9, 0, 15, 11, 111, 455, 10, 15, 4, 0};
    int len = sizeof(arr)/ sizeof(int);
    insertion_sort(arr, len);
    int i = 0;
    while (i < len)
    {
        printf("%d\n", arr[i]);
        i++;
    }
    
}