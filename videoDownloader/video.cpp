#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){
    system("cls");
    char url[2028];
    char predefinedCommand[] = "youtube-dl --format best --no-check-certificate ";
    cout << "\n Enter video url \n";
    cin >> url;

    // use binary to downoad
    strcat(predefinedCommand,url);
    cout << " \n Downloading .... \n\n";  
    system(predefinedCommand);

    getch();
    return 0;
}