#include<stdio.h>
#define max 10

int stack[max] ;
int top = -1;

void push(){
    if(top == max-1){
        printf("\nStack OverFlow...\n");
    }
    else{
        int ele ;
        printf("\nEnter Element : ");
        scanf("%d" , &ele);
        top++;
        stack[top] = ele ;
    }
}

void pop(){
    if(top == -1){
        printf("\nStack UnderFlow...\n");
    }
    else{
        top--;
    }
}

void peep(){
    printf("\nValue = %d\n",stack[top]);
}

void display(){
    if(top == -1){
        printf("\nStack UnderFlow...\n");
    }
    else{
        printf("Values :");
        for(int i = 0 ; i <= top ; i++){
            printf("\t%d" , stack[i]);
        }
    }
}

int main(){
    
    int choice ;
    
    do{
        printf("\n1 -> Push");
        printf("\n2 -> Pop");
        printf("\n3 -> Peep");
        printf("\n4 -> Display");
        printf("\n0 -> Exit");
        
        printf("\nEnter Choice : ");
        scanf("%d", &choice);
        
        switch (choice){
            case 1 : push(); break;
            case 2 : pop(); break;
            case 3 : peep(); break;
            case 4 : display(); break;
            case 0 : return 0;
            default : printf("Enter Valid Input..\n");
        }
        
    }while(choice != 0);
    
}
