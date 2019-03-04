// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class AcrylicBrushProperties
{
public:
    AcrylicBrushProperties();

    void AlwaysUseFallback(bool value);
    bool AlwaysUseFallback();

    void BackgroundSource(winrt::AcrylicBackgroundSource const& value);
    winrt::AcrylicBackgroundSource BackgroundSource();

    void TintColor(winrt::Color const& value);
    winrt::Color TintColor();

    void TintLuminosityOpacity(winrt::IReference<double> const& value);
    winrt::IReference<double> TintLuminosityOpacity();

    void TintOpacity(double value);
    double TintOpacity();

    void TintTransitionDuration(winrt::TimeSpan const& value);
    winrt::TimeSpan TintTransitionDuration();

    static winrt::DependencyProperty AlwaysUseFallbackProperty() { return s_AlwaysUseFallbackProperty; }
    static winrt::DependencyProperty BackgroundSourceProperty() { return s_BackgroundSourceProperty; }
    static winrt::DependencyProperty TintColorProperty() { return s_TintColorProperty; }
    static winrt::DependencyProperty TintLuminosityOpacityProperty() { return s_TintLuminosityOpacityProperty; }
    static winrt::DependencyProperty TintOpacityProperty() { return s_TintOpacityProperty; }
    static winrt::DependencyProperty TintTransitionDurationProperty() { return s_TintTransitionDurationProperty; }

    static GlobalDependencyProperty s_AlwaysUseFallbackProperty;
    static GlobalDependencyProperty s_BackgroundSourceProperty;
    static GlobalDependencyProperty s_TintColorProperty;
    static GlobalDependencyProperty s_TintLuminosityOpacityProperty;
    static GlobalDependencyProperty s_TintOpacityProperty;
    static GlobalDependencyProperty s_TintTransitionDurationProperty;

    static void EnsureProperties();
    static void ClearProperties();

    static void OnPropertyChanged(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPropertyChanged_CoerceToZeroOneRange(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);

    static void OnPropertyChanged_CoerceToZeroOneRange_Nullable(
        winrt::DependencyObject const& sender,
        winrt::DependencyPropertyChangedEventArgs const& args);
};
