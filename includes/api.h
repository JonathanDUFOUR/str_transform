/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   api.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 22:36:07 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/16 22:51:06 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef API_H
# define API_H

# define nonull_all			__attribute__((nonnull))
# define nonull(__x, ...)	__attribute__((nonnull(__x, ##__VA_ARGS__)))
# define API				nonull(1)

#endif
