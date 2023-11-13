#include <math.h>
#include <iostream>
#include <float.h>
#include <stdio.h>
#include <string>
#include <string.h>
#include "libcalc.h"

using namespace std;

int main() {

    string valid_options("+/-*");
    string valid_numerals("0123456789");
    string valid_compsim("csCSdD");
    string input;
    string comp_math;
    string comp_math_op;
    string i1;
    string i2;
    string i3;
    string i4;
    string i5;
    string i6;
    string comp_i1;

    string* pInput = &input;
    string* pI1 = &i1;
    string* pI2 = &i2;
    string* pI3 = &i3;
    string* pI4 = &i4;
    string* pI5 = &i5;
    string* pI6 = &i6;

    bool illegal_input;
    cout << "Simple/Complex Math (c/s)" << endl;
    cin >> comp_math;

    while (comp_math.size() != 1 || valid_compsim.find(comp_math) == string::npos)
    { 
        printf("Input invalid, please enter c or s.\n");
        cin >> comp_math;

    }
    if(comp_math == "s") {
        cout << "Enter an Operator" << endl;
        cin >> input;
        bool sub;
        bool add;
        bool mul;
        bool div;
        // check that only one letter was provided and it belongs to the valid options
        while (input.size() != 1 || valid_options.find(input) == string::npos)
        {

            printf("Input invalid, please enter + / - or *.\n");
            cin >> input;
        
        }
        if(input == "+"){
            add = true;
            sub = false;
            mul = false;
            div = false;
        } else if (input == "-"){
            add = false;
            sub = true;
            mul = false;
            div = false;
        } else if (input == "*"){
            add = false;
            sub = false;
            mul = true;
            div = false;
        } else if (input == "/"){
            add = false;
            sub = false;
            mul = false;
            div = true;
        }
        
        
        printf("Enter first number\n");
        cin >> i1;  


        printf("Enter second number\n");
        cin >> i2;  


        printf("Enter third number\n");
        cin >> i3;  


        printf("Enter fourth number\n");
        cin >> i4;  


        printf("Enter fifth number\n");
        cin >> i5;  


        printf("Enter sixth number\n");
        cin >> i6;  
        if(isdigit(stoi(i1)) && isdigit(stoi(i2)) && isdigit(stoi(i3)) && isdigit(stoi(i4)) && isdigit(stoi(i5)) && isdigit(stoi(i6))) {
            
        } else {
            
        }
        
        int o1 = stoi(i1);
        int o2 = stoi(i2);
        int o3 = stoi(i3);
        int o4 = stoi(i4);
        int o5 = stoi(i5);
        int o6 = stoi(i6);

        // GEN 0 CALCULATORS

        if(add == true) {int output = calc_sum(o1,o2,o3,o4,o5,o6); cout << "Answer: " << output <<endl;}
        else if(sub == true) {int output = calc_sub(o1,o2,o3,o4,o5,o6); cout << "Answer: " << output <<endl;}
        else if(mul == true) {int output = calc_mul(o1,o2,o3,o4,o5,o6); cout << "Answer: " << output <<endl;}
        else if(div == true) {int output = calc_div(o1,o2,o3,o4,o5,o6); cout << "Answer: " << output <<endl;}  

    } else if (comp_math == "c") {
        
        bool log;
        bool sin;
        bool cos;
        bool tan;
        bool sqrt;
        bool pi;
        bool sqr;
        bool csqr;
        cout << "Enter a Complex Mathematical Operator" << endl;
        cin >> comp_math_op;
        if(comp_math_op == "log"){
            log = true;
            sin = false;
            cos = false;
            tan = false;
            sqrt = false;
            pi = false;
            sqr = false;
            csqr = false;
        } else if (comp_math_op == "sin"){
            log = false;
            sin = true;
            cos = false;
            tan = false;
            sqrt = false;
            pi = false;
            sqr = false;
            csqr = false;
        } else if (comp_math_op == "cos"){
            log = false;
            sin = false;
            cos = true;
            tan = false;
            sqrt = false;
            pi = false;
            sqr = false;
            csqr = false;
        } else if (comp_math_op == "tan"){
            log = false;
            sin = false;
            cos = false;
            tan = true;
            sqrt = false;
            pi = false;
            sqr = false;
            csqr = false;
        } else if (comp_math_op == "sqrt"){
            log = false;
            sin = false;
            cos = false;
            tan = false;
            sqrt = true;
            pi = false;
            sqr = false;
            csqr = false;
        }else if (comp_math_op == "pi"){
            log = false;
            sin = false;
            cos = false;
            tan = false;
            sqrt = false;
            pi = true;
            csqr = false;
        }else if (comp_math_op == "sqr"){
            log = false;
            sin = false;
            cos = false;
            tan = false;
            sqrt = false;
            pi = false;
            sqr = true;
            csqr = false;
        }else if (comp_math_op == "csqr"){
            log = false;
            sin = false;
            cos = false;
            tan = false;
            sqrt = false;
            pi = false;
            sqr = false;
            csqr = true;
        } else {
            // Input did not contain log, sin, cos, tan, sqrt, pi, sqr or csqr.
            printf("Invalid something or rather");
        }
        printf("Enter a number\n");
        cin >> comp_i1;
        float comp_o1 = stoi(comp_i1);

        //GEN ONE CALCULATORS 

        if(log == true) {float output = calc_log(comp_o1, 0); cout << "Answer: " << output <<endl;}
        else if(sin == true) {float output = calc_sin(comp_o1, 0); cout << "Answer(Rads): " << output <<endl;}
        else if(cos == true) {float output = calc_cos(comp_o1, 0); cout << "Answer(Rads): " << output <<endl;}
        else if(tan == true) {float output = calc_tan(comp_o1, 0); cout << "Answer: " << output <<endl;}

        //GEN TWO CALCULATORS

        else if(sqrt == true) {float output = calc_sqrt(comp_o1, 0); cout << "Answer: " << output <<endl;}   
        else if(pi == true) {float output = calc_pi(comp_o1, 0); cout << "Answer: " << output <<endl;}
        else if(sqr == true) {float output = calc_sqr(comp_o1, 0); cout << "Answer: " << output <<endl;}
        else if(csqr == true) {float output = calc_csqr(comp_o1, 0); cout << "Answer: " << output <<endl;}

        //GENERATION 3 CALCULATORS ARE UNDER DEVELOPMENT


    } else if (comp_math == "d") {

        string devInput;
        string Clog = "log";
        string Csin = "sin";
        string Ccos = "cos";
        string Ctan = "tan";
        string Csqrt = "sqrt";
        string Cadd = "+";
        string Csub = "-";
        string Cmul = "*";
        string Cdiv = "/";


        printf("You Have unlocked Developer Mode;\n");
        printf("Type Equation into CMD (lowercase letters with brackets for functions)\n")
        cin >> devInput;

        bool containsLog = devInput.find(Clog) != string::npos;
        bool containsSin = devInput.find(Csin) != string::npos;
        bool containsCos = devInput.find(Ccos) != string::npos;
        bool containsTan = devInput.find(Ctan) != string::npos;
        bool containsSqrt = devInput.find(Csqrt) != string::npos;
        bool containsAdd = devInput.find(Cadd) != string::npos;
        bool containsSub = devInput.find(Csub) != string::npos;
        bool containsMul = devInput.find(Cmul) != string::npos;
        bool containsDiv = devInput.find(Cdiv) != string::npos;

        if(containsLog == true){
            //Development in Progress
        }

    }
    string b;
    cin >> b;
}
