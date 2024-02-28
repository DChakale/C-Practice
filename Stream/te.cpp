/*read the name of the country from one text file and name of corsponding capital from another text file
the program must display country name and corresponding capital name in output*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout;
    fout.open("Country.txt");
    fout<<"India\n";
    fout<<"Pakistan";
    fout.close();
    fout.open("Capital.txt");
    fout<<"New Delhi \n";
    fout<<"Karachi \n";
    fout.close();
    ifstream fin;
    fin.open("Country.txt");
    char line[80];
    while(fin){
        fin.getline(line, 80);
        cout<<line<<endl;
    }
    fin.close();
    fin.open("Capital.txt");
    while(fin){
        fin.getline(line, 80);
        cout<<line<<endl;
    }
    fin.close();
    return 0;


}