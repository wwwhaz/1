#include <stdio.h>
#include <stdlib.h>

#define Num 1000 


void inorder(int BinaryTree[], char data[], int i);

int main() 
{
    int n, i,j, layer = 1,k;
    char key;
    int BinaryTree[10000]; //宣告一個陣列儲存樹裡面的值 
	char data[10000]; //宣告一個陣列判斷該值是否為空值 
	
	for(i = 0; i < 10000; i++) //將陣列tree 1~10000的值設為-1 
		BinaryTree[i] = -1;
	
	for(i = 0; i < 10000; i++) //將陣列type 1~10000的值設為f
		data[i] = 'f';
	
	BinaryTree[0] = n;
	data[0] = 't';
 while(1)
 {   
	printf("請輸入指示");
    scanf("%c",&key);
    switch (key)
	{
	case 'i':
	case 'I':
    	printf("請輸入節點的內容：\n", n);
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
		 //呼叫建立二元樹之副程式
    	printf("Inorder: ");
		inorder(BinaryTree, data, 0); //呼叫inorder函數 
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





