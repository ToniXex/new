
#include<iostream>
#include"factory.h"

#include <string>
#include <fstream>

factory::furniture::furniture()
{
	this->type = "";
	this->width = 0;
	this->height = 0;
	this->depth = 0;
	this->color = "";
	this->material = "";
	this->cost = 0;
}

factory::furniture::furniture(std::string type, int width, int height, int depth, std::string color, std::string material, int cost)
{
	this->type = type;
	this->width = width;
	this->height = height;
	this->depth = depth;
	this->color = color;
	this->material = material;
	this->cost = cost;
}

factory::furniture::furniture(furniture& furniture)
{
	this->type = furniture.type;
	this->width = furniture.width;
	this->height = furniture.height;
	this->depth = furniture.depth;
	this->color = furniture.color;
	this->material = furniture.material;
	this->cost = furniture.cost;
}

std::string factory::furniture::getType()
{
	return this->type;
}

std::string factory::furniture::getColor()
{
	return this->color;
}

std::string factory::furniture::getMaterial()
{
	return this->material;
}

int factory::furniture::getWidth()
{
	return this->width;
}

int factory::furniture::getHeight()
{
	return this->height;
}

int factory::furniture::getDepth()
{
	return this->depth;
}

int factory::furniture::getCost()
{
	return this->cost;
}

void factory::furniture::setType(std::string newType)
{
	this->type = newType;
}

void factory::furniture::setColor(std::string newColor)
{
	this->color = newColor;
}

void factory::furniture::setMaterial(std::string newMaterial)
{
	this->material = newMaterial;
}

void factory::furniture::setWidth(int newWidth)
{
	this->width = newWidth;
}

void factory::furniture::setHeight(int newHeight)
{
	this->height = newHeight;
}

void factory::furniture::setDepth(int newDepth)
{
	this->depth = newDepth;
}

void factory::furniture::setCost(int newCost)
{
	this->cost = newCost;
}

void factory::furniture::setDataFurniture(std::string type, int width, int height, int depth, std::string color, std::string material, int cost)
{
	this->type = type;
	this->width = width;
	this->height = height;
	this->depth = depth;
	this->color = color;
	this->material = material;
	this->cost = cost;
}

factory::car::car()
{
	this->mark = "";
	this->model = "";
	this->stateNumber = 0;
}

factory::car::car(std::string mark, std::string model, int stateNumber)
{
	this->mark = mark;
	this->model = model;
	this->stateNumber = stateNumber;
}

factory::car::car(car& car)
{
	this->mark = car.mark;
	this->model = car.model;
	this->stateNumber = car.stateNumber;
}

std::string factory::car::getMark()
{
	return this->mark;
}

std::string factory::car::getModel()
{
	return this->model;
}

int factory::car::getStateNumber()
{
	return this->stateNumber;
}

void factory::car::setMark(std::string newMark)
{
	this->mark = newMark;
}

void factory::car::setModel(std::string newModel)
{
	this->model = newModel;
}

void factory::car::setStateNumber(int newStateNumber)
{
	this->stateNumber = newStateNumber;
}

void factory::car::setDataCar(std::string mark, std::string model, int stateNumber)
{
	this->mark = mark;
	this->model = model;
	this->stateNumber = stateNumber;
}

factory::worker::worker()
{
	this->FIO = "";
	this->post = "";
	this->address = "";
	this->phoneNumber = "";
	this->wages = 0;
}

factory::worker::worker(std::string FIO, std::string post, std::string address, std::string phoneNumber, int wages)
{
	this->FIO = FIO;
	this->post = post;
	this->address = address;
	this->phoneNumber = phoneNumber;
	this->wages = wages;
}

factory::worker::worker(worker& worker)
{
	this->FIO = worker.FIO;
	this->post = worker.post;
	this->address = worker.address;
	this->phoneNumber = worker.phoneNumber;
	this->wages = worker.wages;
}

std::string factory::worker::getFIO()
{
	return FIO;
}

std::string factory::worker::getPost()
{
	return post;
}

std::string factory::worker::getAddress()
{
	return address;
}

std::string factory::worker::getPhoneNumber()
{
	return phoneNumber;
}

int factory::worker::getWages()
{
	return this->wages;
}

void factory::worker::setFIO(std::string newFIO)
{
	this->FIO = newFIO;
}

void factory::worker::setPost(std::string newPost)
{
	this->post = newPost;
}

void factory::worker::setAddress(std::string newAddress)
{
	this->address = newAddress;
}

void factory::worker::setPhoneNumber(std::string newPhoneNumber)
{
	this->phoneNumber = newPhoneNumber;
}

void factory::worker::setWages(int newWages)
{
	this->wages = newWages;
}

factory::factory()
{
	furnitures = nullptr;
	workers = nullptr;
	cars = nullptr;
	countFurniture = 0;
	countWorker = 0;
	countCar = 0;
}

