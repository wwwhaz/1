#include <stdio.h>
#include <stdlib.h>

#define Num 1000 


void inorder(int BinaryTree[], char data[], int i);

int main() 
{
    int n, i,j, layer = 1,k;
    char key;
    int BinaryTree[10000]; //�ŧi�@�Ӱ}�C�x�s��̭����� 
	char data[10000]; //�ŧi�@�Ӱ}�C�P�_�ӭȬO�_���ŭ� 
	
	for(i = 0; i < 10000; i++) //�N�}�Ctree 1~10000���ȳ]��-1 
		BinaryTree[i] = -1;
	
	for(i = 0; i < 10000; i++) //�N�}�Ctype 1~10000���ȳ]��f
		data[i] = 'f';
	
	BinaryTree[0] = n;
	data[0] = 't';
 while(1)
 {   
	printf("�п�J����");
    scanf("%c",&key);
    switch (key)
	{
	case 'i':
	case 'I':
    	printf("�п�J�`�I�����e�G\n", n);
       	scanf("%d", &n);
       	do{
				if(n < BinaryTree[i])
				{
					if((i + 1) * 2 - 1 >= pow(2, layer)-1)
						layer++;
					i = (i + 1) * 2 - 1;
				}else{
					if((i + 1) * 2 - 1 >= pow(2, layer)-1)
						layer++;
					i = (i + 1) * 2;
				}
			}while(data[i] != 'f');
			
			data[i] = n;
			data[i] = 't';
		
    break;
    case 't':
	case 'T':
		 //�I�s�إߤG���𤧰Ƶ{��
    	printf("Inorder: ");
		inorder(BinaryTree, data, 0); //�I�sinorder��� 
		printf("\n\n");
    
   case 'd':
   case 'D':
    
   case 'q':
   case 'Q':
		printf("End");
		break;
		
	}
}
	
void inorder(int BinaryTree[], char data[], int i)
{
	if(data[(i+1)*2-1] == 't') //L 
		inorder(BinaryTree, data, (i+1)*2-1);
		
	printf("%d ", BinaryTree[i]); //V	
	if(data[(i+1)*2] == 't') //R
		inorder(BinaryTree, data, (i+1)*2);
}





