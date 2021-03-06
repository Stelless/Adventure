#include <iostream>
#include <vector>
#include "AdventureData.h"

using namespace std;

const CaveData AdventureData::troll_cave_data   // Definition
{
//   
   //0         1         2         3         4         5
   //012345678901234567890123456789012345678901234567890123456789
   {"*******************   **************************"}, // 0
   {"X*****************      ************************"}, // 1
   {"****************          **********************"}, // 2
   {"***************           **********************"}, // 3
   {"************    ***      ***********************"}, // 4 
   {"**********   ******      ***********************"}, // 5
   {"*******     *******      ***********************"}, // 6
   {"*******  ************      *********************"}, // 7
   {"*******  ************  **           ************"}, // 8
   {"*******     *********  ***         w************"}, // 9
   {"***********       ***  ***        ww************"}, // 10
   {"**********         **  *****    wwwww***********"}, // 11
   {"****************       ******  wwwwww***********"}, // 12
   {"*******************     ************************"}, // 13
   {"*********************   ************************"}, // 14
   {"********************g  *************************"}, // 15
   {"*************gggggggg  gggggggggg***************"}, // 16*
   {"                                                "}, // 17
   {"*************gggggggg  gggggggggg************** "}, // 18
   {"***************gggggg  ggggggg***************** "}, // 19
   {"*****************gggg  gggggg****************** "}, // 20
   {"*******************gg  gggg                     "}, // 21
};

const vector<InteractiveData> AdventureData::interactive_troll_cave_data{
   /*Interactive Data does NOT include Player*/
   
   {2,20, 's'}, /*Sword*/
   {10,30, 'T'}, /*Troll*/
};

void AdventureData::printCaveData(const CaveData& cave_data)
{
   std::cout << "Printing cave data ..." << std::endl;
   for (const auto& cave_data_row : cave_data)
   {
      for (const auto& cave_data_elem : cave_data_row)
         std::cout << cave_data_elem;

      std::cout << std::endl;
   }
}