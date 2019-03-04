// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class ColorPickerProperties
{
public:
    ColorPickerProperties();

    void Color(winrt::Color const& value);
    winrt::Color Color();

    void ColorSpectrumComponents(winrt::ColorSpectrumComponents const& value);
    winrt::ColorSpectrumComponents ColorSpectrumComponents();

    void ColorSpectrumShape(winrt::ColorSpectrumShape const& value);
    winrt::ColorSpectrumShape ColorSpectrumShape();

    void IsAlphaEnabled(bool value);
    bool IsAlphaEnabled();

    void IsAlphaSliderVisible(bool value);
    bool IsAlphaSliderVisible();

    void IsAlphaTextInputVisible(bool value);
    bool IsAlphaTextInputVisible();

    void IsColorChannelTextInputVisible(bool value);
    bool IsColorChannelTextInputVisible();

    void IsColorPreviewVisible(bool value);
    bool IsColorPreviewVisible();

    void IsColorSliderVisible(bool value);
    bool IsColorSliderVisible();

    void IsColorSpectrumVisible(bool value);
    bool IsColorSpectrumVisible();

    void IsHexInputVisible(bool value);
    bool IsHexInputVisible();

    void IsMoreButtonVisible(bool value);
    bool IsMoreButtonVisible();

    void MaxHue(int value);
    int MaxHue();

    void MaxSaturation(int value);
    int MaxSaturation();

    void MaxValue(int value);
    int MaxValue();

    void MinHue(int value);
    int MinHue();

    void MinSaturation(int value);
    int MinSaturation();

    void MinValue(int value);
    int MinValue();

    void PreviousColor(winrt::IReference<winrt::Color> const& value);
    winrt::IReference<winrt::Color> PreviousColor();

    static winrt::DependencyProperty ColorProperty() { return s_ColorProperty; }
    static winrt::DependencyProperty ColorSpectrumComponentsProperty() { return s_ColorSpectrumComponentsProperty; }
    static winrt::DependencyProperty ColorSpectrumShapeProperty() { return s_ColorSpectrumShapeProperty; }
    static winrt::DependencyProperty IsAlphaEnabledProperty() { return s_IsAlphaEnabledProperty; }
    static winrt::DependencyProperty IsAlphaSliderVisibleProperty() { return s_IsAlphaSliderVisibleProperty; }
    static winrt::DependencyProperty IsAlphaTextInputVisibleProperty() { return s_IsAlphaTextInputVisibleProperty; }
    static winrt::DependencyProperty IsColorChannelTextInputVisibleProperty() { return s_IsColorChannelTextInputVisibleProperty; }
    static winrt::DependencyProperty IsColorPreviewVisibleProperty() { return s_IsColorPreviewVisibleProperty; }
    static winrt::DependencyProperty IsColorSliderVisibleProperty() { return s_IsColorSliderVisibleProperty; }
    static winrt::DependencyProperty IsColorSpectrumVisibleProperty() { return s_IsColorSpectrumVisibleProperty; }
    static winrt::DependencyProperty IsHexInputVisibleProperty() { return s_IsHexInputVisibleProperty; }
    static winrt::DependencyProperty IsMoreButtonVisibleProperty() { return s_IsMoreButtonVisibleProperty; }
    static winrt::DependencyProperty MaxHueProperty() { return s_MaxHueProperty; }
    static winrt::DependencyProperty MaxSaturationProperty() { return s_MaxSaturationProperty; }
    static winrt::DependencyProperty MaxValueProperty() { return s_MaxValueProperty; }
    static winrt::DependencyProperty MinHueProperty() { return s_MinHueProperty; }
    static winrt::DependencyProperty MinSaturationProperty() { return s_MinSaturationProperty; }
    static winrt::DependencyProperty MinValueProperty() { return s_MinValueProperty; }
    static winrt::DependencyProperty PreviousColorProperty() { return s_PreviousColorProperty; }

    static GlobalDependencyProperty s_ColorProperty;
    static GlobalDependencyProperty s_ColorSpectrumComponentsProperty;
    static GlobalDependencyProperty s_ColorSpectrumShapeProperty;
    static GlobalDependencyProperty s_IsAlphaEnabledProperty;
    static GlobalDependencyProperty s_IsAlphaSliderVisibleProperty;
    static GlobalDependencyProperty s_IsAlphaTextInputVisibleProperty;
    static GlobalDependencyProperty s_IsColorChannelTextInputVisibleProperty;
    static GlobalDependencyProperty s_IsColorPreviewVisibleProperty;
    static GlobalDependencyProperty s_IsColorSliderVisibleProperty;
    static GlobalDependencyProperty s_IsColorSpectrumVisibleProperty;
    static GlobalDependencyProperty s_IsHexInputVisibleProperty;
    static GlobalDependencyProperty s_IsMoreButtonVisibleProperty;
    static GlobalDependencyProperty s_MaxHueProperty;
    static GlobalDependencyProperty s_MaxSaturationProperty;
    static GlobalDependencyProperty s_MaxValueProperty;
    static GlobalDependencyProperty s_MinHueProperty;
    static GlobalDependencyProperty s_MinSaturationProperty;
    static GlobalDependencyProperty s_MinValueProperty;
    static GlobalDependencyProperty s_PreviousColorProperty;

    winrt::event_token ColorChanged(winrt::TypedEventHandler<winrt::ColorPicker, winrt::ColorChangedEventArgs> const& value);
    void ColorChanged(winrt::event_token const& token);

    event_source<winrt::TypedEventHandler<winrt::ColorPicker, winrt::ColorChangedEventArgs>> m_colorChangedEventSource;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
