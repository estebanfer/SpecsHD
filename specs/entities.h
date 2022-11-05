#include <string>
#include <vector>

const std::vector<std::pair<std::string, int>> gEntities = {
    {"None", 0},
    {"Landmine", 92},
    {"Chest", 100},
    {"Crate", 101},
    {"Gold Bar", 102},
    {"Gold Pyramid", 103},

    {"Emerald Large", 104},
    {"Sapphire Large", 105},
    {"Ruby Large", 106},
    {"Live Bomb", 107},
    {"Deploy Rope", 108},
    {"Whip", 109},
    {"Blood", 110},
    {"Dirt Break", 111},
    {"Rock", 112},
    {"Pot", 113},
    {"Skull", 114},
    {"Cobweb", 115},
    {"Sticky Honey", 116},
    {"Bullet", 117},
    {"Gold Nugget Large", 118},

    {"Boulder", 120},
    {"Push Block", 121},
    {"Arrow", 122},

    {"Gold Nugget Small", 124},
    {"Emerald Small", 125},
    {"Sapphire Small", 126},
    {"Ruby Small", 127},

    {"Cobweb Projectile", 142},
    {"Udjat Chest", 153},
    {"Golden Key", 154},
    {"Used Parachute", 156},

    {"Static Swing Attack Projectile", 158},
    {"Psychic Attack Bubbling", 159},
    {"UFO Projectile", 160},
    {"Blue Falling Platform", 161},
    {"Lantern", 162},
    {"Flare", 163},
    {"Snowball", 164},
    {"Vomit Fly", 165},

    {"White Flag", 171},
    {"Piranha Skeleton", 172},
    {"Diamond", 173},
    {"Worm Tongue", 174},
    {"Magma Cauldron", 176},
    {"Wide Light Emitter", 177},
    {"Spike Ball Detached", 178},
    {"Breaking Chain Projectile", 179},
    {"Tutorial Journal", 180},
    {"Journal Page", 181},
    {"Worm Regen Block", 182},
    {"Cracking Ice Platform", 183},
    {"Leaf", 184},
    {"Decoy Chest", 187},
    {"Prize Wheel", 188},
    {"Prize Wheel Pin", 189},
    {"Prize Wheel Barricade", 190},
    {"Snail Bubble", 192},
    {"Cobra Venom Projectile", 193},
    {"Falling Icicle Projectile", 194},
    {"Broken Ice Projectiles", 195},
    {"Splashing Water Projectile", 196},
    {"Alien Forcefield Ground Laser", 197},
    {"Freeze Ray Projectile", 203},
    {"Plasma Cannon Projectile/Shot", 204},
    {"Mattock Head", 210},
    {"Turret Projectile", 213},
    {"Mothership Platform", 214},
    {"Mothership Elevator", 215},
    {"Arrow Shaft", 216},
    {"Olmec Enemy Spawn Projectile", 217},
    {"Splashing Water", 218},
    {"Ball & Chain without Chain", 220},
    {"Smoke Poof", 221},
    {"Ending Cutscene Camel", 224},
    {"Kill Target", 225},
    {"Activated Kill Target Laser", 226},
    {"Mothership Lights", 227},
    {"Broken Web Pouch", 228},
    {"Breaking Animation", 232},
    {"Magma Flame Animation", 233},
    {"Anubis II Spawner", 234},
    {"TNT", 235},
    {"Spinner Spider Thread", 236},
    {"Destroyed Cobweb", 237},
    {"Decoy Yang", 239},
    {"Zero-Value Gold Nugget", 240},

    {"Mounted Lightable Torch Holder", 245},
    {"Unlit Torch", 246},
    {"Purple Target", 247},
    {"Unopenable Mystery Box", 248},
    {"Crowned Skull", 250},
    {"Eggplant", 252},

    {"Exploding Animation", 301},
    {"Laser Effect", 302},
    {"Small Light", 303},
    {"Spring Rings", 304},
    {"Teleport Effect", 305},
    {"Wall Torch Flame", 306},
    {"Extinguished Torch Animation", 307},

    {"Rope Pile", 500},
    {"Bomb Bag", 501},
    {"Bomb Box", 502},
    {"Spectacles", 503},
    {"Climbing Gloves", 504},
    {"Pitcher's Mitt", 505},
    {"Spring Shoes", 506},
    {"Spike Shoes", 507},
    {"Bomb Paste", 508},
    {"Compass", 509},
    {"Mattock", 510},
    {"Boomerang", 511},
    {"Machete", 512},
    {"Crysknife", 513},
    {"Web Gun", 514},
    {"Shotgun", 515},
    {"Freeze Ray", 516},
    {"Plasma Cannon", 517},
    {"Camera", 518},
    {"Teleporter", 519},
    {"Parachute", 520},
    {"Cape", 521},
    {"Jetpack", 522},
    {"Shield", 523},
    {"Queen Bee Royal Jelly", 524},
    {"Idol", 525},
    {"Kapala", 526},
    {"Udjat Eye", 527},
    {"Ankh", 528},
    {"Hedjet", 529},
    {"Scepter", 530},
    {"Book of the Dead", 531},
    {"Vlad's Cape", 532},
    {"Vlad's Amulet", 533},

    {"Snake", 1001},
    {"Spider", 1002},
    {"Bat", 1003},
    {"Caveman", 1004},
    {"Damsel", 1005},
    {"Shopkeeper", 1006},
    {"Blue Frog", 1007},
    {"Mantrap", 1008},
    {"Yeti", 1009},
    {"UFO", 1010},
    {"Hawk Man", 1011},
    {"Skeleton", 1012},
    {"Piranha", 1013},
    {"Mummy", 1014},
    {"Monkey", 1015},
    {"Alien Lord", 1016},
    {"Ghost", 1017},
    {"Giant Spider", 1018},
    {"Jiang Shi", 1019},
    {"Vampire", 1020},
    {"Orange Frog", 1021},
    {"Tunnel Man", 1022},
    {"Old Bitey", 1023},
    {"Golden Scarab", 1024},
    {"Yeti King", 1025},
    {"Little Alien", 1026},
    {"Magma Man", 1027},
    {"Vlad", 1028},
    {"Scorpion", 1029},
    {"Imp", 1030},
    {"Blue Devil", 1031},
    {"Bee", 1032},
    {"Anubis", 1033},
    {"Queen Bee", 1034},
    {"Bacterium", 1035},
    {"Cobra", 1036},
    {"Spinner Spider", 1037},
    {"Big Frog", 1038},
    {"Mammoth", 1039},
    {"Alien Tank", 1040},
    {"Tiki Man", 1041},
    {"Scorpion Fly", 1042},
    {"Snail", 1043},
    {"Croc Man", 1044},
    {"Green Knight", 1045},
    {"Worm Egg", 1046},
    {"Worm Baby", 1047},
    {"Alien Queen", 1048},
    {"Black Knight", 1049},
    {"Golden Monkey", 1050},
    {"Succubus", 1051},
    {"Horse Head", 1052},
    {"Ox Face", 1053},
    {"King Yama Head", 1056},
    {"King Yama Fist", 1057},
    {"Turret", 1058},
    {"Blue Frog Critter", 1059},
    {"Alien Queen Eye", 1060},
    {"Spiderling Critter", 1061},
    {"Fish Critter", 1062},
    {"Rat Critter", 1063},
    {"Penguin Critter", 1064},
    {"Little Alien Horizontally Moving", 1065},
    {"Locust Critter", 1067},
    {"Maggot Critter", 1068},
};