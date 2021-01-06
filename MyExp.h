#ifndef MYEXP_H
#define MYEXP_H


/ *!
  Klasa MyExp
* /
class MyExp
{
    public:
	
        void MyExp();
		
        virtual ~MyExp();
		
        void MyExp(double x);
		
        void MyExp(const MyExp &obj);
		
        double value();
		
        void setX(double);
		
        double getX();
	

        private:
	
            double mX();
};

#endif // MYEXP_H
