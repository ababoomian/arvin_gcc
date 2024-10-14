#include <iostream>
#include <cmath>

void show_calculator()
{
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"----                                                   ----"<< std::endl;
    std::cout<<"--                     SCIENTIFIC                        --"<< std::endl;
    std::cout<<"--                     CALCULATOR                        --"<< std::endl;
    std::cout<<"----                                                   ----"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"--       +        |         -        |        *          --"<< std::endl;
    std::cout<<"--      Add       |       Minus      |     Multiply      --"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"--       /        |        m         |         L         --"<< std::endl;
    std::cout<<"--     Divide     |       mod        |        Log        --"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"--      S         |        C         |         p         --"<< std::endl;
    std::cout<<"--    Square      |       Cube       |       Power       --"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"--       s        |        c         |         t         --"<< std::endl;
    std::cout<<"--      sin       |       cos        |        tan        --"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"--       r        |         k        |         .         --"<< std::endl;
    std::cout<<"--    sq root     |       clear      |       clear       --"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;

}

void display_output(double answer)
{
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"----                             --------------------------"<< std::endl;
    std::cout<<"--      CURRENT                  |     "<< std::endl;
    std::cout<<"--      OUTPUT IS:               |    "<< answer << std::endl;
    std::cout<<"----                             --------------------------"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"--       +        |         -        |        *          --"<< std::endl;
    std::cout<<"--      Add       |       Minus      |     Multiply      --"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"--       /        |        m         |         L         --"<< std::endl;
    std::cout<<"--     Divide     |       mod        |        Log        --"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"--      S         |        C         |         p         --"<< std::endl;
    std::cout<<"--    Square      |       Cube       |       Power       --"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"--       s        |        c         |         t         --"<< std::endl;
    std::cout<<"--      sin       |       cos        |        tan        --"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
    std::cout<<"--       r        |         k        |         .         --"<< std::endl;
    std::cout<<"--    sq root     |       clear      |       clear       --"<< std::endl;
    std::cout<<"-----------------------------------------------------------"<< std::endl;
}

int main()
{
   double num1 = 0.0;
   double num2 = 0.0;

   double answer = 0.0;
   char inp = '\n';
   bool converter = 0;

   show_calculator(); 
   while(inp != '.')
   {
        if(converter == 1)
        {
          display_output(answer);  
        }
        else
        {
            std::cout<<"Enter: ";
    std::cin>>inp;

    if(inp == '+' || inp == '-' || inp == '*' || inp == '/' || inp == 'm' || inp == 'p')
        {
            std::cout<<"Enter num 1: ";
            std::cin>> num1;

            std::cout<<"Enter num 2: ";
            std::cin>>num2;
        }
        else if(inp == 'k' || inp == '.')
            {
                
            }
            else
                {
                  num1 = answer; 
                }
        }

                switch(inp)
                {
                    case '+':
                    answer = num1 + num2;
                    break;
                    case '-':
                    answer = num1 - num2;
                    break;
                    case '*':
                    answer = num1 * num2;
                    break;
                    case '/':
                    answer = num1 / num2;
                    break;
                    case 'm':
                    answer = int(num1) % int(num2);
                    break;
                    case 'L':
                    answer = log(num1);
                    break;
                    case 'S':
                    answer = num1*num1;
                    break;
                    case 'C':
                    answer = num1*num1*num1;
                    break;
                    case 'p':
                    answer = pow(num1 , num2);
                    break;
                    case 's':
                    answer = sin(num1);
                    break;
                    case 'c':
                    answer = cos(num1);
                    break;
                    case 't':
                    answer = tan(num1);
                    break;
                    case 'r':
                    answer = sqrt(num1);
                    break;
                    case 'k':
                    converter = 0;
                    break;

                    case '.':
                    break;
                    default:
                    std::cout<<"~~~~You Entered Invalid Value!~~~~ "<<std::endl;
                }

   }

    return 0;
}
