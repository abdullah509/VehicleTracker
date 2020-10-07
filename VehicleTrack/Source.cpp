#include <iostream>
#include <string>
#include <fstream>
#include <vector> 
#include <ctime>
#include <time.h>
#pragma warning(disable : 4996)  //To turn off the warning within a file //allows us to use localtime 

using namespace std;
string transport;
fstream file;
string overwrite;
string Review;

class vehicle
{
public:
	//string licensePlate;
	virtual void print()	//Virtual means function may be overwritten
	{
		cout << "Please enter the vehicle that you have. (Car, Van, Lorry or Motorbike)" << endl;
		cin >> transport;
		//cout << "Please enter in your License plate?" << endl;
		//cin >> licensePlate;
	};

	virtual void review()
	{
		//allows us to be able to display the users answer to
		//the questions about there chosen vehicle on the console
	}

	virtual void saveDetails()
	{
		//Allows us to save the details to the txt file
	}

};

class car : public vehicle	//inherited class
{
public:
	//Relevant information for the vehicle
	int doors;
	int windows;
	int weight;
	string licensePlate;
	void print()
	{
		cout << "This is a car" << endl;
		cout << "Please enter your license plate" << endl;
		cin >> licensePlate;
		cout << "How many doors does this vehicle have?: " << endl;		//Asking the user questions about the car
		cin >> doors;
		cout << "How many windows does this vehicle have?: " << endl;
		cin >> windows;
		cout << "What is the weight of this vehicle?(Kg)" << endl;
		cin >> weight;

	};
	void review()
	{
		cout << "*******************" << endl;
		cout << "Car:" << endl;
		cout << "This vehicle has: " << doors << " doors" << endl;
		cout << "This vehicle has: " << windows << " windows" << endl;
		cout << "This vehicle weighs: " << weight << " Kg" << endl;
		cout << "Your license Plate is: " << licensePlate << endl;
		//This will display on the console if the user wants to review the info they entered
	}
	void saveDetails()
	{
		if (overwrite == "yes")
		{
			file << "*******************" << endl;
			file << "Car:" << endl;
			file << "This vehicle has: " << doors << " doors" << endl;	//if the user wants to overwrite info then that info will be saved to a file
			file << "This vehicle has: " << windows << " windows" << endl;
			file << "This vehicle weighs: " << weight << " Kg" << endl;
			file << "License plate: " << licensePlate << endl;
		}
		else
		{
			file << "*******************" << endl;
			file << "Car:" << endl;
			file << "This vehicle has: " << doors << " doors" << endl;	//if not then the original info will be saved to a file
			file << "This vehicle has: " << windows << " windows" << endl;
			file << "This vehicle weighs: " << weight << " Kg" << endl;
			file << "License plate: " << licensePlate << endl;

		}
	}

};

class lorry : public vehicle
{
public:
	string licensePlate;
	int doors;
	float weight;
	int sideMirrors;

	void print()
	{
		cout << "This is a Lorry" << endl;
		cout << "Please enter your license plate" << endl;
		cin >> licensePlate;
		cout << "How many doors does the vehicle have?: " << endl;
		cin >> doors;
		cout << "What is the weight of this vehicle?(Kg): " << endl;
		cin >> weight;
		cout << "How many side mirrors does the vehicle have?:" << endl;
		cin >> sideMirrors;
	};
	void review()
	{
		cout << "This vehicle has: " << doors << " doors" << endl;
		cout << "This vehicle weighs: " << weight << " Kg" << endl;
		cout << "This vehicle has: " << sideMirrors << " side mirrors" << endl;
		cout << "License plate: " << licensePlate << endl;
	}
	void saveDetails()
	{
		if (overwrite == "yes")
		{
			file << "*******************" << endl;
			file << "Lorry:" << endl;
			file << "This vehicle has: " << doors << " doors" << endl;
			file << "This vehicle weighs: " << weight << " Kg" << endl;
			file << "This vehicle has: " << sideMirrors << " side mirrors" << endl;
			file << "License plate: " << licensePlate << endl;
		}
		else
		{
			file << "*******************" << endl;
			file << "Lorry:" << endl;
			file << "This vehicle has: " << doors << " doors" << endl;
			file << "This vehicle weighs: " << weight << " Kg" << endl;
			file << "This vehicle has: " << sideMirrors << " side mirrors" << endl;
			file << "License plate: " << licensePlate << endl;
		}
	}
};

class van : public vehicle
{
public:
	string licensePlate;
	int windows;
	int doors;
	int weight;


