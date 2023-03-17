#include<iostream>
#include<stdio.h>
#include<fstream>
#include<string>
#include<cstdlib>
#include<conio.h>

using namespace std;

void menu();
void renameFile(string old, string neww);
void deleteFile(string name);

int op;
int n;
string old, neww;
string name;
string name2;
int main()
{
   menu();

   cout<<"Operation: "<<endl;
   cin>>op;

   switch (op)
   {
   case 1:
       cout<<"Enter the number files you want create: "<<endl;
       cin>>n;

    for(int i = 1; i <= n; i++)
    {
    cout<<"Enter name of file"<< i <<": ";
    cin>>name2;

    ofstream file;
    file.open(name2);
    file.close();
    }
    getch();
    system("cls");
    return main();

    break;

   case 2:
       cout<<"Enter the name of File you want delete: "<<endl;
       cin>>name;
       deleteFile(name);
      
       getch();
       system("cls");
       return main();
    break;

   case  3:
      cout<<"Enter the name of old File: "<<endl;
      cin>>old;
      cout<<"Enter the new name for File: "<<endl;
      cin>>neww;
      renameFile(old,neww);
     
      getch();
      system("cls");
      return main();
    break;
   
   default:
       cout<<"Wrong number!"<<endl;
    break;
   }

    return 0;
}

void menu()
{
  cout<<"****************Menu****************"<<endl;
  cout<<"*      1. Create a File            *"<<endl;
  cout<<"*      2. Delete a File            *"<<endl;
  cout<<"*      3. Rename a File            *"<<endl;
  cout<<"************************************"<<endl;
}
  // create a function for rename File
  void renameFile(string old, string neww) {
    if (rename(old.c_str(), neww.c_str()) != 0) {
      cerr << "Error"<<endl;
    }
  }

  // create a function for delete File
  void deleteFile(string name) {
    if (remove(name.c_str()) != 0) {
      cerr << "Error"<<endl;
    }
  }