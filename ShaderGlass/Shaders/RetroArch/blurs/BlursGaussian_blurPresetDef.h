/*
ShaderGlass preset blurs / gaussian_blur imported from RetroArch:
https://github.com/libretro/slang-shaders/blob/25311dc03332d9ef2dff8d9d06c611d828028fac/blurs/gaussian_blur.slangp
See original file for credits and usage license. 
This file is auto-generated, do not modify directly.
*/

#pragma once

namespace RetroArch
{
class BlursGaussian_blurPresetDef : public PresetDef
{
public:
	BlursGaussian_blurPresetDef() : PresetDef{}
	{
		Name = "gaussian_blur";
		Category = "blurs";
	}

	virtual void Build() {
         	ShaderDefs.push_back(BlursShadersGaussian_blur_filteringGaussianShaderDef()
.Param("filter_linear", "false")
.Param("scale_type_x", "viewport")
.Param("scale_type_y", "viewport")
.Param("scale_x", "1.0")
.Param("scale_y", "1.0"));
	}
};
}
