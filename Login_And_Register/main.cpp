#include <iostream>
#include <fstream>
#include <string>
#include <unistd.h>

using namespace std;

bool isLoggedIN(){
       string username, password, un, pw;

       cout << "Enter Username: ";
       cin >> username;
       sleep(2);
       cout << "Enter Password: ";
       cin >> password;
       sleep(2);

       ifstream read("data\\" + username + ".txt");
       getline(read, un);
       getline(read, pw);

       if(un == username && pw == password){
              return true;
       } else{
              return false;
       }
}
int main(){
       int choice;
       cout << "Welcome to the example login page!!\n";
       cout << "1.Login\n2.Register\n";
       cout << "Enter your choice: ";
       cin >> choice;
       if(choice == 1){
              bool status = isLoggedIN();

              if(!status){
                     cout << "False Login!!" << endl;
                     return 0;
              } else {
                     cout << "Please wait a moment.....";
                     sleep(1);
                     cout <<  "." << endl;
                     sleep(1);
                     cout <<  "." << endl;
                     sleep(1);
                     cout <<  "." << endl;
                     sleep(1);
                     cout <<  "." << endl;
                     sleep(1);
                     cout <<  "." << endl;
                     sleep(1);
                     cout <<  "." << endl;
                     sleep(1);
                     cout << "Successfully Logged in!!";
                     return 0;
                                   }
       } else if(choice == 2){
              string username;
              string password;
              cout << "Select a username: ";
              cin >> username;
              sleep(2);
              cout << "Select a password: ";
              cin >> password;
              sleep(2);

              ofstream file;
              file.open("data\\" + username + ".txt");
              file << username << endl << password;
              file.close();

              main();
       } else{
              cout << "Invalid Input";
       }

}
