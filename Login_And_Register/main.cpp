#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool isLoggedIN(){
       string username, password, un, pw;

       cout << "Enter Username: ";
       cin >> username;
       cout << "Enter Password: ";
       cin >> password;

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
                     cout <<  "." << endl;
                     cout <<  "." << endl;
                     cout <<  "." << endl;
                     cout <<  "." << endl;
                     cout <<  "." << endl;
                     cout <<  "." << endl;
                     cout << "Successfully Logged in!!";
                     return 0;
                                   }
       } else if(choice == 2){
              string username;
              string password;
              cout << "Select a username: ";
              cin >> username;
              cout << "Select a password: ";
              cin >> password;

              ofstream file;
              file.open("data\\" + username + ".txt");
              file << username << endl << password;
              file.close();

              main();
       } else{
              cout << "Invalid Input";
       }

}
