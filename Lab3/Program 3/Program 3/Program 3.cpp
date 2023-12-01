#include <iostream>
enum Color
{
	Black =1,
	White = 2,
	Blue = 3,
	Red = 4,
	Yellow = 5,
	Green = 6
};
struct car
{
	char Make[32];
	char Modle[32];
	Color color;
	int Year;
	int Mileage;
};
void ColorsWords(Color col);
void repaintCar(car* car, Color color);
void CarData(car cararr);
void ColorsMenue(car cararr);
void printCar(car c);
void printCarPointer(car* c);
void addMileage(car* c, int miles);
void CarDataPrint(car cararr[]);
	

int main()
{
	static car cararr[3];

	#pragma region CarFactory
	for (int i = 0; i < 3; i++)
	{
		#pragma region Make

		std::cout << "Make: ";
		std::cin.getline(cararr[i].Make,32);
		
#pragma endregion

		#pragma region Modle

		std::cout << "Modle: ";
		std::cin.getline(cararr[i].Modle, 32);
#pragma endregion

		#pragma region Color

		std::cout << "\t\bColors\n";
		std::cout << "	1) Black\n";
		std::cout << "	2) White\n";
		std::cout << "	3) Blue\n";
		std::cout << "	4) Red\n";
		std::cout << "	5) Yellow\n";
		std::cout << "	6) Green\n";
		std::cout << "\n\nChoice: ";
		int color;
		std::cin >> color;
		Color carcol = (Color)color;
		cararr[i].color = carcol;

		#pragma endregion

		#pragma region Year

		std::cout << "Year: ";
		std::cin >> cararr[i].Year;
		std::cin.clear();
		
#pragma endregion

		#pragma region Mileage

		std::cout << "Mileage: ";
		std::cin >> cararr[i].Mileage;
		std::cin.clear();
		std::cin.ignore(CHAR_MAX, '\n');
#pragma endregion	

		system("CLS");
				
	}
	#pragma endregion

	#pragma region DataDisLoop
	CarDataPrint(cararr);
	system("pause");
	system("CLS");
	#pragma endregion
	
	#pragma region cMenue
	int Choice;
	
	int magicnumber = 1;
	while (magicnumber == 1)
	{
		system("CLS");
		std::cout << "	Menue\n" << std::endl;
		std::cout << "1) Re-paint car\n\n2) Drive\n\n3) Garage\n\n4) exit"<<std::endl;
		std::cin >> Choice;
		Color carcol2;
		int col2;
		switch (Choice)
		{
		case 1:
			int Choicerp;
			system("CLS");
			for (int i = 0; i < 3; i++)
			{
				std::cout << (i+1) << ")   ";
				CarData(cararr[i]);
				std::cout << std::endl;
			}
			std::cout << "\nPick the car you would like to repaint: ";
			std::cin >> Choicerp;
			Choicerp--;

			
			std::cout << "\t\bColors\n";
			std::cout << "	1) Black\n";
			std::cout << "	2) White\n";
			std::cout << "	3) Blue\n";
			std::cout << "	4) Red\n";
			std::cout << "	5) Yellow\n";
			std::cout << "	6) Green\n";
			std::cout << "\n\nChoice: ";
			
			std::cin >> col2;
			carcol2 = (Color)col2;
			repaintCar(&cararr[Choicerp], carcol2);
			std::cin.clear();
			
			break;
		case 2:

			for (int i = 0; i < 3; i++)
			{
				addMileage(&cararr[i], 500);
			}
			std::cout << "You go on a manic driving rampage and rack up 500 miles on all of your cars.";
			system("pause");
			break;
		case 3:
			for (int i = 0; i < 3; i++)
			{
				std::cout << "------------------------ Cars ------------------------";
				CarData(cararr[i]);
				std::cout << std::endl;
				system("pause");
			}

			break;
		case 4:
			magicnumber = 0;
			break;
			
		default:
			break;
		}
	}

	#pragma endregion


}
void ColorsWords(Color col)
{
	switch (col)
	{
	case Black:
		std::cout << "Black";
		break;
	case White:
		std::cout << "White";
		break;
	case Blue:
		std::cout << "Blue";
		break;
	case Red:
		std::cout << "Red";
		break;
	case Yellow:
		std::cout << "Yellow";
		break;
	case Green:
		std::cout << "Green";
		break;
	default:
		std::cout << " ";
		break;
	}
}
void CarData(car cararr)										// this is where the printing hapens 
{

		std::cout << cararr.Year << " ";
		ColorsWords(cararr.color);
		std::cout << " " << cararr.Make << " " << cararr.Modle << " with " << cararr.Mileage << " miles." << std::endl << std::endl;
	
}
void ColorsMenue(car cararr)
{
	std::cout << "\t\bColors\n\n";
	std::cout << "	1) Black\n";
	std::cout << "	2) White\n";
	std::cout << "	3) Blue\n";
	std::cout << "	4) Red\n";
	std::cout << "	5) Yellow\n";
	std::cout << "	6) Green\n";
	std::cout << "\n\nChoice: ";
	int color;
	std::cin >> color;
	Color carcol = (Color)color;
	repaintCar(&cararr, carcol);
	
}
void repaintCar(car* car, Color color)
{	
	car->color = color;
}
void printCar(car c)
{	
		CarData(c);	
}
void printCarPointer(car* c)
{
	std::cout << c->Year << " ";
	ColorsWords(c->color);
	std::cout << " " << c->Make << " " << c->Modle << " with " << c->Mileage << " miles." << std::endl << std::endl;

}
void CarDataPrint(car cararr[])
{ 
	std::cout << "------------------------ Cars ------------------------" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		printCar(cararr[i]);

	}
	std::cout << "------------------------ Cars* ------------------------" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		printCarPointer(&cararr[i]);
	}
}
void addMileage(car* c, int miles)
{
	c->Mileage = miles;
}