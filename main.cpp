#include<iostream>
#include <conio.h>
#include "factory.h"

int main() {
	setlocale(LC_ALL, "Russian");


	int number;

	factory factory1;

	factory1.open();

	std::string type;
	int width;
	int height;
	int depth;
	std::string color;
	std::string material;
	int cost;

	std::string FIO;
	std::string post;
	std::string address;
	std::string phoneNumber;
	int wages;

	std::string mark;
	std::string model;
	int stateNumber;
	while (1) {

		std::cout << "1 – add\n";
		std::cout << "2 – delete\n";
		std::cout << "3 - print\n";
		std::cout << "4 - change\n";
		std::cout << "9 - exit\n";


		std::cin >> number;
		switch (number)
		{
		case 1:
			system("cls");
			std::cout << "1 – furniture\n";
			std::cout << "2 – worker\n";
			std::cout << "3 - car\n";
			std::cout << "9 - exit\n";
			
			int number2;
			std::cin >> number2;
			switch (number2)
			{
			case 1:
				std::cout << "enter type:";
				std::cin >> type;
				std::cout << "enter width:";
				std::cin >> width;
				std::cout << "enter height:";
				std::cin >> height;
				std::cout << "enter depth:";
				std::cin >> depth;
				std::cout << "enter color:";
				std::cin >> color;
				std::cout << "enter material:";
				std::cin >> material;
				std::cout << "enter cost:";
				std::cin >> cost;
				factory1.addFurniture(type, width, height, depth, color, material, cost);
				break;
			case 2:
				std::cout << "enter FIO:";
				std::cin.ignore(); 
				std::getline(std::cin, FIO);
				std::cout << "enter post:";
				std::cin >> post;
				std::cout << "enter address:";
				std::cin.ignore();
				std::getline(std::cin, address);
				std::cout << "enter phoneNumber:";
				std::cin >> phoneNumber;
				std::cout << "enter wages:";
				std::cin >> wages;
				try{
					factory1.addWorker(FIO, post, address, phoneNumber, wages);
					
				}catch(const std::invalid_argument& e){
					std::cerr << "Ошибка: " << e.what() << std::endl;
				}
				break;
			case 3:
				std::cout << "enter mark:";
				std::cin >> mark;
				std::cout << "enter model:";
				std::cin >> model;
				std::cout << "enter stateNumber:";
				std::cin >> stateNumber;
				factory1.addCar(mark, model, stateNumber);
				break;
			case 9:
				break;
			}
			break;
		case 2:
			system("cls");
			std::cout << "1 – furniture\n";
			std::cout << "2 – worker\n";
			std::cout << "3 - car\n";
			std::cout << "9 - exit\n";
			int number3;
			std::cin >> number3;
			switch (number3) {
			case 1:
				for (int i = 0; i < factory1.getCountFurnitures(); i++) {
					factory1.printFurniture(i);
				}
				std::cout << "enter номер:";
				std::cin >> number;
				factory1.deleteFurniture(number - 1);
				break;
			case 2:
				for (int i = 0; i < factory1.getCountWorkers(); i++) {
					factory1.printWorker(i);
				}
				std::cout << "enter номер:";
				std::cin >> number;
				factory1.deleteWorker(number - 1);
				break;
			case 3:
				for (int i = 0; i < factory1.getCountCars(); i++) {
					factory1.printCar(i);
				}
				std::cout << "enter номер:";
				std::cin >> number;
				factory1.deleteCar(number - 1);
				break;
			case 9:
				break;
			}
			break;
		case 3:
			system("cls");
			std::cout << "1 – furniture\n";
			std::cout << "2 – worker\n";
			std::cout << "3 - car\n";
			std::cout << "4 - all\n";
			std::cout << "9 - exit\n";
			int number4;
			std::cin >> number4;
			switch (number4) {
			case 1:
				for (int i = 0; i < factory1.getCountFurnitures(); i++) {
					factory1.printFurniture(i);
				}
					break;
			case 2:
				for (int i = 0; i < factory1.getCountWorkers(); i++) {
					factory1.printWorker(i);
				}
				break;
			case 3:
				for (int i = 0; i < factory1.getCountCars(); i++) {
					factory1.printCar(i);
				}
				break;
			case 4:
				factory1.printAll();
				break;
			case 9:
				break;
			}
			break;
		case 4:

			system("cls");
			std::cout << "1 – furniture\n";
			std::cout << "2 – worker\n";
			std::cout << "3 - car\n";
			std::cout << "9 - exit\n";

			int number1;
			int number5;
			std::cin >> number5;
			switch (number5)
			{
				int number6;
			case 1:
				for (int i = 0; i < factory1.getCountFurnitures(); i++) {
					factory1.printFurniture(i);
				}
				std::cout << "pick a number:";
				std::cin >> number1;
				number1--;
				system("cls");
				std::cout << "pick a characteristic\n";
				std::cout << "1 – type\n";
				std::cout << "2 – width\n";
				std::cout << "3 - height\n";
				std::cout << "4 – depth\n";
				std::cout << "5 – color\n";
				std::cout << "6 - material\n";
				std::cout << "7 - cost\n";
				std::cout << "9 - exit\n";
				
				std::cin >> number6;
				switch (number6)
				{
				case 1:
					std::cout << "enter type:";
					std::cin >> type;
					factory1.changeFurniture(number6, number1, type, 0, 0, 0, "color", "material", 0);
					break;
				case 2:
					std::cout << "enter width:";
					std::cin >> width;
					factory1.changeFurniture(number6, number1, "type", width, 0, 0, "color", "material", 0);
					break;

				case 3:
					std::cout << "enter height:";
					std::cin >> height;
					factory1.changeFurniture(number6, number1, "type", 0, height, 0, "color", "material", 0);
					break;

				case 4:
					std::cout << "enter depth:";
					std::cin >> depth;
					factory1.changeFurniture(number6, number1, "type", 0, 0, depth, "color", "material", 0);
					break;

				case 5:
					std::cout << "enter color:";
					std::cin >> color;
					factory1.changeFurniture(number6, number1, "type", 0, 0, 0, color, "material", 0);
					break;

				case 6:
					std::cout << "enter material:";
					std::cin >> material;
					factory1.changeFurniture(number6, number1, "type", 0, 0, 0, "color", material, 0);
					break;

				case 7:
					std::cout << "enter cost:";
					std::cin >> cost;
					factory1.changeFurniture(number6, number1, "type", 0, 0, 0, "color", "material", cost);
					break;

				case 9:
					break;
				}

				break;
			case 2:
				for (int i = 0; i < factory1.getCountWorkers(); i++) {
					factory1.printWorker(i);
				}
				std::cout << "pick a number:";
				std::cin >> number1;
				number1--;
				system("cls");
				std::cout << "pick a characteristic\n";
				std::cout << "1 – FIO\n";
				std::cout << "2 – post\n";
				std::cout << "3 - address\n";
				std::cout << "4 – phoneNumber\n";
				std::cout << "5 – wages\n";

				std::cin >> number6;
				switch (number6)
				{
				case 1:
					std::cout << "enter FIO:";
					std::cin >> FIO;
					factory1.changeWorker(number6, number1, FIO, "post", "address", "phoneNumber", 0);
					break;
				case 2:
					std::cout << "enter post:";
					std::cin >> post;
					factory1.changeWorker(number6, number1, "FIO", post, "address", "phoneNumber", 0);
					break;

				case 3:
					std::cout << "enter address:";
					std::cin >> address;
					factory1.changeWorker(number6, number1, "FIO", "post", address, "phoneNumber", 0);
					break;

				case 4:
					std::cout << "enter phoneNumber:";
					std::cin >> phoneNumber;
					factory1.changeWorker(number6, number1, "FIO", "post", "address", phoneNumber, 0);
					break;

				case 5:
					std::cout << "enter wages:";
					std::cin >> wages;
					factory1.changeWorker(number6, number1, "FIO", "post", "address", "phoneNumber", wages);
					break;
				case 9:
					break;
				}
				break;
			case 3:
				for (int i = 0; i < factory1.getCountCars(); i++) {
					factory1.printCar(i);
				}
				std::cout << "pick a number:";
				std::cin >> number1;
				number1--;
				system("cls");
				std::cout << "pick a characteristic\n";
				std::cout << "1 – mark\n";
				std::cout << "2 – model\n";
				std::cout << "3 - stateNumber\n";

				std::cin >> number6;
				switch (number6)
				{
				case 1:
					std::cout << "enter mark:";
					std::cin >> mark;
					factory1.changeCar(number6, number1, mark, "model", 0);
					break;
				case 2:
					std::cout << "enter model:";
					std::cin >> model;
					factory1.changeCar(number6, number1, "mark", model, 0);
					break;

				case 3:
					std::cout << "enter stateNumber:";
					std::cin >> stateNumber;
					factory1.changeCar(number6, number1, "mark", "model", stateNumber);
					break;
				case 9:
					break;
				}
				break;
			}
			break;
		default:
			factory1.safe();
			return 0;
		}
	}
}