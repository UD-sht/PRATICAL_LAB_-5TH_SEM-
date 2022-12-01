#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int ec(int k, int m){
	return (k+m)%26;
}

int dc(int k, int c) {
	if ((c-k)>=0)
	{
    	return (c-k)%26;
	}
	else if ((c-k)<0)
	{
    	return 26+(c-k);
	}
}

int key[100];
char *plaintext, *ciphertext;

void get_cipher_key()
{
	printf("Generating random One Time Pad for this instance\n");
	srand(time(0));
	
for (int i = 0; i < 100; i++)
	{
    		key[i]=rand()%25;
	}

	printf("Generation complete, showing the key for this instance\n");
	printf("\t");
	
for (int i = 0; i < 100; i++)
	{
    		printf("%c \t",'a'+key[i]);
	}
	printf("\n");
}

void allocate_memory()
{
    plaintext =(char*)malloc(100*sizeof(char));
    ciphertext=(char*)malloc(100*sizeof(char));   
}

void get_plain_text()
{
    printf("Enter the message to encipher:\n");
    scanf("%s",plaintext);
}

void get_cipher_text()
{
    printf("Enter the ciphertext to decipher:\n");
    scanf("%s",ciphertext);
}

void encipher()
{
	int i = 0;
	char current_alphabet = plaintext[i];
	while (current_alphabet!='\0')
	{
    		if (current_alphabet!=' ')
    		{
        			ciphertext[i] = 'a'+ec(key[i],current_alphabet-'a');
        			i++;
        			current_alphabet=plaintext[i];
    		}
    		else if (current_alphabet==' ')
    		{
        			ciphertext[i] = ' ';
        			i++;
        			current_alphabet=plaintext[i];
    		}
   	 
	}
	printf("Enciphered Successfully!!\n");
}

void decipher()
{
	int i=0;
	char current_alphabet = ciphertext[i];
	while (current_alphabet!='\0')
	{
    		if (current_alphabet!=' ')
    		{
        			plaintext[i]='a'+dc(key[i],current_alphabet-'a');
        			i++;
        			current_alphabet=ciphertext[i];
    		}
    		else if (current_alphabet==' ')
    		{
        			plaintext[i]=' ';
        			i++;
        			current_alphabet=ciphertext[i];
    		}
   	 
	}
	printf("Deciphered Successfully!!\n");
}

void deallocate_memory()
{
    free(plaintext);
    free(ciphertext);
}

void display()
{
    printf("Plaintext --> %s\nCiphertext --> %s\n",plaintext,ciphertext);
}

int main()
{
    get_cipher_key();
    CHOICE:
    int mode;
    printf("The program menu is given below:\n");
    printf("1. Encipher a message.\n");
    printf("2. Decipher a ciphertext.\n");
    printf("3. Quit.\n");

    printf("Enter your choice:\n");
    scanf("%d",&mode);

    switch (mode)
    {
        case 1:
            allocate_memory();
            get_plain_text();
            encipher();
            display();
            deallocate_memory();
            break;
        case 2:
            allocate_memory();
            get_cipher_text();
            decipher();
            display();
            deallocate_memory();
            break;
        case 3:
            return 0;
            break;
    }
    goto CHOICE;
}
