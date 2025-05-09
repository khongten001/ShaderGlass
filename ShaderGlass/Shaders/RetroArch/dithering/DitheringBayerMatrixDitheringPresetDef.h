/*
ShaderGlass preset dithering / bayer-matrix-dithering imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/dithering/bayer-matrix-dithering.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class DitheringBayerMatrixDitheringPresetDef : public PresetDef
{
public:
	DitheringBayerMatrixDitheringPresetDef() : PresetDef{}
	{
		Name = "bayer-matrix-dithering";
		Category = "dithering";
	}

	virtual void Build() {
         	ShaderDefs.push_back(DitheringShadersBayerMatrixDitheringShaderDef()
.Param("filter_linear", "false")
.Param("scale_type", "source"));
	}
};
}
