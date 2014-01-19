#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    string str[3];
	int j;
    while (!cin.eof()) {
        getline(cin, str[0]);
        if (!cin) break;
        getline(cin, str[1]);
        getline(cin, str[2]);


            for(j=0;j<=str[0].size();j+=3)
            {
                if(str[0][j]==' ' && str[0][j+1]==' ' && str[0][j+2]==' ' && str[1][j]==' ' && str[1][j+1]==' ' && str[1][j+2]=='|' && str[2][j]==' ' && str[2][j+1]==' ' && str[2][j+2]=='|')
                    printf("1");
                if(str[0][j]==' ' && str[0][j+1]=='_' && str[0][j+2]==' ' && str[1][j]==' ' && str[1][j+1]=='_' && str[1][j+2]=='|' && str[2][j]=='|' && str[2][j+1]=='_' && str[2][j+2]==' ')
                    printf("2");
                if(str[0][j]==' ' && str[0][j+1]=='_' && str[0][j+2]==' ' && str[1][j]==' ' && str[1][j+1]=='_' && str[1][j+2]=='|' && str[2][j]==' ' && str[2][j+1]=='_' && str[2][j+2]=='|')
                    printf("3");
                if(str[0][j]==' ' && str[0][j+1]==' ' && str[0][j+2]==' ' && str[1][j]=='|' && str[1][j+1]=='_' && str[1][j+2]=='|' && str[2][j]==' ' && str[2][j+1]==' ' && str[2][j+2]=='|')
                    printf("4");
                if(str[0][j]==' ' && str[0][j+1]=='_' && str[0][j+2]==' ' && str[1][j]=='|' && str[1][j+1]=='_' && str[1][j+2]==' ' && str[2][j]==' ' && str[2][j+1]=='_' && str[2][j+2]=='|')
                    printf("5");
                if(str[0][j]==' ' && str[0][j+1]=='_' && str[0][j+2]==' ' && str[1][j]=='|' && str[1][j+1]=='_' && str[1][j+2]==' ' && str[2][j]=='|' && str[2][j+1]=='_' && str[2][j+2]=='|')
                    printf("6");
                if(str[0][j]==' ' && str[0][j+1]=='_' && str[0][j+2]==' ' && str[1][j]==' ' && str[1][j+1]==' ' && str[1][j+2]=='|' && str[2][j]==' ' && str[2][j+1]==' ' && str[2][j+2]=='|')
                    printf("7");
                if(str[0][j]==' ' && str[0][j+1]=='_' && str[0][j+2]==' ' && str[1][j]=='|' && str[1][j+1]=='_' && str[1][j+2]=='|' && str[2][j]=='|' && str[2][j+1]=='_' && str[2][j+2]=='|')
                    printf("8");
                if(str[0][j]==' ' && str[0][j+1]=='_' && str[0][j+2]==' ' && str[1][j]=='|' && str[1][j+1]=='_' && str[1][j+2]=='|' && str[2][j]==' ' && str[2][j+1]==' ' && str[2][j+2]=='|')
                    printf("9");
                if(str[0][j]==' ' && str[0][j+1]=='_' && str[0][j+2]==' ' && str[1][j]=='|' && str[1][j+1]==' ' && str[1][j+2]=='|' && str[2][j]=='|' && str[2][j+1]=='_' && str[2][j+2]=='|')
                    printf("0");
            }
            printf("\n");
        }
	

    return 0;
}


