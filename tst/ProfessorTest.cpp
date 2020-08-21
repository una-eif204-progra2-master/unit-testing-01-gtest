//
// Created by Maikol Guzman on 8/20/20.
//

#include "gtest/gtest.h"
#include "../src/Professor.h"

TEST(ProfessorTestSuite, CalculateSalary){
    Professor professor;

    professor.setFirstName("Maikol");
    professor.setLastName("Guzman");
    professor.setDocumentId(12345);
    professor.setCommissionRate(0.13);
    professor.setMonthlySalary(100000);

    EXPECT_EQ(professor.salary(),113000);
    EXPECT_EQ(professor.getMonthlySalary(),100000);
}

