#include<fstream>
#include<map>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ifstream in_file("page_2.txt");
   list<int> line1;
   int track=0;
    map<string,list<int> > words;

    
  string line;
   while(getline(in_file, line))
    {
         // Got a line
         stringstream linestream(line);
          track++;
         string  tword;

         while(linestream >> tword)
         {
            line1.push_back(track);
             words.insert(make_pair(tword,line1));
         }
    
    }
     in_file.close();
    
   
       
            
    ifstream ofile("queries.txt");

         string word;
        while(ofile>> word)
        {
              int flag=0;
           for (map<string,list<int> >::iterator it = words.begin();it != words.end();++it)
                     {
                                if((it->first).compare(word) == 0)
                                       {
                                     cout<<"word : "<<word<<"\n";
                                        cout<<"line is :"<<it->second.back()<<"\n\n";
                                            flag=1;break;
                                         }
                                   
                        }

                                     /*if(flag==0)
                                     {
                                          cout<<"word : "<<word<<"\n"; 
                                      cout<<"WORD NOT FOUND!!\n\n"<<endl;
                                     }*/
        }
    
            ofile.close();   
            
return 0;
}
