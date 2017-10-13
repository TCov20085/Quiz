// Simple Avengers Quiz using vectors



#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<functional>
#include<time.h>
#include<iomanip>

// Global variable for counter
int correct = 0;


template <typename T>
void printVector(std::vector<T> x){
	std::cout << std::endl; 
	for (std::vector<T>::iterator itr=x.begin(); itr < x.end(); itr++){
		std::cout << *itr << " " << std::endl; // This contains the value at int_itr location
	}
}
// Information for question one
void QuestionOne(){

	// Declare input as string
	std::string answer;

	// Create vector and print
	std::vector<std::string> x;
	x.push_back("A) Wakanda");x.push_back("B) Uganda");x.push_back("C) South Africa");x.push_back("D) Somolia");

	// Print Question
	std::cout << "In Marvel Comics, the fictional metal Vibranium is native to what fictional African country?";
	printVector(x);

	// Get user input
	std::cin >> answer;

	// Checks user input and adds to counter if correct
	if (answer == "A"){
		std::cout << "Correct!" << std::endl;
		correct++;
	}
	else{
		std::cout << "Incorrect Answer." << std::endl;
	}

}
// Information for question two

void QuestionTwo(){

	// Declare input as string
	std::string answer2;
	// Create vector and print
	std::vector<std::string> z;
	z.push_back("A) February 22, 1953");z.push_back("B) May 1, 1966");z.push_back("C) July 4, 1965");z.push_back("D) September 10, 1963");

	// Print Question
	std::cout << "When was the first issue of 'The Avengers' published?";
	printVector(z);

	// Get user input
	std::cin >> answer2;

	// Checks user input and adds to counter if correct
	if (answer2 == "D"){
		std::cout << "Correct!" << std::endl;
		correct++;
	}
	else{
		std::cout << "Incorrect Answer." << std::endl;
	}
}

// Information for question three
void QuestionThree(){

	// Declare input as string
	std::string answer3;
	// Create vector and print
	std::vector<std::string> y;
	y.push_back("A) 'The Avengers' #7");y.push_back("B) 'The Avengers' #6");y.push_back("C) 'The Avengers' #1");y.push_back("D) 'The Avengers' #4");

	// Print question
	std::cout << "Which issue did Captain America join The Avengers?";
	printVector(y);

	// Get user input
	std::cin >> answer3;

	// Checks user input and adds to counter if correct
	if (answer3 == "D"){
		std::cout << "Correct!" << std::endl;
		correct++;
	}
	else{
		std::cout << "Incorrect Answer." << std::endl;
	}
}

// Information for question four
void QuestionFour(){

	// Declare input as string
	std::string answer4;
	// Create vector and print
	std::vector<std::string> a;
	a.push_back("A) 'The Avengers' #52");a.push_back("B) 'Fantastic Four' #52");a.push_back("C) 'New Avengers' #1");a.push_back("D) 'Black Panther' #1");

	// Print question
	std::cout << "Which of the following comic books did Black Panther make his first appearance?";
	printVector(a);

	// Get user input
	std::cin >> answer4;

	// Checks user input and adds to counter if correct
	if (answer4 == "B"){
		std::cout << "Correct!" << std::endl;
		correct++;
	}
	else{
		std::cout << "Incorrect Answer." << std::endl;
	}
}

// Information for question five
void QuestionFive(){

	// Declare input as string
	std::string answer5;
	// Create vector and print
	std::vector<std::string> b;
	b.push_back("A) Angel");b.push_back("B) Psylocke");b.push_back("C) Warpath");b.push_back("D) Banshee");

	// Print question
	std::cout << "In Uncanny X-Men #1, Professor Xavier's team consisted of Cyclops, Jean Grey, Beast, Iceman, and _______. ";
	printVector(b);

	// Get user input
	std::cin >> answer5;

	// Checks user input and adds to counter if correct
	if (answer5 == "A"){
		std::cout << "Correct!" << std::endl;
		correct++;
	}
	else{
		std::cout << "Incorrect Answer." << std::endl;
	}
}
// Information for question six
void QuestionSix(){

	// Declare input as string
	std::string answer6;
	// Create vector and print
	std::vector<std::string> c;
	c.push_back("A) Magic and Science");c.push_back("B) Time and Form");c.push_back("C) Soul and Spirit");c.push_back("D) Soul and Time");

	// Print question
	std::cout << "Power, Reality, Mind and Space are four of the six Infinity Gems. Name the remaining two.";
	printVector(c);

	// Get user input
	std::cin >> answer6;

	// Checks user input and adds to counter if correct
	if (answer6 == "D"){
		std::cout << "Correct!" << std::endl;
		correct++;
	}
	else{
		std::cout << "Incorrect Answer." << std::endl;
	}
}

