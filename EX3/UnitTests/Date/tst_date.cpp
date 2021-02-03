#include <QtTest>


// add necessary includes here

class Date_test : public QObject
{
    Q_OBJECT

public:
    Date_test();
    ~Date_test();

private slots:
    void test_case1();

};

Date_test::Date_test()
{

}

Date_test::~Date_test()
{

}

void Date_test::test_case1()
{

}

QTEST_APPLESS_MAIN(Date_test)

#include "tst_date.moc"
