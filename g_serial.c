#include <stdio.h>
#include <stdlib.h>

int main (int argc, char ** argv)  {
	int nr;

	if(argc != 4){
		printf("Usage:%s filename %s\n",argv[0],argv[1]);
		return;
	}
	else{
		FILE *f = fopen(argv[1],"r");
		char *c = argv[2];

		nr = atoi(c);
		if(f == 0){
			printf("Could not open file.\n");
		}
		else{
			//N = atoi(argv[2]);
			//sscanf(argv[2],"%d",&nr);
			printf("Nr= \n",nr);
		}
		printf("Hello World\n");
		
		return 0;
	}
}