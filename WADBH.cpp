#include <iostream>
#include <conio.h>
#include <string.h>
#include <typeinfo>
using namespace std;

int disconnect()
{
	system("adb disconnect");
	
	return 0;
}
int main()
{
	int adr[5] = {192,168,43,188,5555}; 
string path;
refresh:
system("cls");
cout<< R"(
____    __    ____  __   _______  __            ___       _______  .______  
\   \  /  \  /   / |  | |   ____||  |          /   \     |       \ |   _  \ 
 \   \/    \/   /  |  | |  |__   |  | ______  /  ^  \    |  .--.  ||  |_)  |
  \            /   |  | |   __|  |  ||______|/  /_\  \   |  |  |  ||   _  < 
   \    /\    /    |  | |  |     |  |       /  _____  \  |  '--'  ||  |_)  |
    \__/  \__/     |__| |__|     |__|      /__/     \__\ |_______/ |______/ 
 __    __   _______  __      .______    _______ .______                     
|  |  |  | |   ____||  |     |   _  \  |   ____||   _  \                    
|  |__|  | |  |__   |  |     |  |_)  | |  |__   |  |_)  |                   
|   __   | |   __|  |  |     |   ___/  |   __|  |      /                    
|  |  |  | |  |____ |  `----.|  |      |  |____ |  |\  \----.               
|__|  |__| |_______||_______|| _|      |_______|| _| `._____| 
by Brijrajsinh Parmar              
)"<<'\n';
path = "";
for(int i=0;i<5;i++)
{
	path.append(to_string(adr[i]));
	if(i<3)
	{
		path.append(".");
	}
	else if (i==3)
	{
		path.append(":");	
	}
}
cout<<endl;
cout<<"---------------------------------------------------------------"<<endl;
cout<<" -> Enter the Index to change value \t -> Press C to connect |\n";
cout<<"---------------------------------------------------------------"<<endl;
cout<<"\t 1   2   3  4   5"<<endl;
cout<<"\t"<<path<<endl;
//connect(path);
cout<<" -> ";
	char mode;cin>>mode;
		if(mode == 'c' or mode == 'C')
		{
			system(("adb connect "+ path).c_str());
			cout<<"\n";
			cout<<"\t --------------------------"<<endl;
			cout<<"\t| -> Press D to Disconnect |\n";
			cout<<"\t --------------------------"<<endl;
			cout<<" -> ";
			char next;cin>>next;
			if(next == 'd' or next == 'D')
			{
				disconnect();
				goto refresh;
			}
			else
			{
				cout<<"Enter valid Operation\n";
			}
		}
		else if (mode == '1')
		{
			cout<<"\n\tchange ";
			cout<<adr[0];
			cout<<" to ==> ";
			cin>>adr[0];
			
			goto refresh;
		}
		else if (mode == '2')
		{
			cout<<"\n\tchange ";
			cout<<adr[1];
			cout<<" to ==> ";
			cin>>adr[1];
			
			goto refresh;
		}
		else if (mode == '3')
		{
			cout<<"\n\tchange ";
			cout<<adr[2];
			cout<<" to ==> ";
			cin>>adr[2];
			
			goto refresh;
		}
		else if (mode == '4')
		{
			cout<<"\n\tchange ";
			cout<<adr[3];
			cout<<" to ==> ";
			cin>>adr[3];
			
			goto refresh;
		}
		else if (mode == '5')
		{
			cout<<"\n\tchange ";
			cout<<adr[4];
			cout<<" to ==> ";
			cin>>adr[4];
			
			goto refresh;
		}
		else
		{
			cout<<"enter valid";
			goto refresh;
		}
	return 0;
}