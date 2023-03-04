#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "vector.h"

TEST_CASE("Test week6 Inclass assignment") {
  SUBCASE("test empty input") {
      ifstream infile1("empty.txt");
      vector<int_vect> vect1 = read_vectors(infile1);
      CHECK(vect1.size() == 0);
      infile1.close();
      remove("empty.txt");
  };
  SUBCASE("test input wihtout sort"){
      ofstream outfile2("non_empty.txt");
      outfile2 << "9 10\n11 12\n13 14";
      outfile2.close();
      ifstream infile2("non_empty.txt");
      vector<int_vect> vect2 = read_vectors(infile2);
      CHECK(vect2[0].id == 0);
      CHECK(vect2[0].from == 9);
      CHECK(vect2[0].to == 10);
      CHECK(vect2[1].id == 1);
      CHECK(vect2[1].from == 11);
      CHECK(vect2[1].to == 12);
      CHECK(vect2[2].id == 2);
      CHECK(vect2[2].from == 13);
      CHECK(vect2[2].to == 14);
      infile2.close();
      remove("non_empty.txt");
  }
  SUBCASE("test input and sort"){
      ofstream outfile2("non_empty.txt");
      outfile2 << "9 10\n11 12\n13 14";
      outfile2.close();
      ifstream infile2("non_empty.txt");
      vector<int_vect> vect2 = read_vectors(infile2);
      sort_vectors(vect2);
      CHECK(vect2[0].id == 2);
      CHECK(vect2[0].from == 13);
      CHECK(vect2[0].to == 14);
      CHECK(vect2[1].id == 1);
      CHECK(vect2[1].from == 11);
      CHECK(vect2[1].to == 12);
      CHECK(vect2[2].id == 0);
      CHECK(vect2[2].from == 9);
      CHECK(vect2[2].to == 10);
      infile2.close();
      remove("non_empty.txt");
  }
}
