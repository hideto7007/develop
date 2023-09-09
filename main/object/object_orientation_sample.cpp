#include <vector>
#include <algorithm>
#include <iostream>
#include <random>
#include <array>
#include <typeinfo>
#include <regex>
#include <cassert>
#include <type_traits>
#include <map>
#include <thread>
#include <chrono>
#include <initializer_list>
#define NDEBUG


/**
 * 各値バリデーションチェック
*/

class ValueVaildtionCheckList {
	private:
		int intValue;
		double doubleValue;
		std::string strValue;

	public:
		ValueVaildtionCheckList(int mValue) : intValue(mValue) {};
		ValueVaildtionCheckList(double mValue) : doubleValue(mValue) {};
		ValueVaildtionCheckList(const std::string& mValue) : strValue(mValue) {};
		

		bool Check(int min, int max) {
			bool flag = false;
			if (min <= intValue && intValue <= max) {
				flag = true;
			}
			return flag;
		}

		bool Check(double min, double max) {
			bool flag = false;
			if (min <= doubleValue && doubleValue <= max) {
				flag = true;
			}
			return flag;
		}

		bool Check() {
			bool flag = false;
			if (strValue != "") {
				flag = true;
			}
			return flag;
		}
};


/**
 * 論理値のバリデーションチェック
*/
class BooleanVaildtionCheckList : public ValueVaildtionCheckList {
	private:
		bool boolValue;
    public:
		BooleanVaildtionCheckList(bool b) : ValueVaildtionCheckList(0), boolValue(b) {};
        bool check() {
			bool flag = false;
			if (boolValue) {
				flag = true;
			}
			return flag;
		}
};


/**
 * 配列内要素のバリデーションチェック
*/
template <typename T>
class ExistenceVaildtionCheckList {
	private:
		std::vector<T> data;

    public:
		ExistenceVaildtionCheckList(std::vector<T>& mList) : data(mList) {}
        
		bool check() {
			return !data.empty();
    	}

		bool checkResult() {
			ExistenceVaildtionCheckList<T> checker(data);
			return checker.check();
		}
	
};


// std::string test_case_macro(int a, const std::string& b) {
// 	if (0 < a && a <= 100 && b.find("test") != std::string::npos) {
// 		std::string result = b + "_" + std::to_string(a);
// 		return result;
// 	}
// 	return "not target test case";
// }


class Base {
	public:
		Base(const std::string& str) : mStr(str) {}
		Base(int iNum) : mInt(iNum) {}
		Base(double dNum) : mDouble(dNum) {}

	protected:
		std::string mStr;
		int mInt;
		double mDouble;
		
};

class Property : public Base {
	public:
		Property(const std::string& str) : Base(str) {}
		Property(int iNum) : Base(iNum) {}
		Property(double dNum) : Base(dNum) {}

		template <typename T> 
		T data() {
			if constexpr (std::is_same_v<T, std::string>) {
				return mStr;
			} else if constexpr (std::is_same_v<T, int>) {
				return mInt;
			} else if constexpr (std::is_same_v<T, double>) {
				return mDouble;
			}
			throw std::runtime_error("Unsupported data type");
		}

		bool exist() {
			return (!mStr.empty()) ? true : false;
		}
};


enum class Result {
	NG,
	OK
};



class TestBase {
	public:
		static TestBase& getInstance() {
			static TestBase instance;
			return instance;
		}

	void notify(const std::string& name) {

		if (result.find(name) != result.end()) {
			return;
		}
		result[name] = Result::OK;
	}

	void notifyResult(const std::string& name, Result re1) {
		auto it = result.find(name);

		Result re;

		if (it != result.end()) {
			if (it->first == name && it->second == re1) {
				re = it->second;
			} else {
				for (int i = 0; i < 100; i++) {
					result[name] = Result::NG;
				}
				re = result.find(name)->second;
			}
		} else {
			clear();
			result["diff Item"] = Result::NG;
		}
        for (const auto& pair : result) {
			auto result1 = (static_cast<int>(pair.second) == 0) ? "NG" : "OK";
            std::cout << "item: " << pair.first << ", result: " << result1 << std::endl;
        }

		clear();

		// return re;
	}


	void clear() {
		result.clear();
	}


	private:
		std::map<std::string, Result> result;
};


class Vector {
	public:
		double x, y;

		Vector(double _x, double _y) : x(_x), y(_y) {}
		Vector(std::initializer_list<int> numbers) {
			for (int num : numbers) {
				val.push_back(num);
			}
		}

		Vector operator+(const Vector& other) const {
			return Vector(x + other.x, y + other.y);
		}
		void print() {
			for (int v : val) {
				std::cout << "val : " << v << std::endl;
			}
		}
	private:
		std::vector<int> val;
};


class Color {
	private:
		std::string name;
	public:
		void print(const std::string& str1) {
			std::cout << str1 << std::endl;
		}
		void print(const std::string& str1, const std::string& str2) {
			std::cout << str1 << " : " << str2 << std::endl;
		}
};

