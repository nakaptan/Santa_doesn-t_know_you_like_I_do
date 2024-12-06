#include <iostream>
using namespace std;

int main(){
    int age, height, bounty;

    cout << "Enter your age: ";
    cin >> age;

    // อายุไม่เกิน 25?
    if(age <= 25){ //----------YES-------------
        cout << "Enter your height: ";
        cin >> height;

        // สูงไม่ถึง 100cm?
        if(height < 100){ //----------YES-------------
            cout << "Your character = Chopper";
        }
        // ถ้าสูงเกิน 100 แต่สูงไม่ถึง 180?
        else if(height < 180){ //----------YES-------------
            cout << "Your character = Usopp";
        }
        //ไม่ใช่ที่กล่าวมา และสูงเกิน 180
        else{ //----------NO-------------
            cout << "Enter your bounty: ";
            cin >> bounty;
            // ค่าหัวเกิน 1.1พันล้าน?
            if(bounty > 1100000000){ //----------YES-------------
                cout << "Your character = Zoro";
            }
            //ค่าหัวไม่เกิน 1.1พันล้าน
            else{ //----------NO-------------
                cout << "Your character = Sanji";
            }
        }
    }

    //อายุไม่เกิน 60?
    else if(age <= 60){ //----------YES-------------
        cout << "Enter your bounty: ";
        cin >> bounty;

        //ค่าหัวเกิน 500ล้าน?
        if(bounty > 500000000){ //----------YES-------------
            cout << "Your character = Jinbe"; 
        }
        //ค่าหัวน้อยกว่า 500ล้าน
        else{ //----------NO-------------
            cout << "Your character = Franky";
        }
    }
    //ถ้าไม่ใช้ทั้งหมดที่กล่าวมา และอายุเกิน 60
    else{ //----------NO-------------
        cout << "Your character = Brook";
    }

    return 0;
}
/*-----------------EASY------------------------*/