////#include <iostream>
////
////using namespace std;
////
////int main()
////{
////    cout << "Hello world!" << endl;
////    return 0;
////}
////#include<iostream>
////using namespace std;
////class A
////{
////public:
////    int i;
////    void f();
////};
////void A::f()
////{
////    this->i=10;
////    cout<<i<<endl;
////}
////int main()
////{
////    A a;
////    a.i=20;
////    cout<<a.i<<endl;
////    a.f();
////    return 0;
////}
//#include<iostream>
//using namespace std;
//class Point
//{
//public:
//    Point(int);
//    ~Point();
//    void init(int x,int y);
//
//
//    void move (int dx,int dy);
//private:
//    int x;
//    int y;
//};
//Point::Point(int tmp)
//{
//    x=tmp;
//    y=0;
//    cout<<this<<'\n'<<x<<endl;
//}
//Point::~Point()
//{
//    cout<<"xigou"<<endl;
//}
////void Point::init()
////{
////
////}
////void Point::move()
////{
////
////}
////a.init(1,2);
////a.move(1,2);
////a.print();
//int main()
//{
//    Point a(12);
//    cout <<endl;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//int main()
//{
//    int *p=new int [10];
//    delete [] p;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class A
//{
//public:
//    A(){i=0;cout<<"A::A()"<<endl;}
//    ~A(){cout<<"A::~A(),i= "<<i<<endl;}
//    void set(int i)
//    {
//        this->i=i;
//    }
//    void f(){cout<<"hello world!"<<endl;}
//    void m(A*p){cout<<p->i<<endl;}
//private:
//    int i;
//};
//int main()
//{
//    A*p=new A[10];
//    for(int i=0;i<10;i++)
//    {
//        p[i].set(i);
//    }
//    A b;
//    b.set(100);
//    p->m(&b);
//    delete []p;
//    p=NULL;
//    delete p;
//    return 0;
//}
//#include<iostream>
//using namespace std;
//class B
//{
//public:
//    B(int i){}
//};
//class A
//{
//public:
//    void set(int a)
//    {
//        i=a;
//    }
//    A():b(10)
//    {
//        i=0;
//    }
//    ~A()
//    {
//        cout<<i<<endl;
//    }
//private:
//    int i;
//    B b;
//};
//int main()
//{
//    A*p=new A[10];
//    for(int i=0;i<10;i++)
//    {
//        p[i].set(i);
//    }
//    delete []p;
//    return 0;
//}
