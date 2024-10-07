
#pragma once

#include <string>


class factory {	
private:
	class furniture {
	private:
		std::string type;
		int width;
		int height;
		int depth;
		std::string color;
		std::string material;
		int cost;
	public:
		std::string getType();
		std::string getColor();
		std::string getMaterial();
		int getWidth();
		int getHeight();
		int getDepth();
		int getCost();

		void setType(std::string newType);
		void setColor(std::string newColor);
		void setMaterial(std::string newMaterial);
		void setWidth(int newWidth);
		void setHeight(int newHeight);
		void setDepth(int newDepth);
		void setCost(int newCost);
		
	};

	class worker {
	private:
		std::string FIO;
		std::string post;
		std::string address;
		std::string phoneNumber;
		int wages;
	public:
		std::string getFIO();
		std::string getPost();
		std::string getAddress();
		std::string PhoneNumber();
		int getWages();

		void setFIO(std::string newFIO);
		void setPost(std::string newPost);
		void setAddress(std::string newAddress);
		void setPhoneNumber(std::string newPhoneNumber);
		void setWages(int newWages);
	};

	class car {
	private:
		std::string mark;
		std::string model;
		int stateNumber;
	public:
		std::string getMark();
		std::string getModel();
		int getStateNumber();

		void setMark(std::string newMark);
		void setModel(std::string newModel);
		void setStateNumber(int newStateNumber);
	};

	furniture* furnitures;
	worker* workers;
	car* cars;
};