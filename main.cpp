#include <iostream>
#include<string.h>
#include<windows.h>
//#include<espeak-ng/speak_lib.h>
#include<bits/stdc++.h>
#include<stdio.h>
#include<cstdlib>
#include<ctime>
using namespace std;



//funtion to greet the user according time
void greetings(){



	time_t now= time(0);
	tm*time = localtime(&now);

	if (time-> tm_hour < 12){
		cout<<"good morning"<<endl;
		string phrase = "Good Morning";
		string command = "espeak \"" +phrase +"\"";
		const char* charcommand=command.c_str();
	    system(charcommand);

	}else if (time-> tm_hour >= 12 && time->tm_hour <= 16){
        cout<< "Good Afternoon Ainab"<<endl;
        string phrase = "Good Afternoon Ainab";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
    }

    else if (time-> tm_hour > 16 && time->tm_hour < 24){
        cout<< "Good Evening Ainab"<<endl;
        string phrase = "Good Evening Ainab";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);
}
}

void datetime(){
    time_t now = time(0);
    char *dt = ctime(&now);
    cout<<"The date and time is "<<endl<<dt<<endl;
}


int main() {

    system("cls");
      cout<<"\t<###################################  AYN-BOT ########################################"<<endl<<endl;

    string password; //to take password
    string command; // to take command from the user

    do
    {
        cout<<"******************"<<endl;
        cout<<"| HELLO I AM AYN-BOT "<<"PLEASE ENTER THE PASSWORD TO CONFIRM YOU ARE AINAB|"<<endl;
        cout<<"******************"<<endl<<endl;
        string phrase = "HELLO I AM AYN-BOT PLEASE ENTER THE PASSWORD TO CONFIRM YOU ARE AINAB";
        string command = "espeak \"" + phrase + "\"";
        const char *charCommand = command.c_str();
        system(charCommand);

        getline(cin,password);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(password=="1234")
        {
            cout<<"\n<**********************************>\n\n";
            greetings();
            do{
                cout<<"\n<********************************>\n\n";
                cout<<endl<<"How can i help you Ainab...."<<endl<<endl;

                string phrase = "How can i help you Ainab";
                string command = "espeak \"" + phrase + "\"";
                const char *charCommand = command.c_str();
                system(charCommand);

                cout<<"Enter your question ===> ";
                getline(cin,command);
                cout<<endl;
                cout<<"Answer to your question is ===> ";

                if(command=="hello" || command=="hi")
                {
                    cout<<"Hello Ainab....."<<endl;
                    string phrase = "Hello Ainab";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }

                 else if(command=="what is the time")
                {

                    datetime();
                }


                else if(command=="who are you" || command=="who is speaking")
                {
                    cout<<"I'm a personal assistant created by AINAB !!!"<<endl;
                    string phrase = "I'm a personal assistant created by Ainab !!!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }


                else if(command=="open notepad")
                {
                    cout<<"openining notepad"<<endl;
                    string phrase = "opening notepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open writepad")
                {
                    cout<<"opening writepad"<<endl;
                    string phrase = "opening writepad";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\write.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open microsoft excel")
                {
                    cout<<"opening Microsoft Excel"<<endl;
                    string phrase = "opening Microsoft Excel";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\Office16\\EXCEL.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open microsoft word")
                {
                    cout<<"opening Microsoft Word"<<endl;
                    string phrase = "opening Microsoft Word";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Program Files\\Microsoft Office\\Office16\\WINWORD.EXE"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="open microsoft paint")
                {
                    cout<<"opening Microsoft Paint"<<endl;
                    string phrase = "opening Microsoft Paint";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Users\\shank\\AppData\\Local\\Temp\\Temp1_mspaint.zip\\mspaint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }

                else if(command=="play music")
                {
                    cout<<"playing music now"<<endl;
                    string phrase = "playing music now";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    mciSendString("open \"despacito_justin_bieber.mp3\" type mpegvideo alias mp3", NULL, 0, NULL);
                    mciSendString ("play mp3", NULL, 0, NULL);
                }

                else if(command=="open google")
                {
                    cout<<"openining google"<<endl;
                    string phrase = "opening google";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }



                else if(command=="open youtube")
                {
                    cout<<"openining YouTube"<<endl;
                    string phrase = "opening youtube";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(command=="close chrome browser")
                {
                    cout<<"closing chrome browser"<<endl;
                    string phrase = "closing chrome browser";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }


                else if(command=="open photo")
                {
                    cout<<"opening photo"<<endl;
                    string phrase = "opening photo";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","C:\\Users\\shank\\Documents\\aynbot\\WhatsApp Image 2021-07-28 at 2.32.51 PM.jpeg",NULL, NULL, SW_NORMAL);
                }


                else if(command=="open pdf")
                {
                    cout<<"opening pdf"<<endl;
                    string phrase = "opening pdf";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","C:\\Users\\shank\\Documents\\aynbot\\The Great Partition The Making of India and Pakistan, New Edition. by Yasmin Khan (z-lib.org).pdf",NULL, NULL, SW_NORMAL);

                }

                else if(command=="open video")
                {
                    cout<<"opening video"<<endl;
                    string phrase = "opening video";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","C:\\Users\\shank\\Documents\\aynbot\\videoplayback.mp4",NULL, NULL, SW_NORMAL);
                }

                else if(command=="bye" || command=="exit")
                {
                    cout<<"Good Bye Ainab, see you soon!"<<endl;
                    string phrase = "Good Bye Ainab, see you soon!";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                    exit(0);
                }



                else
                {
                    cout<<"Sorry could not understand your command please try again !!!"<<endl;
                    string phrase = "Sorry could not understand your command please try again";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }




            }while(1);
        }
        else
                {
                    system("cls");

                    cout<<"\t<###################################  AYN-BOT ########################################"<<endl<<endl;
                    cout << "********" << endl;
                    cout << "X Incorrect Password X" << endl;
                    cout << "********" << endl << endl;

                    string phrase = "Incorrect Password, please enter correct password";
                    string command = "espeak \"" + phrase + "\"";
                    const char *charCommand = command.c_str();
                    system(charCommand);
                }
    } while (1);


    return 0;
}
