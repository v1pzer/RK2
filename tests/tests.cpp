#include <main.cpp>
#include <gtest/gtest.h>

TEST(PrintMonsterInfoTest1, Slime) {
  // Создаем фиктивное состояние слизи
  Slime::IntrinsicState slimeState{10, 5};

  // Создаем слизь с фиктивным состоянием
  Slime slime(slimeState);

  // Создаем фиктивный контекст для слизи
  MonsterContext slimeContext{100, 5, 7};

  // Создаем информацию о слизи
  MonsterInfo slimeInfo{slime, slimeContext};

  // Вызываем функцию PrintMonsterInfo() для слизи
  testing::internal::CaptureStdout();
  PrintMonsterInfo(slimeInfo);
  std::string output = testing::internal::GetCapturedStdout();

  // Проверяем, что функция PrintMonsterInfo() выводит правильную информацию
  EXPECT_EQ(output,
            "----- Slime -----\n"
            "HP           : 100\n"
            "Position     : (5, 7)\n"
            "Viscosity    : 10\n"
            "Transparency : 5\n"
            "-----------------\n");
}

TEST(PrintMonsterInfoTest2, Goblin) {
  // Создаем фиктивное состояние гоблина
  Goblin::IntrinsicState goblinState{7, 3};

  // Создаем гоблина с фиктивным состоянием
  Goblin goblin(goblinState);

  // Создаем фиктивный контекст для гоблина
  MonsterContext goblinContext{80, 10, 15};

  // Создаем информацию о гоблине
  MonsterInfo goblinInfo{goblin, goblinContext};

  // Вызываем функцию PrintMonsterInfo() для гоблина
  testing::internal::CaptureStdout();
  PrintMonsterInfo(goblinInfo);
  std::string output = testing::internal::GetCapturedStdout();

  // Проверяем, что функция PrintMonsterInfo() выводит правильную информацию
  EXPECT_EQ(output,
            "----- Goblin -----\n"
            "HP             : 80\n"
            "Position       : (10, 15)\n"
            "AngerDegree    : 7\n"
            "UglinessDegree : 3\n"
            "------------------\n");
}

TEST(PrintMonsterInfoTest3, Dragon) {
  // Создаем фиктивное состояние дракона
  Dragon::IntrinsicState dragonState{15, 8};

  // Создаем дракона с фиктивным состоянием
  Dragon dragon(dragonState);

  // Создаем фиктивный контекст для дракона
  MonsterContext dragonContext{150, 20, 25};

  // Создаем информацию о драконе
  MonsterInfo dragonInfo{dragon, dragonContext};

  // Вызываем функцию PrintMonsterInfo() для дракона
  testing::internal::CaptureStdout();
  PrintMonsterInfo(dragonInfo);
  std::string output = testing::internal::GetCapturedStdout();

  // Проверяем, что функция PrintMonsterInfo() выводит правильную информацию
  EXPECT_EQ(output,
            "----- Dragon -----\n"
            "HP        : 150\n"
            "Position  : (20, 25)\n"
            "Height    : 15\n"
            "FirePower : 8\n"
            "------------------\n");
}