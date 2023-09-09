#include <vector>
#include <algorithm>
#include <iostream>
#include <random>
#include <array>
#include <string>
#include <memory>
#include <variant>
#define NDEBUG

#include "object/object_orientation_sample.cpp"

// #define TEST_CASE(a, b) (test_case_macro(a, b))


int main(void) {


	int v1 = 10;
	double v2 = 2.675;
	std::string v3 = "test";
	bool b = false;

    int a = 0;
    std::string b1 = "test1";

    // std::cout << "TEST_CASE : " << TEST_CASE(a, b1) << std::endl;


    std::vector<int> intData = {1, 2, 3};
    ExistenceVaildtionCheckList intChecker(intData);

    std::vector<double> doubleData = {1.1, 2.2, 3.3};
    ExistenceVaildtionCheckList doubleChecker(doubleData);

    std::vector<std::string> strData = {"apple", "banana", "cherry"};
    ExistenceVaildtionCheckList strChecker(strData);

	std::shared_ptr<ValueVaildtionCheckList> value1 = std::make_shared<ValueVaildtionCheckList>(v1);
	std::shared_ptr<ValueVaildtionCheckList> value2 = std::make_shared<ValueVaildtionCheckList>(v2);
	std::shared_ptr<ValueVaildtionCheckList> value3 = std::make_shared<ValueVaildtionCheckList>(v3);
	std::shared_ptr<BooleanVaildtionCheckList> value4 = std::make_shared<BooleanVaildtionCheckList>(b);


	std::cout << "----------------------------------------------" << std::endl;
	// std::cout << value1->Check(2, 13) << std::endl;
	// std::cout << value2->Check(1.25, 6.58) << std::endl;
	// std::cout << value3->Check() << std::endl;
	// std::cout << value4->check() << std::endl;

    // if (intChecker.checkResult()) {
    //     std::cout << "intList is not empty." << std::endl;
    // } else {
    //     std::cout << "intList is empty." << std::endl;
    // }

    // if (doubleChecker.checkResult()) {
    //     std::cout << "doubleList is not empty." << std::endl;
    // } else {
    //     std::cout << "doubleList is empty." << std::endl;
    // }

    // if (strChecker.checkResult()) {
    //     std::cout << "strList is not empty." << std::endl;
    // } else {
    //     std::cout << "strList is empty." << std::endl;
    // }

	// Property p("test");
	// Property p1(234);
	// Property p2(1.234);

	// std::cout << p.data<std::string>() << std::endl;
	// std::cout << p1.data<int>() << std::endl;
	// std::cout << p2.data<double>() << std::endl;

	TestBase::getInstance().notify("Item1");
	TestBase::getInstance().notifyResult("Item1", Result::OK);
	TestBase::getInstance().notify("Item2");
	TestBase::getInstance().notifyResult("Item2", Result::NG);
	TestBase::getInstance().notify("Item3");
	TestBase::getInstance().notifyResult("Item3", Result::OK);

	Vector ve1(2.5, 1.2);
    Vector ve2(2.5, 1.5);
    Vector result = ve1 + ve2;
    std::cout << "Result: " <<  result.x << " " << result.y << std::endl;

	Vector ve3({1, 2, 3, 4, 7});
	ve3.print();
	std::shared_ptr<Color> color = std::make_shared<Color>();
	color->print("red");
	color->print("green", "blue");



	// for (int i = 0; i < allLists.size(); i++) {
	// 	std::shared_ptr<ExistenceVaildtionCheckList> value = std::make_shared<ExistenceVaildtionCheckList>(allLists[i]);
	// 	std::cout << value->check(i) << std::endl;
	// }

	// v.int_value = 2;
	// v.double_value = 8.5;
	// v.str_value = "";
	// // vからでも値は取得出来て継承出来る
	// // v.bool_value = true;
	// bv.bool_value = true;
	// ev.int_list = {};
	// ev.double_list = {2.3, 4.5};
	// ev.str_list = {"test", "piyo"};

	// for (int i = 0; i < v.int_list.size(); i++) {
	// 	cout << v.int_list[i] << endl;
	// }

	// cout << v.int_check(0, 10) << endl;
	// cout << v.double_check(2.4, 5.7) << endl;
	// cout << v.str_check() << endl;
	// cout << bv.bool_check() << endl;
	// cout << ev.exist_check(0) << endl;
	// cout << ev.exist_check(1) << endl;
	// cout << ev.exist_check(2) << endl;

	return 0;
}






