#pragma once

#ifndef DND_SPELLBOOK_HPP
#define DND_SPELLBOOK_HPP

#include <map>
#include <vector>
namespace dnd{
  class classes{
    public:
      struct Class{
        std::string classname;
        std::string spellname;
        int time;
        std::map<std::string, std::string> traits;
        std::vector<std::string> prof;
        };
        typedef std::map<std::string, Class> cmap;
        static cmap classs;
  };

}
#endif //DND_SPELLBOOK_HPP
