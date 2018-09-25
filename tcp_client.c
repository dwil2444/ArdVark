#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>

int main()
{
  // use an integer to hold the socket descriptor
  // create a socket
  int network_socket;
  network_socket = socket(AF_INET, SOCK_STREAM, 0);
  return 0;
}
