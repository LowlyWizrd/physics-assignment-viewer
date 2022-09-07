#include "../imgui/imgui.h"
#include "../utils/imgui_extras.h"
#include "../assignments/AS0X.h"

void AS01_UI()
{
	if (ImGui::CollapsingHeader("Assignment 1"))
	{
		static float CPU_fraction = 0.5f;
		static int CPU_num = 0;
		static float Power_Usage = 0;
		static float Energy = 0;
		static float CO2 = 0;
		ImGui::TextWrapped("This is a simple assignment. It will calculate the power,"
			"energy and CO2 produced by the input computer. Use the input box to set the number of CPUs" 
			" and use the slider to set their load ratio.");
		ImGui::SameLine; HelpMarker("For instance, given a laptop with 4 cores that is on for 6 hours a day,"
			"the inputs would be 4 cores at 25 percent.");
		ImGui::PushItemWidth(-150);
		ImGui::InputInt("Number of CPU Cores", &CPU_num);
		ImGui::PushItemWidth(-150);
		ImGui::SliderFloat("CPU Percentage Load", &CPU_fraction, 0.0f, 1.0f);
		ImGui::SameLine; HelpMarker("CTRL + Click to set value manually");
		Power_Usage = AS01_CalculatePower((float)CPU_num, CPU_fraction);
		Energy = AS01_CalculateEnergy(Power_Usage);
		CO2 = AS01_CalculateCO2(Energy);
		ImGui::TextWrapped("The input CPU has uses %.2f W of power for a total of %.2f MWh annually. This contributes %.2f kg of CO2 every year.", Power_Usage, Energy, CO2);
	}
}