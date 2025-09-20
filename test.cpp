#define CATCH_CONFIG_MAIN 
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

/*File containing test cases for implemented functions in functions_to_implement, LA 3.2
nabh6611*/

/*comment added to trigger workflow*/

TEST_CASE ( "Removing all substring instances", "[remove_all_substrings]") {
	
	REQUIRE( RemoveAllSubstrings("apple", "") == "apple" );
	REQUIRE( RemoveAllSubstrings("", "empty") == "" );
	CHECK( RemoveAllSubstrings("hippopotamushippo", "hippo") == "potamus" );
	CHECK( RemoveAllSubstrings("banana", "anan") == "ba" );
	CHECK( RemoveAllSubstrings("potato", "potatopotato") == "potato" );
	CHECK( RemoveAllSubstrings("catfish", "catfish") == "" );

}

TEST_CASE ( "Removing first substring instance", "[remove_first_substring]") {

	REQUIRE( RemoveFirstSubstring("apple", "") == "apple" );
	REQUIRE( RemoveFirstSubstring("", "empty") == "" );
	CHECK( RemoveFirstSubstring("hippopotamushippo", "hippo") == "potamushippo" );
	CHECK( RemoveFirstSubstring("bananabanana", "anan") == "babanana" );
	CHECK( RemoveFirstSubstring("potato", "potatopotato") == "potato" );
	CHECK( RemoveFirstSubstring("catfish", "catfish") == "" );

}


TEST_CASE ( "Checking for even numbers", "[check_for_even_vals]") {
	std::vector<int> v1{2, 4, 6, 8, 10};
	std::vector<int> v2{1, 3, 5, 7, 9};
	std::vector<int> v3{-1, 4, 7, -8, 9};
	
	CHECK( EvenMask(v1) == std::vector<bool>{1, 1, 1, 1, 1});
	CHECK( EvenMask(v2) == std::vector<bool>{0, 0, 0, 0, 0});
	CHECK( EvenMask(v3) == std::vector<bool>{0, 1, 0, 1, 0});
	
}

TEST_CASE ( "Checking for odd numbers", "[check_for_odd_vals]") {

	std::vector<int> v1{2, 4, 6, 8, 10};
	std::vector<int> v2{1, 3, 5, 7, 9};
	std::vector<int> v3{-1, 4, 7, -8, 9};
	
	CHECK( OddMask(v1) == std::vector<bool>{0, 0, 0, 0, 0});
	CHECK( OddMask(v2) == std::vector<bool>{1, 1, 1, 1, 1});
	CHECK( OddMask(v3) == std::vector<bool>{1, 0, 1, 0, 1});
	
}


