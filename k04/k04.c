#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct human_data
{
    int ID;
    int gender;
    double height;
};


int main(void)
{
    int i=0, j=0, input_ID;
    char fname[FILENAME_MAX];
    char buf[256];
    FILE* fp1;
    FILE* fp2;
    struct human_data data[14];
    

    printf("Input the filename of sample height :");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1] = '\0';
    printf("the filename of sample: %s\n",fname);

    fp1 = fopen(fname,"r");
    if(fp1==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }


    printf("Input the filename of sample ID :");
    fgets(fname,sizeof(fname),stdin);
    fname[strlen(fname)-1] = '\0';
    printf("the filename of sample: %s\n",fname);

    fp2 = fopen(fname,"r");
    if(fp2==NULL){
        fputs("File open error\n",stderr);
        exit(EXIT_FAILURE);
    }

    fgets(buf,sizeof(buf),fp1);
    while(fgets(buf,sizeof(buf),fp1) != NULL){
        sscanf(buf,"%d, %lf",&data[i].gender, &data[i].height);
        i++;
    }
    i = 0;

    while(fgets(buf,sizeof(buf),fp2) != NULL){
        sscanf(buf,"%d",&data[i].ID);    
        i++;

    }
    if(fclose(fp1) == EOF){
        fputs("file close error\n",stderr);
        exit(EXIT_FAILURE);
    }

    if(fclose(fp2) == EOF){
        fputs("file close error\n",stderr);
        exit(EXIT_FAILURE);
    }

    printf("Which ID's data do you want? : ");
    scanf("%d", &input_ID);
    for(i=0; i<=13; i++){
        if(input_ID==data[i].ID){
            printf("ID : %d\n", data[i].ID);
            printf("gender : ");
            if(data[i].gender==1){
                printf("Male\n");
            }
            else{
                printf("Female\n");
            }
            printf("height : %f \n", data[i].height);
            j++;
        }
    }
    if(j==0){
        printf("No data\n");
    }


    return 0;

}



