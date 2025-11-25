#include<iostream>
using namespace std;
class Temp{
    double a;
    public:
        Temp(double a = 0)
        {
            this->a = a;
        }
        double ctof(double a)
        {
            double f;
            f = a* (9/5.0) + 32;
            return f;
        }
        double ftoc(double a)
        {
            double c;
            c = (a- 32)* (5/9.0);
            return c;
        }
        double ctok(double a)
        {
            double k;
            k = a + 273.15;
            return k;
        }
        double ktoc(double a)
        {
            double c;
            c = a - 273.15;
            return c;
        }
        double ftok(double a)
        {
            double k;
            k = (a - 32)* (5/9.0) + 273.15;
            return k;
        }
        double ktof(double a)
        {
            double f;
            f = (a- 273.15)* (9/5.0)+ 32;
            return f;
        }
};
class Distance
{
    double a;
    public:
    Distance(double a = 0)
    {
        this->a =a;
    }
    double cmtom(double a)
    {
        double m;
        m = a/100.0;
        return m;
    }
    double mtocm(double a)
    {
        double cm;
        cm = a * 100.0;
        return cm;
    }
    double cmtokm(double a)
    {
        double km;
        km = a/100000.0;
        return km;
    }
    double kmtocm(double a)
    {
        double cm;
        cm = a * 100000.0;
        return cm;
    }
    double mtokm(double a)
    {
        double km;
        km = a/1000.0;
        return km;
    }
    double kmtom(double a)
    {
        double m;
        m = a * 1000.0;
        return m;
    }
    double kmtomi(double a)
    {
        double mi;
        mi = a * 0.62;
        return mi;
    }
    double mitokm(double a)
    {
        double km;
        km = a * 1.61;
        return km;
    }
    double mtomi(double a)
    {
        double mi;
        mi = a * 0.000621371;
        return mi;
    }
    double mitom(double a)
    {
        double mi;
        mi = a * 1609.34;
        return mi;
    }
};
class weight
{
    double a;
    public:
    weight(double a = 0)
    {
        this->a = a;
    }
    double kgtop(double a)
    {
        double p;
        p = a * 2.2;
        return p;
    }
    double ptokg(double a)
    {
        double kg;
        kg = a * 0.45;
        return kg;
    }
    double kgtog(double a)
    {
        double g;
        g = a * 1000;
        return g;
    }
    double gtokg(double a)
    {
        double kg;
        kg = a / 1000.0;
        return kg;
    }
};
int main()
{
    double v;
    int m =0,m2 = 0;
    while(m != 4)
    {
        cout<<"Please enter the converter you want to use: "<<endl;
        cout<<"1. Temperature Converter"<<endl;
        cout<<"2. Distance Converter"<<endl;
        cout<<"3. Weight Converter"<<endl;
        cout<<"4. Exit"<<endl;
        cin>>m;
        cout<<endl;
        switch (m)
        {
            case 1:
            
                {Temp t1;
                cout<<"what temperature do you want to convert\n";
                cout<<endl;
                cout<<"1. Celcius to Farenheit\n2. Farenheit to Celcius\n3. Celcius to Kelvin\n4. Kelvin to Celcius\n5. Farenheit to Kelvin\n6. Kelvin to Farenheit"<<endl;
                cin>>m2;
                cout<<endl;
                switch (m2)
                {
                    case(1):
                      cout<<"Enter Celcius: ";
                      cin>>v;
                      cout<<v<<"°C is "<<t1.ctof(v)<<"°F"<<endl;
                      break;

                    case(2):
                      cout<<"Enter Farenheit: ";
                      cin>>v;
                      cout<<v<<"°F is "<<t1.ftoc(v)<<"°C"<<endl;
                      break;
                    
                    case(3):
                      cout<<"Enter Celcius: ";
                      cin>>v;
                      cout<<v<<"°C is "<<t1.ctok(v)<<"K"<<endl;
                      break;
                    
                    case(4):
                      cout<<"Enter Kelvin: ";
                      cin>>v;
                      cout<<v<<"K is "<<t1.ktoc(v)<<"°C"<<endl;
                      break;
                    
                    case(5):
                      cout<<"Enter Farenheit: ";
                      cin>>v;
                      cout<<v<<"°F is "<<t1.ftok(v)<<"K"<<endl;
                      break;
                    
                    case(6):
                      cout<<"Enter Kelvin: ";
                      cin>>v;
                      cout<<v<<"K is "<<t1.ktof(v)<<"°F"<<endl;
                      break;
                    
                    default:
                       cout<<"Please enter valid choice."<<endl;
                       break;
                }
                cout<<endl;
                break;
            }
            case 2:
            {
                Distance d1;
                cout<<"what distance do you want to convert\n";
                cout<<endl;
                cout<<"1. Centimeter to meter\n2. Meter to Centimeter\n3. Centimeter to Kilometer\n4. Kilometer to Centimeter\n5. Meter to Kilometer\n6. Kilometer to meter\n7. Kilometer to miles\n8. Miles to Kilometer\n9. Meter to Miles\n10. Miles to meter"<<endl;
                cin>>m2;
                cout<<endl;
                switch (m2)
                {
                    case(1):
                      cout<<"Enter Centimeter: ";
                      cin>>v;
                      cout<<v<<" cm is "<<d1.cmtom(v)<<" m"<<endl;
                      break;

                    case(2):
                      cout<<"Enter Meter: ";
                      cin>>v;
                      cout<<v<<" m is "<<d1.mtocm(v)<<" cm"<<endl;
                      break;
                    
                    case(3):
                      cout<<"Enter Centimeter: ";
                      cin>>v;
                      cout<<v<<" cm is "<<d1.cmtokm(v)<<" km"<<endl;
                      break;
                    
                    case(4):
                      cout<<"Enter Kilometer: ";
                      cin>>v;
                      cout<<v<<" km is "<<d1.kmtocm(v)<<" cm"<<endl;
                      break;
                    
                    case(5):
                      cout<<"Enter Meter: ";
                      cin>>v;
                      cout<<v<<" m is "<<d1.mtokm(v)<<" km"<<endl;
                      break;
                    
                    case(6):
                      cout<<"Enter Kilometer: ";
                      cin>>v;
                      cout<<v<<" km is "<<d1.kmtom(v)<<" m"<<endl;
                      break;

                    case(7):
                      cout<<"Enter Kilometer: ";
                      cin>>v;
                      cout<<v<<" km is "<<d1.kmtomi(v)<<" miles"<<endl;
                      break;

                    case(8):
                      cout<<"Enter Miles: ";
                      cin>>v;
                      cout<<v<<" miles is "<<d1.mitokm(v)<<" km"<<endl;
                      break;

                    case(9):
                      cout<<"Enter Meter: ";
                      cin>>v;
                      cout<<v<<" m is "<<d1.mtomi(v)<<" miles"<<endl;
                      break;
                    
                    case(10):
                      cout<<"Enter Mile: ";
                      cin>>v;
                      cout<<v<<" miles is "<<d1.mitom(v)<<" m"<<endl;
                      break;

                    default:
                       cout<<"Please enter valid choice."<<endl;
                       break;
                }
                cout<<endl;
                break;
            }
            case 3:
            {
                weight w1;
                cout<<"what weight do you want to convert\n";
                cout<<endl;
                cout<<"1. Kilogram to Pound\n2. Pound to Kilogram\n3. Kilogram to Gram\n4. Gram to Kilogram"<<endl;
                cin>>m2;
                cout<<endl;
                switch (m2)
                {
                    case(1):
                      cout<<"Enter Kilogram: ";
                      cin>>v;
                      cout<<v<<" kg is "<<w1.kgtop(v)<<" lb"<<endl;
                      break;

                    case(2):
                      cout<<"Enter Pound: ";
                      cin>>v;
                      cout<<v<<" lb is "<<w1.ptokg(v)<<" kg"<<endl;
                      break;
                    
                    case(3):
                      cout<<"Enter Kilogram: ";
                      cin>>v;
                      cout<<v<<" kg is "<<w1.kgtog(v)<<" g"<<endl;
                      break;
                    
                    case(4):
                      cout<<"Enter Gram: ";
                      cin>>v;
                      cout<<v<<" g is "<<w1.gtokg(v)<<" kg"<<endl;
                      break;
                    
                    
                    default:
                       cout<<"Please enter valid choice."<<endl;
                       break;
                }
                cout<<endl;
                break;
            }
            }   
    }
}
