#include<stdio.h>
#include<conio.h>
#define max 10
int pri(char c){


    switch(c){


        case '^':
            return 3;
        case '*':
        case '/':
        case '%':
          return 2;
        case '+':
        case '-':
          return 1;
    }

    return 0;
}
int main(){

    char ch;
    char in(max), st[max] , pos[max];
    int top = -1 , i , j=0;
    clrscr();
    printf("Enter the Infix Expression");
    scanf("%s" , in);
    top++;
    st[top] = '-';
    for(i =0;in[i]!='\0';i++){

        ch = in[i];
        if(ch=='+'||ch=='*'||ch=='/'||ch=='%'||ch=='^'){

            if(pri(st[top]>pri(ch))){


                pos[j]=st[top];
                j++;
                top--;
            }
            top++;
            st[top]=ch;

        }
        else if (ch=='('){

            top++;
            st[top]=ch;

        }
        else if (ch==')'){


            while(st[top]!='('){


                pos[j]=st[top];
                j++;
                top--;
            }
            top--;
        }
        else{

            pos[j]=ch;
            j++;
        }
    }
    while(st[top]!='-'){

        pos[j]=st[top];
        top--;
        j++;
    }
    pos[j]='\0';
    for(i=0;pos[i]!='\0';i++){

        printf("%c", pos[i]);

    }
    getch();


}