factory::~factory()
{
	delete[] furnitures;
	delete[] workers;
	delete[] cars;
}

int factory::getCountFurnitures()
{
	return this->countFurniture;
}

int factory::getCountWorkers()
{
	return this->countWorker;
}

int factory::getCountCars()
{
	return this->countCar;
}

void factory::addFurniture(std::string type, int width, int height, int depth, std::string color, std::string material, int cost) {
	furniture* newFurniture = new furniture[countFurniture + 1];  // создаем новый массив, на 1 больше

	for (int i = 0; i < countFurniture; i++) {
		newFurniture[i] = furnitures[i];  // копируем старые элементы
	}

	newFurniture[countFurniture].setDataFurniture(type, width, height, depth, color, material, cost);  // добавляем новый элемент
	delete[] furnitures;  // освобождаем старый массив
	furnitures = newFurniture;  // обновляем указатель
	countFurniture++;
}

void factory::worker::setDataWorker(std::string FIO, std::string post, std::string address, std::string phoneNumber, int wages)
{
	this->FIO = FIO;
	this->post = post;
	this->address = address;
	this->phoneNumber = phoneNumber;
	this->wages = wages;
}

void factory::printFurniture(int number)
{
	std::cout << number + 1 << " type " << this->furnitures[number].getType() << "\n";
	std::cout <<"  color " << this->furnitures[number].getColor() << "\n";
	std::cout <<"  cost " << this->furnitures[number].getCost() << "\n";
	std::cout <<"  depth " << this->furnitures[number].getDepth() << "\n";
	std::cout <<"  height " << this->furnitures[number].getHeight() << "\n";
	std::cout <<"  width " << this->furnitures[number].getWidth() << "\n";
	std::cout <<"  material " << this->furnitures[number].getMaterial() << "\n\n";
	
}

void factory::addWorker(std::string FIO, std::string post, std::string address, std::string phoneNumber, int wages)
{
	if (wages > 1000000) {
		throw std::invalid_argument("зп слишком большая");
	}
	worker* newWorker = new worker[countWorker + 1];  // создаем новый массив, на 1 больше

	for (int i = 0; i < countWorker; i++) {
		newWorker[i] = workers[i];  // копируем старые элементы
	}

	newWorker[countWorker].setDataWorker(FIO, post, address, phoneNumber, wages);  // добавляем новый элемент
	delete[] workers;  // освобождаем старый массив
	workers = newWorker;  // обновляем указатель
	countWorker++;
}

void factory::addCar(std::string mark, std::string model, int stateNumber)
{
	car* newCar = new car[countCar + 1];  // создаем новый массив, на 1 больше

	for (int i = 0; i < countCar; i++) {
		newCar[i] = cars[i];  // копируем старые элементы
	}

	newCar[countCar].setDataCar(mark, model, stateNumber);  // добавляем новый элемент
	delete[] cars;  // освобождаем старый массив
	cars = newCar;  // обновляем указатель
	countCar++;
}

void factory::printWorker(int number)
{
	std::cout << number + 1 << " FIO " << this->workers[number].getFIO() << "\n";
	std::cout << "  post " << this->workers[number].getPost() << "\n";
	std::cout << "  address " << this->workers[number].getAddress() << "\n";
	std::cout << "  phoneNumber " << this->workers[number].getPhoneNumber() << "\n";
	std::cout << "  wages " << this->workers[number].getWages() << "\n\n";
}

void factory::printCar(int number)
{
	std::cout << number + 1 << " mark " << this->cars[number].getMark() << "\n";
	std::cout << "  model " << this->cars[number].getModel() << "\n";
	std::cout << "  stateNumber " << this->cars[number].getStateNumber() << "\n\n";

}

void factory::printAll()
{
	std::cout << "furniture\n";
	for(int i = 0; i < this->getCountFurnitures(); i++){
		this->printFurniture(i);
	}
	std::cout << "worker\n";
	for (int i = 0; i < this->getCountWorkers(); i++) {
		this->printWorker(i);
	}
	std::cout << "car\n";
	for (int i = 0; i < this->getCountCars(); i++) {
		this->printCar(i);
	}
}
void factory::changeFurniture(int number, int number1, std::string type, int width, int height, int depth, std::string color, std::string material, int cost)
{
	switch (number) {
	case 1:
		this->furnitures[number1].setType(type);
		return;
	case 2:
		this->furnitures[number1].setWidth(width);
		return;
	case 3:
		this->furnitures[number1].setHeight(height);
		return;
	case 4:
		this->furnitures[number1].setDepth(depth);
		return;
	case 5:
		this->furnitures[number1].setColor(color);
		return;
	case 6:
		this->furnitures[number1].setMaterial(material);
		return;
	case 7:
		this->furnitures[number1].setCost(cost);
		return;
	}
}

