

float AS01_CalculatePower(float CPU_num, float CPU_loaded)
{
	float Power_usage = 10.0 * (CPU_num * CPU_loaded) + 2.0 * (CPU_num * (1.0 - CPU_loaded));

	return Power_usage;
}

float AS01_CalculateEnergy(float Power_Usage)
{
	float Energy = (8760 * Power_Usage) / 1000000.0;

	return Energy;
}

float AS01_CalculateCO2(float Energy)
{
	float CO2 = 0.25 * (Energy * 1000.0);

	return CO2;
}