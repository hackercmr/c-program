#include  <stdio.h>
#include <stdlib.h>
#include <dirent.h>
int main(int argc ,char *argv[]){
char buff[100];
DIR *dirp;
struct dirent *dptr;

printf("Enter the directory name");
scanf("%s" , buff);
if((dirp = opendir(buff)) == NULL){
printf("the given directory doesnt exist.\n");
exit(1);
}
while((dptr = readdir(dirp)) != NULL){
printf("%s\n" , dptr->d_name);
}
closedir(dirp);
return 0;
}