void factory::changeWorker(int number, int number1, std::string FIO, std::string post, std::string address, std::string phoneNumber, int wages)
{
	switch (number) {
	case 1:
		this->workers[number1].setFIO(FIO);
		return;
	case 2:
		this->workers[number1].setPost(post);
		return;
	case 3:
		this->workers[number1].setAddress(address);
		return;
	case 4:
		this->workers[number1].setPhoneNumber(phoneNumber);
		return;
	case 5:
		this->workers[number1].setWages(wages);
		return;
	
	}
}

void factory::changeCar(int number, int number1, std::string mark, std::string model, int stateNumber)
{
	switch (number) {
	case 1:
		this->cars[number1].setMark(mark);
		return;
	case 2:
		this->cars[number1].setModel(model);
		return;
	case 3:
		this->cars[number1].setStateNumber(stateNumber);
		return;
	}
}

void factory::deleteFurniture(int number)
{
	this->countFurniture--;
	furniture* newFurnitures = new furniture[countFurniture];
	int j = 0;
	for (int i = 0; i < countFurniture + 1; i++) {
		if(i != number){
			newFurnitures[j].setDataFurniture(this->furnitures[i].getType(), this->furnitures[i].getWidth(), this->furnitures[i].getHeight(), this->furnitures[i].getDepth(), this->furnitures[i].getColor(), this->furnitures[i].getMaterial(), this->furnitures[i].getCost());
			j++;
		}
	}
	this->furnitures = newFurnitures;
}

void factory::deleteWorker(int number)
{
	this->countWorker--;
	worker* newWorkers = new worker[countWorker];
	int j = 0;
	for (int i = 0; i < countWorker + 1; i++) {
		if (i != number) {
			newWorkers[j].setDataWorker(this->workers[i].getFIO(), this->workers[i].getPost(), this->workers[i].getAddress(),this->workers[i].getPhoneNumber(), this->workers[i].getWages());
			j++;
		}
	}
	this->workers = newWorkers;
}

void factory::deleteCar(int number)
{
	this->countCar--;
	car* newCars = new car[countCar];
	int j = 0;
	for (int i = 0; i < countCar + 1; i++) {
		if (i != number) {
			newCars[j].setDataCar(this->cars[i].getMark(), this->cars[i].getModel(), this->cars[i].getStateNumber());
			j++;
		}
	}
	this->cars = newCars;
}

void factory::safe()
{
	std::ofstream out;
	out.open("save.txt");
	out << countFurniture << "\n";
	if (this->countFurniture != 0) {
		for (int i = 0; i < countFurniture; i++) {
			out << this->furnitures[i].getType() << "\n";
			out << this->furnitures[i].getColor() << "\n";
			out << this->furnitures[i].getCost() << "\n";
			out << this->furnitures[i].getDepth() << "\n";
			out << this->furnitures[i].getHeight() << "\n";
			out << this->furnitures[i].getMaterial() << "\n";
			out << this->furnitures[i].getWidth() << "\n";
		}
	}
	
	out << countWorker << "\n";
	if (this->countWorker != 0) {
		for (int i = 0; i < countWorker; i++) {
			out << this->workers[i].getAddress() << "\n";
			out << this->workers[i].getFIO() << "\n";
			out << this->workers[i].getPhoneNumber() << "\n";
			out << this->workers[i].getPost() << "\n";
			out << this->workers[i].getWages() << "\n";
		}
	}
	
	out << countCar << "\n";
	if (this->countCar != 0) {
		for (int i = 0; i < countCar; i++) {
			out << this->cars[i].getMark() << "\n";
			out << this->cars[i].getModel() << "\n";
			out << this->cars[i].getStateNumber() << "\n";
		}
	}
}

void factory::open()
{
	std::string line;
	
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

	std::ifstream in("save.txt"); 
	if (in.is_open())
	{
		int i;
		std::getline(in, line);
		int countF = std::stoi(line);
		for (i = 0; i < countF; i++)
		{
			std::getline(in, type);
			std::getline(in, color);
			std::getline(in, line);
			cost = std::stoi(line);
			std::getline(in, line);
			depth = std::stoi(line);
			std::getline(in, line);
			height = std::stoi(line);
			std::getline(in, material);
			std::getline(in, line);
			width = std::stoi(line);
			this->addFurniture(type, width, height, depth, color, material, cost);

		}

		std::getline(in, line);
		int countW = std::stoi(line);
		for (i = 0; i < countW; i++)
		{
			std::getline(in, address);
			std::getline(in, FIO);
			std::getline(in, phoneNumber);
			std::getline(in, post);

			std::getline(in, line);
			wages = std::stoi(line);
			this->addWorker(FIO, post, address, phoneNumber, wages);
		}
		
		std::getline(in, line);
		int countC = std::stoi(line);
		for (i = 0; i < countC; i++)
		{
			std::getline(in, mark);
			std::getline(in, model);
			std::getline(in, line);
			stateNumber = std::stoi(line);
			this->addCar(mark, model, stateNumber);
		}
	}
	in.close();

}
