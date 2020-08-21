//
// Created by Maikol Guzman on 8/20/20.
//

#include <Administrative.h>
#include "gtest/gtest.h"

TEST(AdministrativeTestSuite, CalculateSalary) {
    Administrative administrative;

    administrative.setFirstName("Pedro");
    administrative.setLastName("Villegas");
    administrative.setDocumentId(36525);
    administrative.setMonthlySalary(80000);

    EXPECT_EQ(administrative.salary(),80000);
}
