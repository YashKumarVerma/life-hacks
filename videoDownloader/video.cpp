#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;

int main()
{
    char url[2048];

    cout << "\n\n";
    cout << "/-----------------------------------------------\\" << endl;
    cout << "|                                               |" << endl;
    cout << "|                                               |" << endl;
    cout << "| Youtube Video Downloader                      |" << endl;
    cout << "|                                               |" << endl;
    cout << "| - by Yash Kumar Verma                         |" << endl;
    cout << "\\-----------------------------------------------/" << endl << "\n\n";
    cout << "Enter url of video : ";
    cin  >> url;
    cout << "\n\n\n";
    
    char command[] = "youtube-dl --format best --no-check-certificate --write-sub  ";
    strcat(command,url);
    system(command);

    getch();
    return 0;
}