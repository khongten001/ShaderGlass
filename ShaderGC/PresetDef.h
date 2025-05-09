/*
ShaderGC: slangp shader compiler for ShaderGlass
Copyright (C) 2021-2025 mausimus (mausimus.net)
https://github.com/mausimus/ShaderGlass
GNU General Public License v3.0
*/

#pragma once

#include "framework.h"
#include "ShaderDef.h"
#include "TextureDef.h"

class PresetDef
{
public:
    PresetDef() : ShaderDefs {}, TextureDefs {}, Overrides {}, Name {}, Category {}, ImportPath {} { }

    virtual void Build() { }

    void OverrideParam(const char* name, float value)
    {
        Overrides.emplace_back(name, value);
    }

    void MakeDynamic()
    {
        for(auto& s : ShaderDefs)
            s.Dynamic = true;
        for(auto& t : TextureDefs)
            t.Dynamic = true;
    }

    std::vector<ShaderDef>     ShaderDefs;
    std::vector<TextureDef>    TextureDefs;
    std::vector<ParamOverride> Overrides;
    std::string                Name;
    std::string                Category;
    std::filesystem::path      ImportPath;
};