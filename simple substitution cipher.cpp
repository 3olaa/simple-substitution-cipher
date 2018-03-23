// FCI - programming 1 -2018 - Assignment 2
// program Name: simple substitution cipher.cpp
// last Modification Date: 28/2/2018
// Author and ID and Group: Ola Sameh El-Sayed  20170165  G7
// Teaching Assistant: Eng.ibrahim Zidan, mohamed atta
// purpose: cipher and decipher a message

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string text,key;
    int choise;
    int counter;
    char alphaupper [26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char alphalower [26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    char cipher [26];
    cout<< "Ahlan ya user ya habibi "<<endl;
    cout << "what do you like to do today? "<<endl;
    while(true){
        counter = 5;
        memset(cipher, 0, 26);
        cout<< "1-cipher a message"<<endl;
        cout<< "2-decipher a message"<<endl;
        cout<< "3-end"<<endl;
        cin>> choise;
        cin.ignore();
        if (choise==1)
        {
            cout<< "please enter a key of 5 unique letters: "<<endl;
            getline(cin,key);

            bool isnotkey=true;
            for (int i=0;i<5;i++)
            {
                cipher[i]=key[i];
            }
            for (int i=0;i<26;i++)
            {
                for (int j=0;j<5;j++)
                {
                    if (alphalower[i]==key[j])
                    {
                        isnotkey=false;
                        break;
                    }
                }
                if (isnotkey==true)
                {
                    cipher[counter]=alphalower[i];
                    counter++;

                }

                isnotkey=true;
            }
            cout<< "please enter the message to cipher: ";
            getline(cin,text);
            for (int i=0;i<26;i++)
            {
                for (int j=0;j<26;j++)
                {
                    if (text[i]==alphaupper[j] || text[i]==alphalower[j])
                    {
                        text[i]=cipher[j];
                        j=0;
                        break;
                    }
                }
            }
            cout<<"the cipher text is: "<<text<<endl;
    }
        else if (choise==2)
        {
            cout<< "please enter a key of 5 unique letters: "<<endl;
            getline(cin,key);
            bool isnotkey=true;
            for (int i=0;i<5;i++)
            {
                cipher[i]=key[i];
            }
            for (int i=0;i<26;i++)
            {
                for (int j=0;j<5;j++)
                {
                    if (alphalower[i]==key[j])
                    {
                        isnotkey=false;
                        break;
                    }
                }
                if (isnotkey==true)
                {
                cipher[counter]=alphalower[i];
                counter++;

                }

                isnotkey=true;
            }
            cout<< "please enter the message to decipher: ";
            getline(cin,text);
            for (int i=0;i<26;i++)
            {
                for (int j=0;j<26;j++)
                {
                    if (text[i]==cipher[j])
                    {
                        text[i]=alphalower[j];
                        j=0;
                        break;
                    }
                }
            }
            cout<<"the decipher text is: "<<text<<endl;

        }
        else if (choise==3){
            cout<< "good bye";
            return 0;
        }
    }
    return 0;
}
