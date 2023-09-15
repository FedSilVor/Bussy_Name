#include <iostream>
#include <string>

bool month_checker(int month, int day){
    if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)){
        return false; //it's a true date.
    }else if((month == 2 && day <= 29) || (month == 4 && day <= 30) || (month == 6 && day <= 30) || (month == 9 && day <= 30) || (month == 11 && day <= 30)){
        return false; //it's a true date.
    }else{
        std::cout << "\nM-Master this is n-not a real date TwT\nP-Please c-c-change y-your date!! >w<\n\n";
        return true; //it's not a true date.
    }
}

int main(){

    int loop;
    int month_choice;
    int day_choice;
    std::string month;
    std::string day;

    std::cout << "Haiii Master! :3 I'm Astolfo, n-nice to meet you!!\nI'm here to c-calculate your bussy's name b-based on your birthday! uwu\nLet's play together!! nyan ^^\n";

    do{
        do{
            do{
                std::cout << "\nF-First question Master uwu, what's your birth month?? owo\nP-Please type it here m-master uwu: ";
                std::cin >> month_choice;
                if(month_choice < 1 || month_choice > 12){
                    std::cout << "\nM-Master...I'm afraid t-that this month d-d-doesn't exist!! TwT\nP-Please d-don't punish me!! :c\n\n";
                }
            }while(month_choice < 1 || month_choice > 12);
            
            do{
                std::cout << "\nLast question Master, I swear owo\nWhat's your birth day?? I really want to know it!! uwu\nType it here Master >w<: ";
                std::cin >> day_choice;
                if(day_choice < 1 || day_choice > 31){
                    std::cout << "\nM-Master...I'm afraid t-that this day d-d-doesn't exist!! TwT\nP-Please d-don't punish me!! :c\n\n";
                }
            }while(day_choice < 1 || day_choice > 31);

        }while((month_checker(month_choice, day_choice)));

        switch(month_choice){
            case 1:
                month = "Cock";
                break;
            case 2:
                month = "Sex";
                break;
            case 3:
                month = "Pretty";
                break;
            case 4:
                month = "Warm";
                break;
            case 5:
                month = "Devil";
                break;
            case 6:
                month = "Pixie";
                break;
            case 7:
                month = "Dick";
                break;
            case 8:
                month = "Love";
                break;
            case 9:
                month = "Super";
                break;
            case 10:
                month = "Flower";
                break;
            case 11:
                month = "Honey";
                break;
            case 12:
                month = "Angel";
                break;
        }

        switch(day_choice){
            case 1:
                day = "Muffin";
                break;
            case 2:
                day = "Pie";
                break;
            case 3:
                day = "Cake";
                break;
            case 4:
                day = "Meat";
                break;
            case 5:
                day = "Pocket";
                break;
            case 6:
                day = "Chute";
                break;
            case 7:
                day = "Hole";
                break;
            case 8:
                day = "Poodle";
                break;
            case 9:
                day = "Taco";
                break;
            case 10:
                day = "Pit";
                break;
            case 11:
                day = "Burger";
                break;
            case 12:
                day = "Kitten";
                break;
            case 13:
                day = "Tunnel";
                break;
            case 14:
                day = "Cave";
                break;
            case 15:
                day = "Truffle";
                break;
            case 16:
                day = "Box";
                break;
            case 17:
                day = "Pot";
                break;
            case 18:
                day = "Tube";
                break;
            case 19:
                day = "Snatch";
                break;
            case 20:
                day = "Flaps";
                break;
            case 21:
                day = "Smuggler";
                break;
            case 22:
                day = "Mitten";
                break;
            case 23:
                day = "Folds";
                break;
            case 24:
                day = "Cookie";
                break;
            case 25:
                day = "Sandwitch";
                break;
            case 26:
                day = "Buffet";
                break;
            case 27:
                day = "Factory";
                break;
            case 28:
                day = "Ditch";
                break;
            case 29:
                day = "Crater";
                break;
            case 30:
                day = "Butterfly";
                break;
            case 31:
                day = "Crack";
                break;
        }

        std::cout << "\nMASTER I HAVE YOUR RESULT!! uwu\nAm I a good boy??? <3\nThis is your bussy's name Master :3 = " << month << " " << day << ".";
        std::cout << "\n\nH-Hey Master, wanna play a-again? I-I'd like to s-stay more w-w-with you..\nI-If y-you wanna p-play again press 1, I-If n-n-not press 0";
        std::cout << "\nS-So..? Wanna s-stay m-more with m-m-me..? >w< = ";
        do{
            std::cin >> loop;
            if(loop < 0 || loop > 1){
                std::cout << "\nS-Sorry Master, b-but t-t-this Input is wrong..!\nPress only b-between 0 and 1.. TwT = ";
            }else if(loop == 1){
                std::cout << "\nT-THANK YOU MASTER!! Let's play again!! nyaaan-\n\n";
            }else{
                std::cout << "\nO-Oh..I-I see..\nD-Don't worry M-Master, I'll wait f-for you here..!\nT-Thank you f-for p-playing Master, I-I-I Love you..! >w<\n";
            }
        }while(loop < 0 || loop > 1);

    }while(loop == 1);

    return 0;
}