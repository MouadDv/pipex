/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: milmi <milmi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/10 00:43:28 by milmi             #+#    #+#             */
/*   Updated: 2021/06/03 11:39:21 by milmi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void    free_double(char **mem)
{
    int i;

    i = 0;
    while (mem[i])
    {
        free(mem[i]);
        i++;
    }
    free(mem);
}

void    free_temp(t_temp *temp)
{
    free(temp->path);
    free(temp->cmdpath);
    free(temp);
}



int     check_cmd(char **pathcmd, t_data *data)
{
    t_temp  *temp;
    int     cmd1fd;
    int     i;

    i = 0;
    temp = malloc(sizeof(t_temp));
    while (data->path[i])
    {
        temp->path = ft_strjoin(data->path[i], "/");
        temp->cmdpath = ft_strjoin(temp->path, data->cmd1[0]);
        cmd1fd = open(temp->cmdpath, O_RDONLY);
        if (cmd1fd > 0)
        {
            *pathcmd = ft_strdup(temp->cmdpath);
            free_temp(temp);
            return (1);
        }
        i++;
    }
    free_temp(temp);
    return (0);
}

int     check_data(t_data *data)
{
    int     infd;
    int     outfd;

    data->infd = open(data->infile, O_RDONLY);
    if(data->infd < 0)
        return (1);
    data->outfd = open(data->outfile, O_WRONLY);
    if(data->outfd < 0)
        return (1);
    if (!check_cmd(&data->pathcmd1, data))
        return (1);
    if (!check_cmd(&data->pathcmd2, data))
        return (1);
    return (0);
}

char    *find_path(char **envp)
{
    char    **path;
    char    *ret;
    int i;

    i = 0;
    while (envp[i])
    {
        path = ft_split(envp[i], '=');
        if (!ft_strncmp("PATH", path[0], 5))
        {
            ret = ft_strdup(path[1]);
            free_double(path);
            return (ret);
        }
        i++;
        free_double(path);
    }
    return (NULL);
}

int    parse_data(t_data **data, char **argv, char **envp)
{
    char    *pathenv;
    
    (*data)->infile = ft_strdup(argv[1]);
    (*data)->cmd1 = ft_split(ft_strdup(argv[2]), ' ');
    (*data)->cmd2 = ft_split(ft_strdup(argv[3]), ' ');
    (*data)->outfile = ft_strdup(argv[4]);
    pathenv = find_path(envp);
    if (!pathenv)
        return (0);
    (*data)->path = ft_split(pathenv, ':');
    return (1);
}

void    free_struct(t_data **data)
{
    free((*data)->pathcmd1);
    free((*data)->pathcmd2);
}

int     main(int argc, char **argv, char **envp)
{
    t_data  *data;

    if (argc == 5)
    {
        data = malloc(sizeof(t_data));
        if (!parse_data(&data, argv, envp))
            return (1);
        if (check_data(data))
            return (1);
        free_struct(&data);
        // system("leaks a.out");
    }
    return (0);
}