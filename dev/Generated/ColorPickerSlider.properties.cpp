// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#include "pch.h"
#include "common.h"
#include "ColorPickerSlider.h"

CppWinRTActivatableClassWithDPFactory(ColorPickerSlider)

GlobalDependencyProperty ColorPickerSliderProperties::s_ColorChannelProperty{ nullptr };

ColorPickerSliderProperties::ColorPickerSliderProperties()
{
    EnsureProperties();
}

void ColorPickerSliderProperties::EnsureProperties()
{
    if (!s_ColorChannelProperty)
    {
        s_ColorChannelProperty =
            InitializeDependencyProperty(
                L"ColorChannel",
                winrt::name_of<winrt::ColorPickerHsvChannel>(),
                winrt::name_of<winrt::ColorPickerSlider>(),
                false /* isAttached */,
                ValueHelper<winrt::ColorPickerHsvChannel>::BoxValueIfNecessary(winrt::ColorPickerHsvChannel::Value),
                nullptr);
    }
}

void ColorPickerSliderProperties::ClearProperties()
{
    s_ColorChannelProperty = nullptr;
}

void ColorPickerSliderProperties::ColorChannel(winrt::ColorPickerHsvChannel const& value)
{
    static_cast<ColorPickerSlider*>(this)->SetValue(s_ColorChannelProperty, ValueHelper<winrt::ColorPickerHsvChannel>::BoxValueIfNecessary(value));
}

winrt::ColorPickerHsvChannel ColorPickerSliderProperties::ColorChannel()
{
    return ValueHelper<winrt::ColorPickerHsvChannel>::CastOrUnbox(static_cast<ColorPickerSlider*>(this)->GetValue(s_ColorChannelProperty));
}
