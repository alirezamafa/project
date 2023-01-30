#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/stat.h>
#define  hal 1
#define  no 0
      void createfile(char *mysit);

       int main(){
        mkdir("root",0777);
        char input[1000];
        char input2[1000];
        char address[1000];
        while (1)
        {
        scanf("%s",input);
        if(strcmp(input,"exit")==0){
            break;
            return;
        }          
        else if(strcmp(input,"createfile")==0){
            scanf("%s",input2);
            if(strcmp(input2,"--file")==0){
                scanf("%s",address);
                createfile(address);
            }
        } 
        }
        

        
        
        return 0;
       }