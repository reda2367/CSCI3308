//this is my edit for step 14
//last temp

#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>
#include <random>
#include <iomanip>
#include <fstream>
#include <sstream>

using namespace std;

struct Player{
    int year;//probably need to make into a vector
    string teamID;//probably need to make into a vector
    string league;//probably need to make into a vector
    string playerID;
    int salary;//probably need to make into a vector
    string fName;
    string lName;
    int birthYear;
    string birthCountry;
    int weight;
    int height;
    string bats;
    string throws;
    Player *nextYear;
    Player *nextPlayer;
};

int HashSum(Player *key, int tableSize)
{
    int sum = 0;
    string str1 = key->fName;
    string str2 = key->lName;
    string combo = str1 + str2;
    for(int i = 0; i < combo.length(); i++)
    {
        sum = sum + combo[i];
    }
    sum = sum % tableSize;
    return sum;
}

void addToHashTable(Player* p, Player chainTable[])
{
    string b=p->fName+p->lName;
    int t=HashSum(p, 6000);
    if(chainTable[t] == NULL)
    {
        chainTable[t]=p;
    }
    else
    {
        Player *temp=chainTable[t];
        while(temp->nextPlayer!=NULL)
        {

            if(temp->fName==p->fName&&temp->lName==p->lName&&temp->birthYear==play->birthYear)
            {
                while(temp->nextYear!=NULL)
                {
                    temp=temp->nextYear;
                }
                temp-nextYear=p;
                return;
            }
            temp=temp->nextPlayer;
            //searchCounterC++;

        }
        temp->nextPlayer=p;
        //collCounterC++;


int main(){
    Player* chainTable[6000];

    int index = 0;
    int whichSection;
    string line;
    string sectionOfLine;
    ifstream inFile;
    stringstream raw;
    inFile.open("PlayerData.txt");

    if(inFile.fail()) {
        cout << "File unable to be opened." << endl;
    }

    else {
        while(getline(inFile, line, '\n')) {
            raw<<line;
            whichSection = 0;

            while(getline(raw, sectionOfLine, ',')) {
                if(whichSection == 0) {
                    temp.year = atoi(sectionOfLine.c_str());
                }
                else if(whichSection == 1) {
                    temp.teamID = sectionOfLine;
                }
                else if(whichSection == 2) {
                    temp.league = sectionOfLine;
                }
                else if(whichSection == 3) {
                    temp.playerID = sectionOfLine;
                }
                else if(whichSection == 4) {
                    temp.salary = atoi(sectionOfLine.c_str());
                }
                else if(whichSection == 5) {
                        temp.fName = sectionOfLine;
                }
                else if(whichSection == 6) {
                    temp.lName = sectionOfLine;
                }
                else if(whichSection == 7) {
                    temp.birthYear = atoi(sectionOfLine.c_str());
                }
                else if(whichSection == 8) {
                    temp.birthCountry = sectionOfLine;
                }
                else if(whichSection == 9) {
                    temp.weight = atoi(sectionOfLine.c_str());
                }
                else if(whichSection == 10) {
                    temp.height = atoi(sectionOfLine.c_str());;
                }
                else if(whichSection == 11) {
                    temp.bats = sectionOfLine;
                }
                else if(whichSection == 12) {
                    temp.throws = sectionOfLine;
                }

                whichSection++;
            }

            //allThePlayerData[index] = temp;
            addToHashTable(temp, chgaingTable);
            //addToHashTableOpenAddressing(aTble , temp)

            index++;
            raw.str("");
            raw.clear();
        }
    }


    return 0;
}
