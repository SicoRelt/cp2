#include <iostream>

using namespace std;

int main()
{
    // defrent betwean ++x and x++ in expersions;
    int x = 5;
    int y = ++x * x++;
    cout << y << endl;

    x = 5;
    int z = x++ * x++;
    cout << z << "is z and x now is =>" << x << endl;

    // x = exp1 ? ansexp1 : ansexp2 ;
    int xcc = 5 > 50 ? 50 * 2 : 50 * 3;
    cout << xcc << endl;

    // x = ((exp1) , (exp2))
    //started but not return , return in x
    int fil;
    long int xrr;
    int c = 60000;
    xrr = (fil = 5 > 50 ? 50 * 2 : 50 * 3, c += fil);
    xrr = (cout << " fil in last positions : " << fil << endl, c = 10);
    cout << xrr << endl;

    int flo = 5;
    int clo = 2;
    
    clo *= flo - 2; // mean => clo = clo * (flo-2);
    cout << clo << endl;

    // Comand INput  CIN >>
    // cin>>clo>>flo;
    // Command OUTput COUT <<
    x = 0;//int
    cout << clo << "Test Text in cout" << flo << endl;
    cout << x++ << "   " << x++ << "   " << ++x << "  " << ++x << endl; //+++++++++
    // show point and cin get number pass cnt+z (-1) and Enter (10 for each get)
    // cin from ostream AND cout from istream <iostream>
    // from right to left compile and left to right Writen
    clo = 0; //int
    // clo = cin.get()+cin.get()+cin.get();
    cout.setf(ios::showpoint);
    cout << 1.2 << endl;
    cout << "end secone with clo" << clo << endl
         << "matin build it" << endl;
    x = 0;
    cout << (x = 0) << (x == 0) << endl;
    x = 0;
    cout << (x == 0) << (x = 0) << endl;

    x = isupper('MATINALIJANI');
    y = islower('matinalijanI');
    z = isalpha('matinAlijani0');
    int xx = isupper('matinAlijani');
    cout << x << "->upper" << y << "->" << z << "=>";
    // lenght of string
    cout << strlen("matinAlijani") << endl;

    wchar_t matin = 'm';//use just ' '

    x = 11;
    if (x <= 10)
    {
        cout << "HI X IS 10" << endl;
    }
    else
    {
        cout << "SORRY x ISnot 10" << endl;
    }
    std::cout << "hi" << std::endl;
}
