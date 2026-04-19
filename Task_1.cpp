//#include<iostream>
//using namespace std;
//int main() {
//	int Total_semester_credit_hours=0;
//	double Total_semester_grade_points = 0.0;
//	double gradePoints;
//	string Grade;
//	int no_of_courses;
//	double GPA;
//	int creditHours;
//	//GPA Calculation
//	cout << "Enter the number of courses : " << endl;
//	cin >> no_of_courses;
//	for (int i = 0; i < no_of_courses; i++) {
//		cout << "Enter the Credit Hours for course : " << i + 1 << endl;
//		cin >> creditHours;
//		Total_semester_credit_hours += creditHours;
//		cout << "Grade in the Course " << i+1 << endl;
//		cin >> Grade;
//		if (Grade == "A") {
//			gradePoints = 4.0 * creditHours;
//			Total_semester_grade_points += gradePoints;
//		}
//		else if (Grade == "A-") {
//			gradePoints = 3.67 * creditHours;
//			Total_semester_grade_points += gradePoints;
//		}
//		else if (Grade == "B+") {
//			gradePoints = 3.33 * creditHours;
//			Total_semester_grade_points += gradePoints;
//		}
//		else if (Grade == "B") {
//			gradePoints = 3.00 * creditHours;
//			Total_semester_grade_points += gradePoints;
//		}
//		else if (Grade == "B-") {
//			gradePoints = 2.67 * creditHours;
//			Total_semester_grade_points += gradePoints;
//		}
//		else if (Grade == "C+") {
//			gradePoints = 2.33 * creditHours;
//			Total_semester_grade_points += gradePoints;
//		}
//		else if (Grade == "C") {
//			gradePoints = 2 * creditHours;
//			Total_semester_grade_points += gradePoints;
//		}
//		else if (Grade == "C-") {
//			gradePoints = 1.67 * creditHours;
//			Total_semester_grade_points += gradePoints;
//		}
//		else if (Grade == "D+") {
//			gradePoints = 1.33 * creditHours;
//			Total_semester_grade_points += gradePoints;
//		}
//		else if (Grade == "D") {
//			gradePoints = 1.00 * creditHours;
//			Total_semester_grade_points += gradePoints;
//		}
//		else if (Grade == "F") {
//			gradePoints = 0.00 * creditHours;
//			Total_semester_grade_points += gradePoints;
//		}
//		
//	}
//	GPA = Total_semester_grade_points / Total_semester_credit_hours;
//	cout << "GPA is : "<<" " << GPA << " " << endl;
//	//CGPA Calculation
//	double CGPA;
//	//Logic for First Sem
//	string IsSemester_1;
//	cout << "Are you a student of first semester(Y/N) : " << endl;
//	cin >> IsSemester_1;
//	int Previous_CH;
//	double Previous_GPA;
//	if (IsSemester_1 == "Y" || IsSemester_1 == "y") {
//		CGPA = GPA;
//	}
//	else {
//		cout << "Enter Previous Credit Hours : " << endl;
//		cin >> Previous_CH;
//		cout << "Enter Previous GPA : " << endl;
//		cin >> Previous_GPA;
//		double Previous_grade_points = Previous_GPA * Previous_CH;
//		double Total_overall_pts = Previous_grade_points + Total_semester_grade_points;
//		int Total_overall_CH = Previous_CH + Total_semester_credit_hours;
//		CGPA = Total_overall_pts / Total_overall_CH;
//		
//	
//	}
//	cout << "Your CGPA is : " << CGPA << " " << endl;
//	return 0;
//}