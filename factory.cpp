<<<<<<< HEAD

=======
>>>>>>> 9584a1702510e81e4554aecadf86b508ab95c8ba

#include<iostream>
#include"factory.h"

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

std::string factory::worker::PhoneNumber()
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

void factory::addFurniture(furniture& furniture)
{
	if (this->countFurniture == 0) {
		this->countFurniture++;

	}
}
