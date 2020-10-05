#include "stdlib.h"
#include "stdio.h"
#include "string.h"

struct client
{
	char Name[50];
	char Id[10];
	float Credit;
	char Address[100];
};

int main(int argc, char const *argv[])
{
	// creating the structure of the client
	struct client client1 = {0};
	strcpy(client1.Name, "Alejandro Andrade");
	strcpy(client1.Id, "00000001");
	client1.Credit = 10000000;
	strcpy(client1.Address, "Avenida Independencia calle Thomas #25421");

	// Printing the information of the client
	printf("Name: %s\n", client1.Name);
	printf("Client Id: %s\n", client1.Id);
	printf("Client Credit: %f\n", client1.Credit);
	printf("Client Adress: %s\n", client1.Address);
	return 0;
}