// Information for question seven
void QuestionSeven(){

	// Declare input as string
	std::string answer7;
	// Create vector and print
	std::vector<std::string> d;
	d.push_back("A) Simon Williams");d.push_back("B) Donald Blake");d.push_back("C) Hank Pym");d.push_back("D) Hank McCoy");

	// Print question
	std::cout << "In the comics, who was the original creator of Ultron?";
	printVector(d);

	// Get user input
	std::cin >> answer7;

	// Checks user input and adds to counter if correct
	if (answer7 == "C"){
		std::cout << "Correct!" << std::endl;
		correct++;
	}
	else{
		std::cout << "Incorrect Answer." << std::endl;
	}
}

// Information for question eight
void QuestionEight(){

	// Declare input as string
	std::string answer8;
	// Create vector and print
	std::vector<std::string> e;
	e.push_back("A) Canadian, Giant Siee X-Men #1");e.push_back("B) British, X-Men #1");e.push_back("C) American, Uncanny X-Men #227");
	e.push_back("D) Canadian, The Incredible Hulk # 180");

	// Print question
	std::cout << "What is Wolverine's nationality and when was his first appearance?";
	printVector(e);

	// Get user input
	std::cin >> answer8;

	// Checks user input and adds to counter if correct
	if (answer8 == "D"){
		std::cout << "Correct!" << std::endl;
		correct++;
	}
	else{
		std::cout << "Incorrect Answer." << std::endl;
	}
}

// Information for question nine
void QuestionNine(){

	// Declare input as string
	std::string answer9;
	// Create vector and print
	std::vector<std::string> f;
	f.push_back("A) Great Lake Avengers");f.push_back("B) West Coast Avengers");f.push_back("C) New Avengers");f.push_back("D) Avengers Unity Squad");

	// Print question
	std::cout << "Which of the following is NOT an official Avengers team?";
	printVector(f);

	// Get user input
	std::cin >> answer9;

	// Checks user input and adds to counter if correct
	if (answer9 == "A"){
		std::cout << "Correct!" << std::endl;
		correct++;
	}
	else{
		std::cout << "Incorrect Answer." << std::endl;
	}
}

// Information for question ten
void QuestionTen(){

	// Declare input as string
	std::string answer10;
	// Create vector and print
	std::vector<std::string> g;
	g.push_back("A) Stanley Lieber");g.push_back("B) Stan Landers");g.push_back("C) Stan Lucas");g.push_back("D) Stan Lawson");

	// Print question
	std::cout << "What is the real name of Marvel Comics' co-founder, Stan 'The Man' Lee?";
	printVector(g);

	// Get user input
	std::cin >> answer10;

	// Checks user input and adds to counter if correct
	if (answer10 == "A"){
		std::cout << "Correct!" << std::endl;
		correct++;
	}
	else{
		std::cout << "Incorrect Answer." << std::endl;
	}
}


int main(int argc, char *argv[]){

	// Calls functions(questions) and adds space
	QuestionOne();
	std::cout << std::endl;

	QuestionTwo();
	std::cout << std::endl;

	QuestionThree();
	std::cout << std::endl;

	QuestionFour();
	std::cout << std::endl;

	QuestionFive();
	std::cout << std::endl;

	QuestionSix();
	std::cout << std::endl;

	QuestionSeven();
	std::cout << std::endl;

	QuestionEight();
	std::cout << std::endl;

	QuestionNine();
	std::cout << std::endl;

	QuestionTen();


	// Prints out number of questions answered correctly
	std::cout << "You have answered " << correct << " correctly out of 10!" << std::endl;


	system("pause");
}
