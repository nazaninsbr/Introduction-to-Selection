#include <iostream>
#include <string>
#include <stdio.h>
void createFolder()
{
    system("mkdir \"./folderTwo\"");
}
int main()
{
    createFolder();
    return 0;
}