	void print()
	{
		cout << "This is a Van" << endl;
		cout << "Please enter your license plate" << endl;
		cin >> licensePlate;
		cout << "How many windows does the vehicle have?" << endl;
		cin >> windows;
		cout << "How many doors does this vehicle have?" << endl;
		cin >> doors;
		cout << "what is the weight of this vehicle?(Kg)" << endl;
		cin >> weight;
	};
	void review()
	{
		cout << "This vehicle has: " << windows << " windows" << endl;
		cout << "This vehicle has: " << doors << " doors" << endl;
		cout << "This Vehicle weighs: " << weight << " Kg" << endl;
		cout << "License plate: " << licensePlate << endl;
	}
	void saveDetails()
	{
		if (overwrite == "yes")
		{
			file << "*******************" << endl;
			file << "Van:" << endl;
			file << "This vehicle has: " << windows << " windows" << endl;
			file << "This vehicle has: " << doors << " doors" << endl;
			file << "This vehicle weighs: " << weight << " Kg" << endl;
			file << "License plate: " << licensePlate << endl;
		}
		else
		{
			file << "*******************" << endl;
			file << "Van:" << endl;
			file << "This vehicle allows: " << windows << " windows" << endl;
			file << "This vehicle has: " << doors << " doors" << endl;
			file << "This vehicle weighs: " << weight << " Kg" << endl;
			file << "License plate: " << licensePlate << endl;

		}
	}
};

class motorbike : public vehicle
{
public:
	string licensePlate;
	int passengers;
	int wheels;
	int weight;

	void print()
	{
		cout << "Please enter your license plate" << endl;
		cin >> licensePlate;
		cout << "This is a motorbike" << endl;
		cout << "how many passangers does this vehicle allow?" << endl;
		cin >> passengers;
		cout << "what is the weight of this vehicle?(Kg)" << endl;
		cin >> weight;
		cout << "How many wheels does this vehicle have?" << endl;
		cin >> wheels;

	};
	void review()
	{
		cout << "This vehicle allows: " << passengers << " passengers" << endl;
		cout << "This vehicle weighs: " << weight << " Kg" << endl;
		cout << "This vehicle has: " << wheels << " wheels" << endl;
		cout << "License plate: " << licensePlate << endl;
	}
	void saveDetails()
	{
		if (overwrite == "yes")
		{
			file << "*******************" << endl;
			file << "Motorbike:" << endl;
			file << "This vehicle allows: " << passengers << " passengers" << endl;
			file << "This vehicle weighs: " << weight << " Kg" << endl;
			file << "This vehicle has: " << wheels << " wheels" << endl;
			file << "License plate: " << licensePlate << endl;
		}
		else
		{
			file << "*******************" << endl;
			file << "Motorbike:" << endl;
			file << "This vehicle allows: " << passengers << " passengers" << endl;
			file << "This vehicle weighs: " << weight << " Kg" << endl;
			file << "This vehicle has: " << wheels << " wheels" << endl;
			file << "License plate: " << licensePlate << endl;
		}
	}
};



int main()
{
	//fstream file;
	//string Review;
	//string overwrite;
	string booth;
	booth = "_1.txt";

	time_t t = time(0);   // get current time now
	struct tm* now = localtime(&t); //Returns a pointer to the tm structure represnting local time
	char buffer[80]; //temporary place holder which changes according to the time
	strftime(buffer, 80, "%d-%m-%Y", now);		//%d - day //%m - month //%Y - Year  //Converts to a string
	file.open(buffer + booth, ios::app | ios::out);

	vector<vehicle*> Vehicle;	//vector to store inherited classes

	vehicle* customer;
	customer = new vehicle();	//calling the virtul void fucntion in the class named vehicle
	customer->print();
	//delete customer;


	if (transport == "car")
	{
		car* Car = new car();
		Vehicle.push_back(Car);
		Vehicle[0]->print();

	}

	else if (transport == "lorry")
	{
		lorry* Lorry = new lorry();		//if the user enters in a lorry as there transport they will be presented with relevant questions
		Vehicle.push_back(Lorry);		//Lorry will be stored in vector named Vehicle
		Vehicle[0]->print();

	}
	else if (transport == "van")
	{
		van* Van = new van();
		Vehicle.push_back(Van);
		Vehicle[0]->print();

	}
	else if (transport == "motorbike")
	{
		motorbike* Motorbike = new motorbike();
		Vehicle.push_back(Motorbike);
		Vehicle[0]->print();
	}

	else
	{
		cout << "Invalid Vehicle" << endl;		//if the user enters a vehicle that is not on the list than 
												//they will be told it is an "invalid Vehicle"
	}


	cout << "Would you like to review the information you entered" << endl;
	cin >> Review;

	if (Review == "yes")
	{
		for (auto i : Vehicle)	//The auto keyword specifies that the type of the variable that is
								//being declared will be automatically deducted from its initializer.
		{
			i->review();			//Displays the virtual void function review
		}
	}
	else
	{
		cout << "Ok" << endl;	//If the user does not want to review info
	}

	cout << "Would you like to overwrite the information you entered" << endl;
	cin >> overwrite;

	if (overwrite == "yes")
	{
		for (auto i : Vehicle)

		{
			i->print();	//displays questions
			i->saveDetails();	//Save info to file
		}

	}
	else
	{
		for (auto i : Vehicle)

		{
			i->saveDetails();	//Save info to file
		}

		cout << "Ok, your vehicle details will be saved to a text file" << endl;	//if the user does not want to overwrite info
	}



	file.close();






}
