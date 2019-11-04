#include<iostream>
#include<string>

using namespace std;

int main()
{	
	cout << "Enter four strings: " << endl;	

	string text_input1 = "";
	cin >> text_input1;

	string text_input2 = "";
	cin >> text_input2;

	string text_input3 = "";
	cin >> text_input3;

	string text_input4 = "";
	cin >> text_input4;

	string text[] = { text_input1, text_input2, text_input3, text_input4 };

		
	for(int i = 0; i <= 3; i += 1)
 	{
		string current_text = text[i];
	
		for(int j = 0; j <= 3; j++)
		{
	
			if(current_text > text[j]) 
			{	
				string temp_text = text[i];
				text[i]  = text[j];
				text[j] = temp_text;
			}
		}
	}

	cout << "Descending order: " << endl;

	for(int i = 0; i <= 3; i++) 
	{	
		cout << text[i] << endl;
	}

	return 0;


}
