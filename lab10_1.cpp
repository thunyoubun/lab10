#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std;


int n;
void rollGrade(){
    n = rand()%9;
    
}

int main(){
    string grade[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F" ,"W"};
    srand(time(0));
    rollGrade();
    cout << "Press Enter 3 times to reveal your future.";
    
    for(int i= 0; i<3; i++){
        cin.get();

    }
    cout << "You will get " << grade[n] << " in this 261102.";
    




return 0;
}