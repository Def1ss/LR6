#include <gtest/gtest.h>

// Функция для подсчета единиц в группах с нечетным количеством символов
int countOnesInOddGroups(const char *binary_string)
{
    int count = 0;
    char current_char = '\0';
    int current_length = 0;

    for (int i = 0; binary_string[i] != '\0'; ++i)
    {
        char c = binary_string[i];
        if (c == current_char)
        {
            current_length++;
        }
        else
        {
            if (current_length % 2 == 1 && current_char == '1')
            {
                count += current_length;
            }
            current_char = c;
            current_length = 1;
        }
    }

    if (current_length % 2 == 1 && current_char == '1')
    {
        count += current_length;
    }

    return count;
}

// Обычные тесты
TEST(CountOnesInOddGroupsTest, Test1) {
    EXPECT_EQ(countOnesInOddGroups("111"), 3);
}

TEST(CountOnesInOddGroupsTest, Test2) {
    EXPECT_EQ(countOnesInOddGroups("000"), 0);
}

TEST(CountOnesInOddGroupsTest, Test3) {
    EXPECT_EQ(countOnesInOddGroups("10101"), 3);
}

TEST(CountOnesInOddGroupsTest, Test4) {
    EXPECT_EQ(countOnesInOddGroups("111000111"), 6);
}

TEST(CountOnesInOddGroupsTest, Test5) {
    EXPECT_EQ(countOnesInOddGroups("10001"), 1);
}

TEST(CountOnesInOddGroupsTest, Test6) {
    EXPECT_EQ(countOnesInOddGroups("11011"), 4);
}

TEST(CountOnesInOddGroupsTest, Test7) {
    EXPECT_EQ(countOnesInOddGroups("0001100"), 0);
}

TEST(CountOnesInOddGroupsTest, Test8) {
    EXPECT_EQ(countOnesInOddGroups("111111"), 6);
}

TEST(CountOnesInOddGroupsTest, Test9) {
    EXPECT_EQ(countOnesInOddGroups("101010"), 0);
}

TEST(CountOnesInOddGroupsTest, Test10) {
    EXPECT_EQ(countOnesInOddGroups("1"), 1);
}

// Краевые тесты
TEST(CountOnesInOddGroupsTest, EdgeTest1) {
    EXPECT_EQ(countOnesInOddGroups(""), 0); // Пустая строка
}

TEST(CountOnesInOddGroupsTest, EdgeTest2) {
    EXPECT_EQ(countOnesInOddGroups("0"), 0); // Одна ноль
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
