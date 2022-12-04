/* vid 21.1 file handling in c++

Data Persistence:-
		  means exitense of data, means life of data.

	we store data in a variable and life of variable is shorter than life
of program. if we want to make our data more persist than we store this data
in a permanent secondary storage and we do this before ending of program.
we store this data in a file of harddisk. data is inserted and exerted from
file and this is k/n as File Handling.

Streams:-
	 if we want to store data in file then we will open this file and
data is stored in the file from variable in the form of a string of 0 & 1,
this is k/n as input stream.
	 if we transfer data in our variable from a file and this transfer
forms a stream of 0 & 1, this is k/n as in output stream.

and all the function which manages input and output stream is already exist
in a predefined class in C++.We can represent input and output stream by making
objects this class.



				 ios
	     ____________________| |___________________
	    |                                          |
	    |                                          |
	    V                                          V
	  istream --------------   ----------------- ostream
	   |    |	       |    |                 |    |
	   |    |              V    V                 |    |
	   |    |	      iostream                |    |
	   |    V                |                    V    |
	   | ifstream            |                ofstream |
	   |                     |                         |
	   |                     V                         |
	   |		      fstream                      |
	   V                                               V
     istream withassign                      ofstream withassign
	  cin                                    cout


if we want to write something on file then we make object of ofstream and
this represent output stream.
*/

#include<fstream.h>
//#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 ofstream fout;
 fout.open("myfile.dat");
 getch();
 fout<<"hello";
 getch();
 fout.close();
 getch();
}

/*



// vid-21.2 program in which we read content of file and show on o/p screen

#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 ifstream fin;
 char ch;
 fin.open("myfile.dat");
 ch=fin.get();// fin>>ch; //don't shows space
// >> consider space " " as a dilimiter as a data separater
 while(!fin.eof())
// eof used for end of file, if end of file is come then this returns 1.
// but we want to run this loop for not end coming then this fun returns 0
// and this loop become false so write not(!).
{
 cout<<ch;
 ch=fin.get();  // fin>>ch;
}
 fin.close();
 getch();
}



//vid-21.3 File opening modes:-

	* ios::in      -     input/read
	* ios::out     -     output/write
	* ios::app     -     append
	* ios::ate     -     update
	* ios::binary  -     binary


Q- where to write modes?
A- As a second argument of open() function.

Syntax:-

by this we can open in more than one mode
 ofstream fout;
 fout.open("file name",file_opening_mode);
 ifstream fin;
 fin.open("file name",file_opening_mode);
 fstream file;
 file.open("file name",file_opening_mode);


Text mode v/s Binary mode

*Text mode is the default opening mode.
*Binary mode can be specified with ios::binary

eg.
  fout<<"My name is \nSahil;

  in Text Mode- My name is
		Sahil

  in Binary Mode- My name is \nSahil



#include<fstream.h>
#include<iostream.h>
#include<conio.h>
void main()
{
 ofstream fout;
 fout.open("myfile.dat",ios::app|ios::binary|ios::in);
//if we write read/input mode ios::in then there is no mean of this bcz fout
//is a object ofstream, and object of ofstrean can not call input functions

//read fun---> ifstream
//write fun---> ofstream

 getch();
}



// vid-21.4 tellg() and tellp()

A) tellg():-
* Defined in istream class.
* its prototype is
		   - streampos tellg()

* Returns to the position of the current character in the input stream.


B) tellp():-
* Defined in ostream class.
* its prototype is
		  - streampos tellp()

* Returns to the position of the current character in the output stream.





#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
    ifstream fin;
    char ch;
    fin.open("abc.txt");
    int pos;
    pos=fin.tellg();
    cout<<pos;
    fin>>ch;
    pos=fin.tellg();
    cout<<pos;
    fin>>ch;
    pos=fin.tellg(); //tellg tells the position of get pointer
    cout<<pos;
    getch();
}


//now we want to perform writing in the file



#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    char ch;
    fout.open("abc.txt",ios::app);
    int pos;
    pos=fout.tellp(); //tellp() tells the position of put pointer
    cout<<pos;
    fout<<"SAHIL";
    pos=fout.tellp(); //tellp() tells the position of put pointer
    cout<<pos;
    fout.close();
    getch();
}


//if we open the file in append mode then put pointer consider the after position
//as zero position and tells the last position of the new content which we write in
//the file






// vid-21.5 seekg() and seekp()


A) seekg()- by the help of this fun we can point get pointer at any position

*Defined in istream class.
*its prototype is-
	-istream& seekg(streampos pos);
	-istream& seekg(streamoff off,ios_base::seekdir way);

*pos is new absolute position within the stream(relative to the begining).
*off is offset value, relative to the way parameter.
*way values ios_base::beg,ios_base::cur and ios_base::end.



#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("abc.txt");
	cout<<fin.tellg();
	cout<<"\n"<<(char)fin.get();
	cout<<(char)fin.get();
	cout<<"\n"<<fin.tellg();
	fin.seekg(6);
	cout<<"\n"<<fin.tellg();
	cout<<"\n"<<(char)fin.get();
	cout<<"\n"<<fin.tellg();
    fin.seekg(-2,ios_base::end); //-istream& seekg(streamoff off,ios_base::seekdir way);
	cout<<"\n"<<fin.tellg();
	cout<<"\n"<<(char)fin.get();
	getch();
}



B) seekp()- by the help of this fun we can point put pointer at any position

*Defined in ostream class.
*its prototype is-
	-ostream& seekp(streampos pos);
	-ostream& seekp(streamoff off,ios_base::seekdir way);

*pos is new absolute position within the stream(relative to the begining).
*off is offset value, relative to the way parameter.
*way values ios_base::beg,ios_base::cur and ios_base::end.





#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("abc.txt",ios::ate|ios::app);

	cout<<fout.tellp();
	fout.seekp(2,ios_base::beg);
	cout<<fout.tellp();

	fout.close();
	getch();
}
*/