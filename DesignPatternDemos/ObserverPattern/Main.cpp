#include <tchar.h>
#include "WeatherData.h"
#include "IndoorDisplay.h"
#include "OutdoorDisplay.h"

int _tmain(int argc, wchar_t** argv)
{
	CWeatherData *pWeatherData = new CWeatherData();

	CIndoorDisplay *pIndoorDisplay = new CIndoorDisplay();	// will be deleted in Obserable Object
	COutdoorDisplay *pOutdoorDisplay = new COutdoorDisplay();
	pWeatherData->RegisterObserver(pIndoorDisplay);
	pWeatherData->RegisterObserver(pOutdoorDisplay);

	// display
	pIndoorDisplay->Display();
	pOutdoorDisplay->Display();

	pWeatherData->WeatherChanged(20.9f, 60.0f, 30.4f);

	// display after changed
	pIndoorDisplay->Display();
	pOutdoorDisplay->Display();

	delete pWeatherData;

	return 0;
}