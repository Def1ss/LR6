#include <gtest/gtest.h>
#include <cstring>
#include <cstdio>

const int MAX_LENGTH = 80;

void process_string(const char* str, const char* podstr, char symbol, char* result) {
    char word[MAX_LENGTH] = "";
    int j = 0;
    int k = 0;
    
    while (str[j] != '\0') {
        int l = 0;

        while (str[j] != ' ' && str[j] != '\0') {
            word[l++] = str[j++];
        }
        word[l] = '\0';
        strcat(result, word);

        if (l >= strlen(podstr) && strcmp(&word[l - strlen(podstr)], podstr) == 0) {
            int len_result = strlen(result);
            result[len_result] = symbol;
            result[len_result + 1] = '\0';
        }

        if (str[j] == ' ') {
            strcat(result, " ");
            j++;
        }
    }
}

TEST(StringProcessingTest, BasicTests) {
    char result[2 * MAX_LENGTH] = "";

    process_string("Hello world", "world", '!', result);
    EXPECT_STREQ(result, "Hello world!");

    strcpy(result, "");
    process_string("This is a test", "test", '*', result);
    EXPECT_STREQ(result, "This is a test*");

    strcpy(result, "");
    process_string("Test example", "example", '@', result);
    EXPECT_STREQ(result, "Test example@");

    strcpy(result, "");
    process_string("No match here", "notfound", '#', result);
    EXPECT_STREQ(result, "No match here");

    strcpy(result, "");
    process_string("Spaces are fun", "fun", '$', result);
    EXPECT_STREQ(result, "Spaces are fun$");
}

TEST(StringProcessingTest, EdgeCases) {
    char result[2 * MAX_LENGTH] = "";

    process_string("", "test", '!', result);
    EXPECT_STREQ(result, "");

    strcpy(result, "");
    process_string("SingleWord", "SingleWord", '*', result);
    EXPECT_STREQ(result, "SingleWord*");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
