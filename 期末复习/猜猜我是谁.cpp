#include<stdio.h>      
#include<stdlib.h>      
int   main(){      
            char   filename[100];      
            int   line_number;      
            FILE   *file;      
            char   line[1000];      
            int   current_line=0;      
            scanf("%s",filename);      
            scanf("%d",&line_number);      
            file=fopen(filename,"r");      
            if(file==NULL){      
                        printf("File Name Error.\n");      
                        exit(1);      
            }      
            while(fgets(line,sizeof(line),file)){      
                        current_line++;      
                        if(current_line==line_number){      
                                    printf("%s",line);      
                                    if(!(fgets(line,sizeof(line),file)))      
                                    printf("\n");      
                                    fclose(file);      
                                    exit(0);      
                        }      
            }      
            printf("Line No Error.\n");      
            fclose(file);      
            return   0;      
}      
