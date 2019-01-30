#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	float score=0, grade=0, actual_grade=0, grade_sum=0;
	int weight=0, weight_sum=0;
	while (grade != 6) {
		cout << "Wpisz ocene (6 aby zakonczyc liczenie)" << endl;
		cin >> grade;
		if (grade == 6) break;
		cout << "Wprowadx wage" << endl;
		cin >> weight;
		actual_grade = grade * weight;
		grade_sum = grade_sum+actual_grade;
		weight_sum = weight_sum + weight;
	}
	score = grade_sum / weight_sum;
	cout << "Twoja srednia to :" << score;
	_getch();
	return 0;	
}
