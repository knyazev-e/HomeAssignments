/* Kniazeva Eva Andreevna
st128104@student.spbu.ru */


#include <gtest/gtest.h>
#include "Transformer.h"
#include "Autobot.h"
#include "Decepticon.h"
#include "Worker.h"
#include "Effect.h"
#include "Weapon.h"


TEST(TransformerTest, BumblebeeTest) {
    Weapon laser("optical");
    Weapon none("empty");
    Effect agility("Agility");
    Effect speedup("SpeedUp");
    Transformer bumblebee(" ", 1, agility, &none);

    bumblebee.setName("Bumblebee");
    bumblebee.setHp(1000);
    bumblebee.setEffect(speedup);
    bumblebee.setWeapon(&laser);
    bumblebee.setPower(50);

    EXPECT_EQ(bumblebee.getName(), "Bumblebee");
    EXPECT_EQ(bumblebee.getHp(), 1000);
    EXPECT_EQ(bumblebee.getEffect().getName(), "SpeedUp");
    EXPECT_EQ(bumblebee.getWeapon()->getWeaponType(), "optical");
    EXPECT_EQ(bumblebee.getPower(), 50);
}

TEST(DecepticonTest, MegatronTest) {
    Weapon laser("optical");
    Weapon none("empty");
    Effect agility("Agility");
    Effect speedup("SpeedUp");
    Decepticon megatron(" ", 1, agility, &none, 10);

    megatron.setName("Megatron");
    megatron.setHp(1000);
    megatron.setEffect(speedup);
    megatron.setWeapon(&laser);
    megatron.setPower(80);
    megatron.setStability(11);
    megatron.setLuck(true);

    EXPECT_EQ(megatron.getName(), "Megatron");
    EXPECT_EQ(megatron.getHp(), 1000);
    EXPECT_EQ(megatron.getEffect().getName(), "SpeedUp");
    EXPECT_EQ(megatron.getWeapon()->getWeaponType(), "optical");
    EXPECT_EQ(megatron.getPower(), 80);
    EXPECT_EQ(megatron.getStability(), 11);
    EXPECT_EQ(megatron.getLuck(), true);
}

TEST(AutobotTest, OptimusTest) {
    Weapon laser("optical");
    Weapon gun("firearm");
    Effect agility("Agility");
    Effect speedup("SpeedUp");
    Autobot optimus(" ", 1, agility, &laser, 110, "default");

    optimus.setName("OptimusPrime");
    optimus.setHp(1000);
    optimus.setEffect(speedup);
    optimus.setWeapon(&gun);
    optimus.setPower(100);
    optimus.setSpeed(130);
    optimus.setState("active");
    optimus.setAttention(true);

    EXPECT_EQ(optimus.getName(), "OptimusPrime");
    EXPECT_EQ(optimus.getHp(), 1000);
    EXPECT_EQ(optimus.getEffect().getName(), "SpeedUp");
    EXPECT_EQ(optimus.getWeapon()->getWeaponType(), "firearm");
    EXPECT_EQ(optimus.getPower(), 100);
    EXPECT_EQ(optimus.getSpeed(), 130);
    EXPECT_EQ(optimus.getState(), "active");
    EXPECT_EQ(optimus.getAttention(), true);
}

TEST(WorkerTest, RobotTest) {
    Weapon laser("optical");
    Weapon none("empty");
    Effect agility("Agility");
    Effect speedup("SpeedUp");
    Worker robot(" ", 1, agility, &laser, "Construction", 100);

    robot.setName("Robot");
    robot.setHp(1000);
    robot.setEffect(speedup);
    robot.setWeapon(&none);
    robot.setPower(50);
    robot.setJob("Engineering");
    robot.setEfficiency(70);

    EXPECT_EQ(robot.getName(), "Robot");
    EXPECT_EQ(robot.getHp(), 1000);
    EXPECT_EQ(robot.getEffect().getName(), "SpeedUp");
    EXPECT_EQ(robot.getWeapon()->getWeaponType(), "empty");
    EXPECT_EQ(robot.getPower(), 50);
    EXPECT_EQ(robot.getJob(), "Engineering");
    EXPECT_EQ(robot.getEfficiency(), 70);
}

TEST(OverloadTest, OperatorsTest) {
    Worker RandomWorker;
    Autobot TestAutobot;

    EXPECT_EQ(RandomWorker.getName(), "Unnamed");
    EXPECT_EQ(RandomWorker.getHp(), 1000);
    EXPECT_EQ(RandomWorker.getEffect().getName(), "NoEffect");
    EXPECT_EQ(RandomWorker.getWeapon(), nullptr);
    EXPECT_EQ(RandomWorker.getPower(), 100);
    EXPECT_EQ(RandomWorker.getJob(), "Unspecified");
    EXPECT_EQ(RandomWorker.getEfficiency(), 10);

    EXPECT_EQ(TestAutobot.getName(), "Unnamed");
    EXPECT_EQ(TestAutobot.getHp(), 1000);
    EXPECT_EQ(TestAutobot.getEffect().getName(), "NoEffect");
    EXPECT_EQ(TestAutobot.getWeapon(), nullptr);
    EXPECT_EQ(TestAutobot.getPower(), 100);
    EXPECT_EQ(TestAutobot.getSpeed(), 10);
    EXPECT_EQ(TestAutobot.getState(), "Default");
    EXPECT_EQ(TestAutobot.getAttention(), false);

    EXPECT_EQ(RandomWorker == TestAutobot, true);
    RandomWorker.setPower(110);
    EXPECT_EQ(RandomWorker > TestAutobot, true);
    TestAutobot.setPower(160);
    EXPECT_EQ(RandomWorker < TestAutobot, true);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
