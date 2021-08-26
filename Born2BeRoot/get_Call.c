/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_Call.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmonteir <dmonteir@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 15:18:10 by dmonteir          #+#    #+#             */
/*   Updated: 2021/08/20 19:42:13 by dmonteir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_api.h"

char	get_Call (void)
{
	CURL *curl;
	CURLcode res;
	char auth[90] = "Authorization: Bearer ";
	strcat(auth, ID_TOKEN);
	char url[100] = URL_USERS;
	strcat(url, users)


	curl = curl_easy_init();
	curl_global_init(CURL_GLOBAL_DEFAULT);

	if(curl)
	{
		curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "GET");
		curl_easy_setopt(curl, CURLOPT_URL, url);
		struct curl_slist *headers = NULL;
		headers = curl_slist_append(headers, auth);
		curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
		res = curl_easy_perform(curl);
		curl_easy_cleanup(curl);

		if (res != CURLE_OK)
			fprintf(stderr, "Request : %s\n", curl_easy_strerror(res));
		else
			printf("%d", res);
	}
	curl_global_cleanup();
	return (res);
}
