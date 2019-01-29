/*
 Scan type: wigle
 Networks: 10
 Target lat, lon: 20.626721, -156.442799
 Comment: Big Beach entrance 3
 Generated: Oct 27, 2018 12:38:10
 (open + close this sketch to reload changes)
*/

// Copy and paste this to the networks.h file
/*
#include "networks/thiel_big_beach.h"
extern const byte NN_NN_THIEL_BIG_BEACH;
extern char* ssids_thiel_big_beach[];
extern byte bssids_[][6];
extern byte rssis_[]
extern byte channels_thiel_big_beach[];
extern String name_thiel_big_beach;
extern String city_thiel_big_beach;
*/

// Number of networks
const byte NN_THIEL_BIG_BEACH = 10;

// Name and location for OLED
String name_thiel_big_beach = "Peter Thiel (N+)";
String city_thiel_big_beach = "Big Beach, HI";

// SSIDs for display on OLED
char* ssids_thiel_big_beach[NN_THIEL_BIG_BEACH] = {
	"mack",
	"mack_2",
	"NETGEA",
	"Makena",
	"HP-Pri",
	"HT129",
	"dolphi",
	"Nani M",
	"Nani M",
	"dolphi"
};

// BSSIDs (MAC addresses)
byte bssids_thiel_big_beach[NN_THIEL_BIG_BEACH][6] = {
	{0x38, 0x3B, 0xC8, 0x1E, 0x60, 0x0A},
	{0x04, 0xA1, 0x51, 0x21, 0xD1, 0x0B},
	{0xA4, 0x2B, 0x8C, 0x82, 0xFE, 0x09},
	{0x90, 0x72, 0x40, 0x14, 0xED, 0x28},
	{0x74, 0x46, 0xA0, 0xDB, 0xE4, 0x6D},
	{0xB8, 0xE6, 0x25, 0x56, 0x5B, 0x52},
	{0x64, 0xA0, 0xE7, 0x5C, 0x47, 0x30},
	{0x00, 0x02, 0x6F, 0xE9, 0x8E, 0x96},
	{0x00, 0x26, 0xEC, 0x00, 0x93, 0x90},
	{0x1C, 0xE6, 0xC7, 0x5A, 0x1F, 0x40}
};

// RSSIs, experimental
byte rssis_thiel_big_beach[NN_THIEL_BIG_BEACH] = {
20, 20, 20, 19, 19, 19, 19, 19, 18, 18
};

byte channels_thiel_big_beach[NN_THIEL_BIG_BEACH] = {
 1, 2, 3, 4, 5, 6, 7, 8, 9, 11  
};