/*
 g++  main.cpp -o main.out
 */

#include <iostream>
#include <iomanip>  // for using setw(15)

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Za, World!\n";

    //-----print var inside string
    cout<<"shit "<<3434343<<" endOfShit\n\n";

    cout<<"int size = "<<sizeof(int)<<"\n";
    cout<<"short size = "<<sizeof(short)<<"\n";
    cout<<"long size = "<<sizeof(long)<<"\n";
    cout<<"char size = "<<sizeof(char)<<"\n";
    cout<<"float size = "<<sizeof(float)<<"\n";
    cout<<"double size = "<<sizeof(double)<<"\n";
    cout<<"bool size = "<<sizeof(bool)<<"\n";

    //----Constant var
    const int weightGoal = 100;
    cout<<"\nweightGoal: "<<weightGoal;

    
    
    //-----ENUM
    //define MONTHS as having 12 possible values
    enum MONTHS {Jan, Feb, Mar, Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec};

    //define bestMonth as a variable type MONTHS
    MONTHS bestMonth;

    //assign bestMonth one of the values of MONTHS
    bestMonth = Jan;

    //now we can check the value of bestMonths just
    //like any other variable
    if (bestMonth == Jan) {
        cout<<"\nJanuary is the best month\n";
    } else {
        cout<<"best month is not January";
    }

    
    //----setw
    std::cout<<"\nThe text with setw(15)\n";
    std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
    //---tabs
    std::cout<<"\n\nThe text with tabs\n";
    std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";

    //---Print to Table
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    cout<<"Ints"<<setw(13)<<"Floats"<<setw(15)<<"Double\n";
    cout<<a<<setw(15)<<b<<setw(15)<<c;
    cout<<"\n";
    cout<<aa<<setw(15)<<bb<<setw(15)<<cc;
    cout<<"\n";
    cout<<aaa<<setw(15)<<bbb<<setw(15)<<ccc;
    cout<<"\n";

    
    cout <<"\n\n\n";
    return 0;
}
