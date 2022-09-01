#include "bengas.h"

//the michael function will be located in bengas h

struct benjamin
{
	char lol[5];
	void (*func)();	
};



int main()
{
	int numberOfBenjis;
	scanf("%d", &numberOfBenjis);



 	struct benjamin* mongoose = malloc(numberOfBenjis*sizeof(struct benjamin));

		
	for(int i = 0; i < numberOfBenjis; i++)
	{
	       mongoose[i].func = michael;
	       strcpy(mongoose[i].lol, "cockj");
	       mongoose[i].func();	       

	}

	free(mongoose);

	return 0;
}
