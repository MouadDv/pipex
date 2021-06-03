/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 00:43:28 by milmi             #+#    #+#             */
/*   Updated: 2021/06/03 11:31:37 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "libft/libft.h"

typedef struct		s_data
{
    char    *infile;
    int     infd;
    char    **cmd1;
    char    **cmd2;
    char    *outfile;
    int     outfd;
    char    **path;
    char    *pathcmd1;
    char    *pathcmd2;
}					t_data;

typedef struct		s_temp
{
    char    *path;
    char    *cmdpath;
}					t_temp;

#endif
