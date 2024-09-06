#include<iostream>
using namespace std;

string Once(int num) {
    switch (num) {
        case 1: return "I";
        case 2: return "II";
        case 3: return "III";
        case 4: return "IV";
        case 5: return "V";
        case 6: return "VI";
        case 7: return "VII";
        case 8: return "VIII";
        case 9: return "IX";
        default: return "";
    }
}

string Tens(int num) {
    switch (num) {
        case 10: return "X";
        case 20: return "XX";
        case 30: return "XXX";
        case 40: return "XL";
        case 50: return "L";
        case 60: return "LX";
        case 70: return "LXX";
        case 80: return "LXXX";
        case 90: return "XC";
        default: return "";
    }
}

string Hundreds(int num) {
    switch (num) {
        case 100: return "C";
        case 200: return "CC";
        case 300: return "CCC";
        case 400: return "CD";
        case 500: return "D";
        case 600: return "DC";
        case 700: return "DCC";
        case 800: return "DCCC";
        case 900: return "CM";
        default: return "";
    }
}

string Thousand(int num) {
    switch (num) {
        case 1000: return "M";
        case 2000: return "MM";
        case 3000: return "MMM";
        default: return "";
    }
}


int main(){
    int s;
    cout<<"Enter number: ";
    cin>>s;
    string ans;

    if(s < 1 || s > 3999){
        cout<<"No. out of range (must be between 1 and 3999)";
        return 1;
    }

    // handle Thousand place 
    ans += Thousand((s/1000)*1000);
    s = s%1000;

    // handle Hundred place 
    ans += Hundreds((s/100)*100);
    s = s%100;

    // handle Tens place 
    ans += Tens((s/10)*10);
    s = s%10;

    // handle Once place 
    ans += Once(s);

    cout<<"Roman: "<<ans;

    return 0;
}