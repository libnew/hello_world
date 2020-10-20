 #include<stdio.h>  
#include<stdlib.h>  

struct s1{
        union u{
                int i;
        };
        struct ss1{
                int j;
        };
};
int main(void){  
	 struct s1 sVal1;
    printf("sizeof %d\r\n",sizeof(sVal1));  
    system("pause");  
    return 0;  
} 