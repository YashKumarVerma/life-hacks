#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

int main(){
    system("cls");
    char url[2028];
    char predefinedCommand[] = "youtube-dl -f bestaudio --audio-format mp3 --no-check-certificate ";
    cout << "\n Enter video url \n";
    cin >> url;

    // use binary to downoad
    strcat(predefinedCommand,url);
    cout << " \n Downloading from : " << url  << "\n\n";  
    system(predefinedCommand);

    getch();
    return 0;
}