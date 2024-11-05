#include <iostream>
#include <string>
#include <fstream>
using namespace std;


void myCp(const string& file1,const string& file2) {
  ifstream sfv(file2, ios::binary);
     if(!sfv) {
       cerr << "file is not regist " << file2 << endl;
     }

  ofstream ofs(file1, ios::binary);
  if (!ofs) {
    cerr << "File is not registered: " << file1 << endl;
  }

     ofs << sfv.rdbuf();

}

int main(int quality, char* qualityv[] ) {
   if (quality != 3) {
     cout << "err";
     return 1;
   }

    string file1 = qualityv[1];
    string file2 = qualityv[2];


    myCp(file1, file2);
   return 0;
}