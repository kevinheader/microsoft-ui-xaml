// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class ColorPickerSliderProperties
{
public:
    ColorPickerSliderProperties();

    void ColorChannel(winrt::ColorPickerHsvChannel const& value);
    winrt::ColorPickerHsvChannel ColorChannel();

    static winrt::DependencyProperty ColorChannelProperty() { return s_ColorChannelProperty; }

    static GlobalDependencyProperty s_ColorChannelProperty;

    static void EnsureProperties();
    static void ClearProperties();
};
