/*
 * send.h
 *
 *  Created on: 19 ott 2016
 *      Author: luciano
 */

#ifndef SENDRECEIVE_H_
#define SENDRECEIVE_H_

int send_string(char *string, int Ssocket, int stringLen, struct sockaddr_in *cad, unsigned int cadSize);
int receive_string(int socket, char buf[BUFFERSIZE], struct sockaddr_in *cad, unsigned int *cadSize);
int send_int(int intToSend, int socket, struct sockaddr_in *cad, unsigned int cadSize);
int receive_int(int socket, int *receivedInt, struct sockaddr_in *cad, unsigned int *cadSize);

#endif /* SENDRECEIVE_H_ */
