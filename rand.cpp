#include<iostream>
#include<ctime>
#include<bits/stdc++.h>

int main(){
    srand(time(0));
    int randNum = rand()%5 +1;

    switch(randNum){
        case1: std::cout<<"You won 1tk\n";
            break;
        case2: std::cout<<"You won 5tk\n";
            break;
        case3: std::cout<<"You won 10tk\n";
            break;
        case4: std::cout<<"You won 15tk\n";
            break;
        case5: std::cout<<"You won 20tk\n";
            break;
    }

    return 0;
}