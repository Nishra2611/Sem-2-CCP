#include<iostream>
#include<fstream>
#include<sstream>
using namespace std;
int main()
{
    ifstream file("file.txt");
    if(!file)
        {cout<<"File does not exist";
        return 1;
        }
        string line;
        int lines=0,words=0,character=0;
        while(getline(file,line))
              {
                  lines++;
                  character+=line.length();
                  stringstream ss(line);
                  string w;
                  while(ss>>w)
                    {
                        words++;

                    }
              }
        file.close();
                    cout<<"No. of lines "<<lines<<endl;
                    cout<<"No. of words"<<words<<endl;
                    cout<<"No. of character"<<character<<endl;
                    return 0;
}
