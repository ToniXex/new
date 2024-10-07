//Класс Фабрика хранит данные о мебели, работниках и машинах.
// Для мебели
//определено : тип мебели, габариты(высота, ширина, глубина), цвет, материал,
//стоимость.
// Для работника определено : ФИО, должность, заработная плата,
//адрес проживания, телефон.
// Для машины определено : марка, модель,
//гос.номер.

#include<iostream>
#include"factory.h"

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
	this->phoneNumber = newPhoneNumber
}

void factory::worker::setWages(int newWages)
{
	this->wages = newWages;
}
