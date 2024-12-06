#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

char findGrade(double score) {
    if (score > 90) {
        return 'A';
    } else if (score > 75) {
        return 'B';
    } else if (score > 60) {
        return 'C';
    } else if (score > 45) {
        return 'D';
    } else {
        return 'F';
    }
}

int main(){
	//Input the number of students
	int N,i = 0; // รับค่า N คือจำนวนนักเรียน กับ i
	cout << "Enter the number of students: "; //<------รับค่าตรงนี้นะจ๊ะ
	cin >> N; // เก็บค่าไว้ในตัวแปร N
	string name[N]; // ถ้าค่า N เป็นตัวอักษรให้เก็บค่าในรูปแบบ string ไว้ใน array
	float score[N];	// ถ้าค่า N เป็นตัวเลขให้เก็บในรูปแบบทศนิยม

	//Store names and scores of students into an array  เก็บ name และ score ใส่ไว้ใน array
	while(i < N){ 
	/*------หลักการทำงาน-----
	1.แสดงผลว่ารับค่า string รวมทั้งบรรทัดด้วย
	2.ล้างค่าบัฟเฟอร์ที่อยู่ก่อนหน้า เช่น ถ้ามี \n, space, \t พวกนี้จะทำให้มีบัฟเฟอร์ค้่างอยู่ จึงต้องล้างค่าพวกนี้ออกไปก่อนที่จะรับค่าใหม่ 
	3.รับค่าทั้งบรรทัดรวมไปถึง space ด้วย
	4.แสดงผลว่ารับค่า int
	5.รับค่าโดยใช้ cin เก็บตัวเลข
	----------------------*/

		cout << "Name of student " << i+1 << ": "; //ที่เป็น i+1 เพราะว่า index เริ่มต้นที่ 0 ถ้าต้องการที่ให้ค่าที่เก็บเริ่มต้นที่ 1 ต้อง 0+1=index(1)
		cin.ignore();
		getline(cin, name[i]); // เก็บ string ไว้ใน array โดยท่ี่ต้องการทั้งบรรทัดหรือช่องว่าง
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i]; // เก็บ int ไว้ใน array
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){ //วนไปเรื่อยๆจนกว่าจำนวนค่าที่อยู่ใน array จะเท่ามีค่าเท่ากับ N-1 (i < N)
		//กำหนดช่องว่าง -> แสดงผลชื่อ -> กำหนดช่องว่าง -> แสดงผล score -> กำหนดช่องว่าง -> แสดงผลจากฟังก์ชันเป็นเกรด
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << findGrade(score[i]) << "\n"; 
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}