/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frontend.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taemkim <taemkim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 14:39:27 by taemkim           #+#    #+#             */
/*   Updated: 2021/06/16 00:11:38 by taemkim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRONTEND_H
# define FRONTEND_H

# include "structs/structs.h"
# include "settings.h"

# define TRANS_COLOR		0x00000001

# define WALL_COLOR			0x00AAAAAA
# define WALL_SIDE_COLOR	0x00888888

# define ROOF_COLOR			0x00000000
# define FLOOR_COLOR		0x009C9C9C
# define BMP_HEADER_SIZE	54
# define BMP_DPI			72

# define RGB_RED		0xFF0000
# define RGB_GREEN		0x008000
# define RGB_BLUE		0x0000FF
# define RGB_WHITE		0xFFFFFF
# define RGB_YELLOW		0xFFFF00

/*
** IN PLACE MODIFICATIONS
*/

void	flip_img(t_data *data);
void	reverse_img(t_data *data);
int		write_bmp(char *path, t_data *data);

/*
** Useful graphic functions.
*/

void	draw_text(t_texture *text, t_data *img, int x0, int y0);
int		create_rgb(unsigned char r, unsigned char g, unsigned char b)
 __attribute__((pure));
void	my_mlx_pixel_put(t_data *img, int x, int y, int color)
 __attribute__((hot));
int		add_shade(double dist, int color) __attribute__((pure));

/*
** CUB3D specific functions
*/

void	draw_col(t_vars *vars, t_drawer *draw);
void	init_drawer(t_drawer *draw, t_ray *ray, int text_height);
void	draw_scene(t_vars *vars);
void	draw_text(t_texture *text, t_data *img, int x0, int y0);
void	ft_minimap(t_vars *vars);

#endif
