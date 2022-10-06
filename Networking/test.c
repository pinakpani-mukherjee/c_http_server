//
//  test.c
//  HttpServer
//
//  Created by Pinakpani Mukherjee on 2022/10/06.
//

#include <stdio.h>
#include "Server.h"
#include <unistd.h>

void launch(struct Server *server){
    char buffer[30000];
    printf("===== Waiting For Connection =====");
    int address_length = sizeof(server->address);
    int new_socket = accept(server->socket, (struct sockaddr *)&server->address, (socklen_t *)&address_length);
    read(new_socket,buffer,30000);
    printf("%s\n",buffer);
    char *hello = "HTTP/1.1 200 OK\nDate: Mon "
}

int main(){
    struct Server server = server_constructor(AF_INET, SOCK_STREAM, 0, INADDR_ANY, 80, 10, launch(<#struct Server *server#>))
}
