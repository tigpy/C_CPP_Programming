#include<stdio.h>
void namaste();
void bonjour();
void multitable(int n);

int main()
{
    printf("Enter f for french & i for indian::");
    char ch;
    scanf("%c",&ch);
    if(ch == 'i'){
        namaste();
    }else{
        bonjour();
    }
    return 0;
}

void namaste() {
    printf("\n Namaste");
} 
void bonjour(){
    printf("\n BONJOUR");
}

void multitable(int n){
    for(int i=1; 1<=10; i++){
        printf(i*n);
    }
}