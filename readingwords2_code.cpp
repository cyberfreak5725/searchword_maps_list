#include<fstream>
#include<map>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
   list<int> line1;
    map<string,list<int> > words;

    
  
    
   
       
            
    ifstream ofile("queries.txt");

         string word;
        while(ofile>> word)
        { 
               ifstream in_file("page_2.txt");
               string line;int track=0;
              while(getline(in_file, line))
                 {
         // Got a line
             stringstream linestream(line);
               track++;
             string  tword;

                  while(linestream >> tword)
                      {   if(tword==word)
                            {
                           line1.push_back(track);
                            } 
                          
                      }
                  
                }
               words.insert(make_pair(word,line1));
              line1.clear();
              in_file.close();
       }
        ofile.close();


ifstream ofile1("queries.txt");
   string w;
 while(ofile1>>w)
{
 list <int> li;
             li=words[w]; 
              
                  if(!li.empty())
                     {
                           for (std::list<int>::iterator it = li.begin(); it != li.end(); it++)
                                 {              cout<<"word : "<<w<<"\n"; 
                                               cout<<"line is :"<< *it <<"\n\n"<<endl;    
                                  }                      

                           
                          
                     } 
                   else
                     {
                         cout<<"word : "<<w<<"\n"; 
                         cout<<"Not found anywhere!!! \n\n"<<endl;
                      }

                                     /*if(flag==0)
                                     {
                                          cout<<"word : "<<word<<"\n"; 
                                      cout<<"WORD NOT FOUND!!\n\n"<<endl;
                                     }*/
        }

    
            ofile1.close();   
            
return 0;
}
