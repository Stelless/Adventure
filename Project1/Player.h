#pragma once
#include "IGameObject.h"
#include "Colors.h"  

class Player : public IGameObject
{
private:


   std::string player_obj_type{ "Player" };
   std::string player_symbol{ BrightYelloMacro "\xEB" ColorResetMacro };

public:
   size_t row{};
   size_t col{};
   Player(size_t _row, size_t _col)
   {
      row = _row;
      col = _col;
   }



   const std::string& objType() const override { return player_obj_type; };
   const std::string& getSymbol() const override { return player_symbol; };

   bool isDisplayable() const override { return true; };
};