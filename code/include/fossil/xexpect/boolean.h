/*
==============================================================================
Author: Michael Gene Brockus (Dreamer)
Email: michaelbrockus@gmail.com
Organization: Fossil Logic
Description: 
    This file is part of the Fossil Logic project, where innovation meets
    excellence in software development. Michael Gene Brockus, also known as
    "Dreamer," is a dedicated contributor to this project. For any inquiries,
    feel free to contact Michael at michaelbrockus@gmail.com.
==============================================================================
*/
#ifndef FOSSIL_TEST_EXPECT_BOOLEAN_TYPE_H
#define FOSSIL_TEST_EXPECT_BOOLEAN_TYPE_H

#include <fossil/unittest.h> // using assurt rules from Fossil Test
#include <stdbool.h>

#ifdef __cplusplus
extern "C"
{
#endif

// Boolean ITS assertions
#define EXPECT_ITS_TRUE(actual) \
    TEST_EXPECT((actual), "Expected " #actual " to be true")

#define EXPECT_ITS_FALSE(actual) \
    TEST_EXPECT(!(actual), "Expected " #actual " to be false")

// Boolean NOT assertions
#define EXPECT_NOT_TRUE(actual) \
    TEST_EXPECT(!(actual), "Expected " #actual " to not be true")

#define EXPECT_NOT_FALSE(actual) \
    TEST_EXPECT((actual), "Expected " #actual " to not be false")

#ifdef __cplusplus
}
#endif

#endif
