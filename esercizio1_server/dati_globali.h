/*
 * dati_globali.h
 *
 *  Created on: 19 ott 2016
 *      Author: luciano
 */

#ifndef DATI_GLOBALI_H_
#define DATI_GLOBALI_H_


#if defined WIN32
#include <winsock.h>
#else
#define closesocket close
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#endif
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFERSIZE 512 //Grandezza buffer invio/ricezione
#define QLEN 6 // size of request queue
#define PROTOPORT 10000 // Numero di porta di default

#endif /* DATI_GLOBALI_H_ */
