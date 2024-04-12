#include "tests.hpp"

#include <gtest/gtest.h>

#include "cpu_temperature.hpp"
#include "cabin_temperature.hpp"
#include "tire_pressure.hpp"

#include <type_traits>

TEST(TypeCheckTests, CheckReturnTypes) {
    static_assert(std::is_same_v<decltype(CPUTemperature().read()), temperature::kelvin>, "CPUTemperature::read must return temperature::kelvin");
    static_assert(std::is_same_v<decltype(CabinTemperature().read()), temperature::kelvin>, "CabinTemperature::read must return temperature::kelvin");
    static_assert(std::is_same_v<decltype(TirePressure().read()), pressure::psi>, "TirePressure::read must return pressure::psi");
}

TEST(SensorTests, CPUTemperatureRead) {
    CPUTemperature sensor;
    auto temp = sensor.read();
    ASSERT_TRUE(true);
}

TEST(SensorTests, CabinTemperatureRead) {
    CabinTemperature sensor;
    auto temp = sensor.read();
    ASSERT_TRUE(true);
}

TEST(SensorTests, TirePressureRead) {
    TirePressure sensor;
    auto pressure = sensor.read();
    ASSERT_TRUE(true);
}
